#pragma once

#include <SexyAppFramework/SexyAppBase.h>
#include "InternetManager.h"
#include "BetaSupport.h"

namespace Sexy
{
    class SexyApp : public SexyAppBase
    {
    protected:
        Sexy::InternetManager *mInternetManager;
        Sexy::BetaSupport *mBetaSupport;
        std::string mBetaSupportSiteOverride;
        std::string mReferId;
        std::string mVariation;
        uint mDownloadId;
        std::string mRegSource;
        uint mLastVerCheckQueryTime;
        bool mSkipAd;
        bool mDontUpdate;
        bool mCheckPartnerSig;
        int mBuildNum;
        std::string mBuildDate;
        std::string mUserName;
        std::string mRegUserName;
        std::string mRegCode;
        bool mIsRegistered;
        bool mBuildUnlocked;
        int mTimesPlayed;
        int mTimesExecuted;
        bool mTimedOut;
    };
}