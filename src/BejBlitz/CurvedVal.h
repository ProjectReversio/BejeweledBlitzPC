#pragma once

#include <string>

namespace Sexy
{
    class CurvedVal
    {
    private:
        class CurveCacheRecord
        {
            float mTable[8192];
            //Sexy::SexyMathHermite mHermiteCurve; // TODO: Implement SexyMathHermite
            std::string mDataStr;
        };

        int mMode;
        int mRamp;
        long double mIncRate;
        long double mOutMin;
        long double mOutMax;
        const char **mDataP;
        const char *mCurDataPStr;
        int mInitAppUpdateCount;
        int *mAppUpdateCountSrc;
        Sexy::CurvedVal *mLinkedVal;
        Sexy::CurvedVal::CurveCacheRecord *mCurveCacheRecord;
        long double mCurOutVal;
        long double mPrevOutVal;
        long double mInMin;
        long double mInMax;
        bool mNoClip;
        bool mSingleTrigger;
        bool mOutputSync;
        bool mTriggered;
        bool mIsHermite;
        bool mAutoInc;
        long double mPrevInVal;
        long double mInVal;

    public:
        void SetConstant(double value);
    };
}