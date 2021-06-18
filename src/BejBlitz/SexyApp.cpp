#include "SexyApp.h"

namespace Sexy
{
    SexyApp* Sexy::gSexyApp = NULL;

    SexyApp::SexyApp()
    {
        gSexyApp = this;
        mTimesPlayed = 0;
        mTimesExecuted = 0;
        mTimedOut = false;
        mCheckPartnerSig = true;
        mIsRegistered = false;
        mBuildUnlocked = false;
        mDownloadId = 0;
        mRegSource = "ingame";
        mSkipAd = false;
        mDontUpdate = false;
        mLastVerCheckQueryTime = 0;
        mDemoPrefix = "popcap";
        mDemoFileName = mDemoPrefix + ".dmo";
        mCompanyName = "PopCap";
        mFullCompanyName = "PopCap Games";
        mInternetManager = new InternetManager();
        mBetaSupport = nullptr;
        mBetaValidate = false;
        mBuildNum = atoi("00000000PACPOPPOPCAPPACPOPPOPCAPBUILDINFOMARKERPACPOPPOPCAPPACPOPPOPCAPXXXXXXXXX64578011");
        if (mBuildNum)
        {
            mBuildDate = "PACPOPPOPCAPPACPOPPOPCAPBUILDINFOMARKERPACPOPPOPCAPPACPOPPOPCAPXXXXXXXXX64578011";
        }
    }

    SexyApp::~SexyApp()
    {
        if (mBetaSupport)
            delete mBetaSupport;
        
        if (mInternetManager)
            delete mInternetManager;
    }

    // TODO: Implement SexyApp
}