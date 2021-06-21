#include "MainMenu.h"
#include "SexyCache.h"

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

        // TODO: Implement MainMenu
    }

    MainMenu::~MainMenu()
    {
        // TODO: Implement ~MainMenu

        this->RemoveAllWidgets(true);
    }

    void MainMenu::SetupBackground()
    {

    }

    void MainMenu::Update()
    {

    }

    // TODO: DrawAll function
    //void MainMenu::DrawAll(ModelFlags flags, Graphics* g) {}

    void MainMenu::Draw(Graphics* g)
    {

    }

    void MainMenu::ButtonDepress(int num)
    {

    }

    void MainMenu::StartGame()
    {

    }

    void MainMenu::ResizeButtons()
    {

    }

    void MainMenu::NewButton(Image* image, int id, ButtonListener* listener)
    {

    }
}