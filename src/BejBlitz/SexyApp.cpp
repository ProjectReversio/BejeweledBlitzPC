#include <SexyAppFramework/SEHCatcher.h>
#include <SexyAppFramework/Debug.h>
#include <ImageLib/ImageLib.h>
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

    void SexyApp::Init()
    {
        Sexy::SEHCatcher::mCrashMessage = SexyStringToWString(GetString("UNEXPECTED_ERROR",
                  L"An unexpected error has occured!  Pressing 'Send Report' will send us helpful debugging information that may help us"
                  " resolve this issue in the future.\r\n"
                  "\r\n"
                  "You can also contact us directly at feedback@popcap.com."));

        Sexy::SEHCatcher::mSubmitMessage = SexyStringToWString(GetString("PLEASE_HELP",
                   L"Please help us out by providing as much information as you can about this crash. Is this the first time it happened?"
                   " Have you used other PopCap Deluxe games successfully before? Have you upgraded your drivers or any software recent"
                   "ly that may be interfering with this program?"));

        Sexy::SEHCatcher::mSubmitErrorMessage = SexyStringToWString(GetString("FAILED_CONNECT_POPCAP",
                  L"Failed to connect to PopCap servers.  Please check your Internet connection.\n"
                  "If you are on a dial-up connection, you may have to manually connect to your ISP."));

        Sexy::SEHCatcher::mSubmitHost = "www.popcap.com";

        OutputDebug(_S("Product: %s\r\n"), StringToSexyString(mProdName).c_str());
        OutputDebug(_S("BuildDate: %s\r\n"), StringToSexyString(mBuildDate).c_str());

        ImageLib::SetJ2KCodecKey("LU5OkT7!L06fiD9nMbCE9ZoJuXxgx4zcgVDd2!a1tb2uHfhRrLG5wnNySQswXqAt2h");

        Parent::Init();
        ++mTimesExecuted;
        if (IsScreenSaver())
            mSkipAd = true;
    }

    // TODO: Implement SexyApp
}