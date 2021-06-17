#include "Bej3App.h"

using namespace Sexy;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    // Make sure to set this. Some classes, like the exception handler and custom cursors
    // will need to use it.
    gHInstance = hInstance;
    while (true)
    {
        // Create and initialize our game application.
        gApp = new Bej3App();
        gApp->Init();

        // Starts the entire application: sets up the resource loading thread and
        // custom cursor thread, and enters the game loop where the application
        // will remain until it is shut down. You will most likely not need to
        // override this function.
        gApp->Start();


        gApp->Shutdown();
        if (!gApp->mReInit)
            break;

        delete gApp;
    }

    delete gApp;
    return 0;
}