#include "Bej3App.h"
#include "GraphicsRecorder.h"
#include "Resources.h"
#include "MainMenu.h"

#include <SexyAppFramework/D3DTester.h>
#include <SexyAppFramework/SWTri.h>
#include <SexyAppFramework/ResourceManager.h>
#include <SexyAppFramework/SoundManager.h>
#include <SexyAppFramework/WidgetManager.h>

namespace Sexy
{
    Bej3App *gApp;

    int ONLINE_BOOST_COSTS[NumBoosts] {5000, 7500, 5500, 2500, 3500};

    Bej3App::Bej3App()
    {
        mLogDebugViewToFile = false;
        if (GetAsyncKeyState(16) < 0)
            mLogDebugViewToFile = true;
        if (mLogDebugViewToFile)
            UpdateDebugViewHooks();
        //mMaxNonDrawCount = 50; // TODO: Missing Var
        mReInit = false;
        mPreInitArtRes = 0;
        mResForced = false;
        mWas3D = false;
        mArtRes = 600;
        mWidescreenAware = true;
        //mAllowWindowResize = true; // TODO: Missing Var
        mEnableMaximizeButton = true;
        mResChanged = false;
        mCurVoice = nullptr;
        mIgnoreSound = false;
        mPauseFrames = 0;
        mFocusedAfterLoad = false;
        //mNoVSync = false; // TODO: Missing Var
        mFullscreenBits = 32;
        mJumpToZen = false;
        mJumpToClassic = false;
        mJumpToBlitz = false;
        mLastLocalTime = 0;
        mMaxGamesPerDay = 0;
        mRegCodeNotNeeded = false;
        mWantDataUpdateOnFocus = false;
        mWaitingForRegUpdateTicks = 0;
        mBuyCoinsURL = "http://www.popcap.com";
        mSkipCoinCode = false;
        //mUpdater = nullptr; // TODO: Implement UpdaterWidget
        mCheckedForUpdates = false;
        mUpdaterVisible = false;
        mUpdaterShutdown = false;
        mCurrentVersion = L"";
        mPatchNoteVersion = L"";
        mStatsGetHandle = -1;
        mStatsStalled = false;
        mAutoEnable3D = true;
        mProdName = "BejeweledBlitz";
        mRegKey = "PopCap\\BejeweledBlitz";
        mTitle = L"Bejeweled Blitz v" + StringToSexyString(mProductVersion);
        mCurVoiceId = -1;
        mNextVoiceId = -1;
        //mProfile = nullptr; // TODO: Implement Profile
        //mMenu = nullptr; // TODO: Implement Menu
        mMainMenu = nullptr;
        //mBoard = nullptr; // TODO: Implement Board
        mLoaderScreen = nullptr;
        //mFacebookWidget = nullptr; // TODO: Implement FacebookWidget
        mCustomBassMusicInterface = nullptr;
        mCurVoice = 0;
        mNextVoice = 0;
        mShrunkenGems = nullptr;
        //mTempleObject = nullptr; // TODO: Implement D3DObject
        //mBlitzBackground = nullptr; // TODO: Implement Background
        //mBlitzBackgroundLo = nullptr; // TODO: Implement Background

        gGR = new GraphicsRecorder();
        gGR->mIgnoreDraws = false;
        gGR->mRecordDraws = false;
        gGR->mTimestamp = 0;

        MEMORYSTATUS memoryStatus;
        memoryStatus.dwTotalPhys = 0;
        memoryStatus.dwAvailPhys = 0;
        memoryStatus.dwTotalPageFile = 0;
        memoryStatus.dwAvailPageFile = 0;
        memoryStatus.dwTotalVirtual = 0;
        memoryStatus.dwAvailVirtual = 0;
        memoryStatus.dwMemoryLoad = 32;
        GlobalMemoryStatus(&memoryStatus);

        int memTotalMB = memoryStatus.dwAvailPhys >> 20;
        int memFreeMB = memoryStatus.dwTotalPageFile >> 20;
        int vidMemory = 0; //D3DTester::StaticGetVideoMemoryMB(); // TODO: Missing StaticGetVideoMemoryMB
        if (!vidMemory)
            vidMemory = 32;

        SetInteger("compat_AppVidMemory", vidMemory);
        SetInteger("compat_AppSysMemFreeMB", memFreeMB);
        SetInteger("compat_AppSysMemTotalMB", memTotalMB);

        //SetInteger("compat_AppOrigScreenWidth", mOrigScreenWidth); // TODO: Missing OrigScreenWidth
        //SetInteger("compat_AppOrigScreenHeight", mOrigScreenHeight); // TODO: Missing OrigScreenHeight

        // TODO: Need CfgMachineValue and OrigScreenHeight for the following
        /*int artRes = 0;
        if (!mCompatCfgMachine)
            goto LABEL_35;

        CfgMachineValue cfgDefaultArtRes = new CfgMachineValue(0, CFGMVT_None);
        if (mCompatCfgMachine->MachineExecuteFunction("GetAppDefaultArtRes", &cfgDefaultArtRes))
            artRes = cfgDefaultArtRes->GetInteger();

        if (artRes > 0)
        {
            if (artRes != 1200 && artRes != 768 && artRes != 600)
                Popup("Default art resolution must be either 1200, 768, or 600");
            mArtRes = artRes;
        } else
        {
LABEL_35:
            if (memTotalMB < 768 || mOrigScreenHeight < 1200 || vidMemory < 92)
            {
                if (memTotalMB < 256 || mOrigScreenHeight < 600 || vidMemory < 60)
                    mArtRes = 600;
                else
                    mArtRes = 768;
            } else {
                mArtRes = 1200;
            }
        }*/

        // TEMP: do this until the above can be used
        mArtRes = 600;

        mMusicVolume = 0.5;
        mVoiceVolume = 0.85;
        mBoostAutoRenew = true;
        mHeight = mArtRes;
        Ratio aspect(4, 3);
        mWidth = mArtRes * aspect.mNumerator / aspect.mDenominator;

        mQuitCountdown = 0;
        //mTooltipManager = nullptr; // TODO: Implement TooltipManager
        mWindowedButton = nullptr;
        //mResizeWidget = nullptr; // TODO: Implement ResizeWidget
        mTipIdx = 0;
        //mHighScores = nullptr; // TODO: Implement HighScores
        mCreatingFBUser = false;

        for (int i = 0; i < NumBoosts; i++)
            mBoostCosts[i] = ONLINE_BOOST_COSTS[i];

        mDialogObscurePct = 0.0f;

        // TODO: Implement UnderDialogWidget for the following
        /*mUnderDialogWidget = new UnderDialogWidget();
        mUnderDialogWidget->mMouseVisible = false;
        mUnderDialogWidget->mHasAlpha = true;
        mUnderDialogWidget->mShrunkScreen1 = false;
        mUnderDialogWidget->mShrunkScreen2 = false;
        mUnderDialogWidget->mClip = false;*/

        mWebRoot = "http://labs.popcap.com/facebook/bj3";
        mForcedWebRoot = false;

        mDRMComm = new PopDRMComm();
        if (!mDRMComm->mConnected)
        {
            mDRMComm->mEvent = CreateEvent(0, 0, 0, 0);
            PostMessage(HWND_BROADCAST, mDRMComm->mConnectMsg, GetCurrentProcessId(), (LPARAM)mDRMComm->mHwnd);
            WaitForSingleObject(mDRMComm->mEvent, 1);
            CloseHandle(mDRMComm->mEvent);
            mDRMComm->mEvent = nullptr;
        }
    }

    Bej3App::~Bej3App()
    {
        // TODO: Implement ~Bej3App
    }

    void Bej3App::Init()
    {
        Parent::Init();

        if (mLogDebugViewToFile)
            UpdateDebugViewHooks();

        if (!mForcedWebRoot)
        {
            // TODO: Finish Implementing Init
        }

        mMaxGamesPerDay = GetInteger("MaxGamesPerDay");

        if (!mBuildUnlocked)
        {
            PopDRMComm* drm = mDRMComm;
            if (IsWindow(drm->mDRMHwnd))
                mIsRegistered = SendMessage(drm->mDRMHwnd, drm->mQueryMsg, 4, 0) != 0;
            else
            {
                drm->mConnected = false;
                mIsRegistered = false;
            }
        }

        // TODO: Parse ranks.txt
        // TODO: Parse tips.txt
        // TODO: Parse patchnotes.txt
        // TODO: Parse badges.txt

        // TODO: Profiles

        // TODO: Web cache

        // TODO: Highscores

        // TODO: Updates

        SWTri_AddAllDrawTriFuncs();
        LoadResourceManifest();

        mCustomBassMusicInterface->ReadMusicXML();
        mCustomBassMusicInterface->QueueEvent(L"Play", L"LoadingScreen", true); // is forceRestart supposed to be true?

        mResourceManager->LoadResources("Init");
        if (!ExtractInitResources(mResourceManager))
            ShowResourceError(true);

        mResourceManager->LoadResources("Loader");
        if (!ExtractLoaderResources(mResourceManager))
            ShowResourceError(true);

        if (!Is3DAccelerated())
        {
            mResourceManager->LoadResources("2DOnly");
            if (!Extract2DOnlyResources(mResourceManager))
                ShowResourceError(true);
        }

        SetCursorImage(0, IMAGE_CURSOR_POINTER);
        SetCursorImage(1, IMAGE_CURSOR_HAND);
        SetCursorImage(2, IMAGE_CURSOR_DRAGGING);

        // TODO: 3D Objects

        // TODO: Facebook Widget

        // TODO: Background Images

        mMainMenu = new MainMenu();
        TRect<int> menuRes;
        menuRes.mX = -160 * mArtRes / 1200;
        menuRes.mY = 0;
        menuRes.mWidth = 1920 * mArtRes / 1200;
        menuRes.mHeight = 1200 * mArtRes / 1200;
        mMainMenu->Resize(menuRes);
        mMainMenu->ResizeButtons();
        mWidgetManager->AddWidget(mMainMenu);
        mWidgetManager->SetFocus(mMainMenu);

        // TODO: Tooltip Manager

        // TODO: Under Dialog Widgets

        // TODO: Windowed Button Widget

        // TODO: Resize Widget

        mSoundManager->SetVolume(mVoiceVolume); // should this be voice volume or something else?

        // TODO: Shared Render Target

        // TODO: Stuff



        // TODO: Finish Implementing Init
    }

    void Bej3App::UpdateDebugViewHooks()
    {
        // TODO: Implement UpdateDebugViewHooks
    }

    // TODO: Implement Bej3App
}
