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
        // TODO: Implement EvaluatePiece
        return 0.0f;
    }

    bool SexyMathHermite::BuildCurve()
    {
        // TODO: Implement BuildCurve
        return false;
    }
}