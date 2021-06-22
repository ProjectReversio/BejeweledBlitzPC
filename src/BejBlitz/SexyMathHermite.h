#pragma once

#include <vector>

namespace Sexy
{
    class SexyMathHermite
    {
    private:
        class SPoint
        {
        public:
            float mX;
            float mFx;
            float mFxPrime;
        };

        class SPiece
        {
        public:
            float mCoeffs[4];
        };

        std::vector<SPoint> mPoints;
        std::vector<SPiece> mPieces;
        bool mIsBuilt;

    public:
        SexyMathHermite();
        SexyMathHermite(const SexyMathHermite& other);
        virtual ~SexyMathHermite();

        float Evaluate(float f);

    private:
        void CreatePiece(SPoint* point, SPiece* piece);
        float EvaluatePiece(float f, SPoint* point, SPiece* piece);
        bool BuildCurve();
    };
}