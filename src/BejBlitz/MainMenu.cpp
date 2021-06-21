#include "MainMenu.h"
#include "SexyCache.h"
#include "Bej3App.h"
#include "Resources.h"

namespace Sexy
{
    MainMenu::MainMenu()
    {
        mHighestVirtFPS = 0.0;
        //mBackground = nullptr; // TODO: Implement Background
        mClip = false;
        mHasAlpha = true;
        mRotation.SetConstant(0.0);

        // TODO: Crystal Ball Buttons (Options, Play, Records)

        mUserButton = nullptr;
        mUserNameFont = nullptr;
        //mFacebookButton = nullptr; // TODO: Implement Bej3ButtonWidget
        //mLogoutButton = nullptr; // TODO: Implement Bej3ButtonWidget
        //mHelpButton = nullptr; // TODO: Implement Bej3ButtonWidget
        //mQuitButton = nullptr; // TODO: Implement Bej3ButtonWidget
        //mRecordsScreen = nullptr; // TODO: Implement RecordsScreen

        // TODO: Set some curved val constants

        mDispLoadPct = 0.0f;
        mLoaded = false;
        mSwitchedMusic = false;
        //mOptionsDialog = nullptr; // TODO: Implement OptionsDialog
        //mPlayBackground = nullptr; // TODO: Implement Background
        mFinishedLoadSequence = false;
        mWantsLoginScreen = false;
        mBoostUIDialogLogin = false;
        mWantsCloseBrowser = false;
        mFirstRotate = true;
        mFirstLoginRotate = true;
        SetupBackground();
        if (SexyCache::Connected())
            Update();
    }

    MainMenu::~MainMenu()
    {
        // TODO: Implement ~MainMenu

        this->RemoveAllWidgets(true);
    }

    void MainMenu::SetupBackground()
    {
        // TODO: Implement SetupBackground
    }

    void MainMenu::Update()
    {
        // TODO: Implement Update
    }

    // TODO: Implement DrawAll function
    //void MainMenu::DrawAll(ModelFlags flags, Graphics* g) {}

    void MainMenu::Draw(Graphics* g)
    {
        if (!mUpdateCnt)
            Update();

        DeferOverlay();

        // TODO: Implement Draw

        if ((!SexyCache::Connected() || mLoaded))
        {
            if (!gApp->Is3DAccelerated())
            {
                // TODO: Implement Draw
            }
        } else {
            g->SetColor(Color::White);
            g->SetFont(FONT_MULTIPLIER);
            WriteCenteredLine(g, (600 * gApp->mArtRes) / 1200, L"Loading...");
        }

        //if (mOfflineUIAlpha && mLoaderAlpha->GetOutVal() > 0.0)
        //{
        //
        //}

        // TODO: Implement Draw
    }

    void MainMenu::ButtonDepress(int num)
    {
        // TODO: Implement ButtonDepress
    }

    void MainMenu::StartGame()
    {
        // TODO: Implement StartGame
    }

    void MainMenu::ResizeButtons()
    {
        // TODO: Implement ResizeButtons
    }

    void MainMenu::NewButton(Image* image, int id, ButtonListener* listener)
    {
        // TODO: Implement NewButton
    }
}