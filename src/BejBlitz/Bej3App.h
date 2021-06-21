#pragma once

#include <SexyAppFramework/SoundInstance.h>
#include <SexyAppFramework/ButtonWidget.h>

#include "SexyApp.h"
#include "PopDRMComm.h"
#include "MainMenu.h"

namespace Sexy
{
    const int NumBoosts = 5;

    class Bej3App : public SexyApp
    {
        typedef SexyApp Parent;
    private:
        double mVoiceVolume;
        bool mBoostAutoRenew;
        bool mIgnoreSound;
        std::string mWebRoot;
        bool mForcedWebRoot;
    public:
        bool mReInit;
    private:
        bool mWas3D;
        bool mResChanged;
        bool mResForced;
        bool mJumpToZen;
        bool mJumpToClassic;
        bool mJumpToBlitz;
        bool mLogDebugViewToFile;
        int mArtRes;
        int mPreInitArtRes;
        int mPauseFrames;
        bool mFocusedAfterLoad;
        bool mSkipCoinCode;
        std::string mTestBkg;
        std::string mForceBkg;
        //Sexy::CustomBassMusicInterface *mCustomBassMusicInterface; // TODO: Implement CustomBassMusicInterface
        //Sexy::CustomSoundManager *mCustomSoundManager; // TODO: Implement CustomSoundManager
        Sexy::Buffer mBadgeDumpBuffer;
        Sexy::Buffer mStatsDumpBuffer;
        int mBoostCosts[NumBoosts];
        PopDRMComm *mDRMComm;
        bool mRegCodeNotNeeded;
        bool mWantDataUpdateOnFocus;
        int mWaitingForRegUpdateTicks;
        std::string mBuyCoinsURL;
        std::string mClientId;
        Sexy::Image ***mShrunkenGems;
        //Sexy::Profile *mProfile; // TODO: Implement Profile
        std::wstring mSwitchProfileName;
        Sexy::MainMenu *mMainMenu;
        //Sexy::Menu *mMenu; // TODO: Implement Menu
        int mQuitCountdown;
        //Sexy::HighScores *mHighScores; // TODO: Implement HighScores
        Sexy::Image *mCoinImage;
        int mMaxGamesPerDay;
        int64 mLastLocalTime;
        //Sexy::Background *mBlitzBackground; // TODO: Implement Background
        //Sexy::Background *mBlitzBackgroundLo; // TODO: Implement Background
        //Sexy::Background *mBlitzBackgroundReplay; // TODO: Implement Background
        //Sexy::Board *mBoard; // TODO: Implement Board
        //Sexy::LoaderScreen *mLoaderScreen; // TODO: Implement LoaderScreen
        //Sexy::FacebookWidget *mFacebookWidget; // TODO: Implement FacebookWidget
        //Sexy::TooltipManager *mTooltipManager; // TODO: Implement TooltipManager
        //Sexy::SharedRenderTarget mRestartRT; // TODO: Implement SharedRenderTarget
        Sexy::SoundInstance *mCurVoice;
        int mCurVoiceId;
        Sexy::SoundInstance *mNextVoice;
        int mNextVoiceId;
        bool mInterruptCurVoice;
        std::wstring mLastUser;
        bool mCreatingFBUser;
        bool mCheckedForUpdates;
        bool mUpdaterVisible;
        bool mUpdaterShutdown;
        //Sexy::UpdaterWidget *mUpdater; // TODO: Implement UpdaterWidget
        std::wstring mCurrentVersion;
        std::wstring mPatchNoteVersion;
        std::vector<std::wstring> mPatchNotes;
        //Sexy::D3DObject *mTempleObject; // TODO: Implement D3DObject
        std::vector<std::wstring> mAffirmationFiles;
        std::vector<std::wstring> mSBAFiles;
        std::vector<std::wstring> mAmbientFiles;
        std::vector<std::wstring> mTips;
        std::vector<std::wstring> mRankNames;
        std::wstring mRankNameFormatted;
        std::vector<std::wstring> mBadgeNames;
        std::vector<std::vector<int>> mBadgeCutoffs;
        std::vector<std::vector<int>> mBadgeSecondaryCutoffs;
        //Sexy::UnderDialogWidget *mUnderDialogWidget; // TODO: Implement UnderDialogWidget
        float mDialogObscurePct;
        Sexy::ButtonWidget *mWindowedButton;
        //Sexy::ResizeWidget *mResizeWidget; // TODO: Implement ResizeWidget
        int mTipIdx;
        std::string mQueuedStatsCalls;
        unsigned int mStatsGetHandle;
        bool mStatsStalled;
        std::set<HWND *> mLastReturnTitledWindows;
        std::set<HWND *> mCurReturnTitledWindows;

    public:
        Bej3App();
        virtual ~Bej3App();

        void Init();
        void UpdateDebugViewHooks();
    };

    extern Bej3App* gApp;
}