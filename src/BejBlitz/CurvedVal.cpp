#include "CurvedVal.h"

namespace Sexy
{
    void CurvedVal::SetConstant(double value)
    {
        mInVal = 0.0;
        mTriggered = false;
        mInMax = 0.0;
        mLinkedVal = nullptr;
        mInMin = 0.0;
        mRamp = 1;
        mOutMax = value;
        mOutMin = value;
    }
}