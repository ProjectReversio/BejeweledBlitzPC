#include "SexyMathHermite.h"

namespace Sexy
{
    SexyMathHermite::SexyMathHermite()
    {
        mIsBuilt = false;
    }

    SexyMathHermite::SexyMathHermite(const SexyMathHermite& other)
    {
        mPoints = other.mPoints;
        mPieces = other.mPieces;
        mIsBuilt = other.mIsBuilt;
    }

    SexyMathHermite::~SexyMathHermite()
    {

    }

    float SexyMathHermite::Evaluate(float f)
    {
        if (!mIsBuilt)
        {
            if (!BuildCurve())
                return 0.0f;
            mIsBuilt = true;
        }

        if (mPieces.empty())
            return mPoints[mPieces.size() - 1].mFx;

        int i = 1;
        while (true)
        {
            if (mPoints[i].mX > f)
                break;
            i++;
            if (i >= mPieces.size())
                return mPoints[mPieces.size() - 1].mFx;
        }

        return EvaluatePiece(f, &mPoints[i], &mPieces[i]);
    }

    void SexyMathHermite::CreatePiece(SPoint* point, SPiece* piece)
    {
        // TODO: Implement CreatePiece
    }

    float SexyMathHermite::EvaluatePiece(float f, SPoint* point, SPiece* piece)
    {
        // TODO: Cleanup Decompile

        float v7 = f - point->mX;
        float v8 = f - point[1].mX; // TODO: Is this part correct?
        float fa = v7 * piece->mCoeffs[1] + piece->mCoeffs[0];
        float v5 = v7 * v7;
        float v6 = v5 * v8;
        float v10 = v5 * piece->mCoeffs[2] + fa;
        return v6 * piece->mCoeffs[3] + v10;
    }

    bool SexyMathHermite::BuildCurve()
    {
        // TODO: Implement BuildCurve
        return false;
    }
}