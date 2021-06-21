#pragma once

#include <SexyAppFramework/Widget.h>
#include <SexyAppFramework/ButtonWidget.h>
#include "Bej3ButtonListener.h"
#include "CurvedVal.h"

namespace Sexy
{
    class MainMenu : public Widget, public Bej3ButtonListener
    {
    private:
        //Graphics3D::PerspectiveCamera mCamera; // TODO: Implement PerspectiveCamera
        //Graphics3D::PerspectiveCamera mButtonCamera; // TODO: Implement PerspectiveCamera
        CurvedVal mRotation;
        CurvedVal mButtonRotationAdd;
        struct PlayMenu *mPlayMenu;
        CurvedVal mForeBlackAlpha;
        CurvedVal mBkgBlackAlpha;
        CurvedVal mBWPct;
        CurvedVal mLogoAlpha;
        CurvedVal mLoaderAlpha;
        CurvedVal mGeomGlowAlpha;
        CurvedVal mCrystalAppearAlpha;
        CurvedVal mTitleAlpha;
        CurvedVal mOfflineUIAlpha;
        CurvedVal mUnderLoginUIAlpha;
        CurvedVal mTipTextAlpha;
        //Background *mBackground; // TODO: Implement Background
        //Background *mPlayBackground; // TODO: Implement Background
        //CrystalBall *mPlayCrystalBall; // TODO: Implement CrystalBall
        //CrystalBall *mLeftButton; // TODO: Implement CrystalBall
        //CrystalBall *mRightButton; // TODO: Implement CrystalBall
        //Bej3ButtonWidget *mHelpButton; // TODO: Implement Bej3ButtonWidget
        //Bej3ButtonWidget *mQuitButton; // TODO: Implement Bej3ButtonWidget
        ButtonWidget *mUserButton;
        //Bej3ButtonWidget *mFacebookButton; // TODO: Implement Bej3ButtonWidget
        //Bej3ButtonWidget *mLogoutButton; // TODO: Implement Bej3ButtonWidget
        Font *mUserNameFont;
        //OptionsDialog *mOptionsDialog; // TODO: Implement OptionsDialog
        //RecordsScreen *mRecordsScreen; // TODO: Implement RecordsScreen
        float mDispLoadPct;
        bool mLoaded;
        bool mSwitchedMusic;
        bool mFinishedLoadSequence;
        float mHighestVirtFPS;
        bool mWantsLoginScreen;
        bool mWantsCloseBrowser;
        bool mBoostUIDialogLogin;
        bool mFirstRotate;
        bool mFirstLoginRotate;

    public:
        MainMenu();
        virtual ~MainMenu();

        void SetupBackground();
        void Update() override;
        //void DrawAll(ModelFlags flags, Graphics* g) override; // TODO: DrawAll function
        void Draw(Graphics* g) override;
        void ButtonDepress(int num) override;

        void StartGame();
        void ResizeButtons();

        void NewButton(Image* image, int id, ButtonListener* listener);
    };
}