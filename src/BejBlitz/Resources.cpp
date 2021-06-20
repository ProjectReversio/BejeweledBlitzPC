#include "Resources.h"

namespace Sexy
{
    Image* IMAGE_CURSOR_POINTER = nullptr;
    Image* IMAGE_CURSOR_HAND = nullptr;
    Image* IMAGE_CURSOR_DRAGGING = nullptr;
    Image* IMAGE_CRYSTALBALL = nullptr;
    Image* IMAGE_CRYSTALBALL_SHADOW = nullptr;
    Image* IMAGE_DIALOG_BUTTON = nullptr;
    Image* IMAGE_BROWSER_BACKBTN = nullptr;
    Image* IMAGE_MAIN_MENU_RESIZER = nullptr;
    Image* IMAGE_MAIN_MENU_BEJEWELED = nullptr;
    Image* IMAGE_MAIN_MENU_MINI_BOOST_BAR = nullptr;
    Image* IMAGE_CRYSTAL_SHADOW = nullptr;
    Image* IMAGE_WINDOWED_BUTTON = nullptr;
    Image* IMAGE_WAIT_120PX_BALL = nullptr;
    Image* IMAGE_WAIT_120PX_BRIGHT = nullptr;
    Image* IMAGE_WAIT_120PX_CANCEL_BUTTON = nullptr;
    Image* IMAGE_WAIT_120PX_DULL = nullptr;
    Image* IMAGE_WAIT_120PX_GEM_GLOW = nullptr;
    Image* IMAGE_WAIT_BALL = nullptr;
    Image* IMAGE_WAIT_BRIGHT = nullptr;
    Image* IMAGE_WAIT_CANCEL_BUTTON = nullptr;
    Image* IMAGE_WAIT_DULL = nullptr;
    Image* IMAGE_WAIT_GEM_GLOW = nullptr;
    Image* IMAGE_DIALOG_BACKGROUND = nullptr;
    Image* IMAGE_AUTO_UP_RES_GEN_DOWNLOAD_EMPTY = nullptr;
    Image* IMAGE_AUTO_UP_RES_GEN_DOWNLOAD_FILL = nullptr;
    Image* IMAGE_AUTO_UP_RES_GEN_SCROLLBAR = nullptr;
    Image* IMAGE_AUTO_UP_RES_GEN_SCROLLHANDLE = nullptr;
    Image* IMAGE_AUTO_UP_RES_GEN_TEXT_BG = nullptr;
    Image* IMAGE_DIALOG_SLIDERHANDLE = nullptr;
    Font* FONT_MULTIPLIER = nullptr;
    Font* FONT_PLAYBUTTONS = nullptr;
    Font* FONT_LOADER_TIP = nullptr;
    Font* FONT_DIALOG_HEADER = nullptr;
    Font* FONT_DIALOG_SMALL_TEXT = nullptr;
    Font* FONT_DIALOG_BUTTONS = nullptr;
    Font* FONT_EULA_TEXT = nullptr;

    bool ExtractInitResources(ResourceManager* resourceManager)
    {
        //resourceManager->InitResourceManager(); // TODO: Missing function

        // TODO: Extra arguments are intId and optional but these aren't support yet
        IMAGE_CURSOR_DRAGGING = resourceManager->GetImageThrow("IMAGE_CURSOR_DRAGGING");//, 122, false);
        IMAGE_CURSOR_HAND = resourceManager->GetImageThrow("IMAGE_CURSOR_HAND");//, 123, false);
        IMAGE_CURSOR_POINTER = resourceManager->GetImageThrow("IMAGE_CURSOR_HAND");//, 124, false);
        IMAGE_CRYSTALBALL = resourceManager->GetImageThrow("IMAGE_CRYSTALBALL");//, 125, false);
        IMAGE_CRYSTALBALL_SHADOW = resourceManager->GetImageThrow("IMAGE_CRYSTALBALL_SHADOW");//, 126, 0);
        IMAGE_DIALOG_BUTTON = resourceManager->GetImageThrow("IMAGE_DIALOG_BUTTON");//, 127, 0);
        IMAGE_BROWSER_BACKBTN = resourceManager->GetImageThrow("IMAGE_BROWSER_BACKBTN");//, 128, 0);
        IMAGE_MAIN_MENU_RESIZER = resourceManager->GetImageThrow("IMAGE_MAIN_MENU_RESIZER");//, 129, 0);
        IMAGE_MAIN_MENU_BEJEWELED = resourceManager->GetImageThrow("IMAGE_MAIN_MENU_BEJEWELED");//, 130, 0);
        IMAGE_MAIN_MENU_MINI_BOOST_BAR = resourceManager->GetImageThrow("IMAGE_MAIN_MENU_MINI_BOOST_BAR");//, 131, 0);
        IMAGE_CRYSTAL_SHADOW = resourceManager->GetImageThrow("IMAGE_CRYSTAL_SHADOW");//, 132, 0);
        IMAGE_WINDOWED_BUTTON = resourceManager->GetImageThrow("IMAGE_WINDOWED_BUTTON");//, 133, 0);
        IMAGE_WAIT_120PX_BALL = resourceManager->GetImageThrow("IMAGE_WAIT_120PX_BALL");//, 134, 0);
        IMAGE_WAIT_120PX_BRIGHT = resourceManager->GetImageThrow("IMAGE_WAIT_120PX_BRIGHT");//, 135, 0);
        IMAGE_WAIT_120PX_CANCEL_BUTTON = resourceManager->GetImageThrow("IMAGE_WAIT_120PX_CANCEL_BUTTON");//, 136, 0);
        IMAGE_WAIT_120PX_DULL = resourceManager->GetImageThrow("IMAGE_WAIT_120PX_DULL");//, 137, 0);
        IMAGE_WAIT_120PX_GEM_GLOW = resourceManager->GetImageThrow("IMAGE_WAIT_120PX_GEM_GLOW");//, 138, 0);
        IMAGE_WAIT_BALL = resourceManager->GetImageThrow("IMAGE_WAIT_BALL");//, 139, 0);
        IMAGE_WAIT_BRIGHT = resourceManager->GetImageThrow("IMAGE_WAIT_BRIGHT");//, 140, 0);
        IMAGE_WAIT_CANCEL_BUTTON = resourceManager->GetImageThrow("IMAGE_WAIT_CANCEL_BUTTON");//, 141, 0);
        IMAGE_WAIT_DULL = resourceManager->GetImageThrow("IMAGE_WAIT_DULL");//, 142, 0);
        IMAGE_WAIT_GEM_GLOW = resourceManager->GetImageThrow("IMAGE_WAIT_GEM_GLOW");//, 143, 0);
        IMAGE_DIALOG_BACKGROUND = resourceManager->GetImageThrow("IMAGE_DIALOG_BACKGROUND");//, 240, 0);
        IMAGE_AUTO_UP_RES_GEN_DOWNLOAD_EMPTY = resourceManager->GetImageThrow("IMAGE_AUTO_UP_RES_GEN_DOWNLOAD_EMPTY");//, 846, 0);
        IMAGE_AUTO_UP_RES_GEN_DOWNLOAD_FILL = resourceManager->GetImageThrow("IMAGE_AUTO_UP_RES_GEN_DOWNLOAD_FILL");//, 847, 0);
        IMAGE_AUTO_UP_RES_GEN_SCROLLBAR = resourceManager->GetImageThrow("IMAGE_AUTO_UP_RES_GEN_SCROLLBAR");//, 848, 0);
        IMAGE_AUTO_UP_RES_GEN_SCROLLHANDLE = resourceManager->GetImageThrow("IMAGE_AUTO_UP_RES_GEN_SCROLLHANDLE");//, 849, 0);
        IMAGE_AUTO_UP_RES_GEN_TEXT_BG = resourceManager->GetImageThrow("IMAGE_AUTO_UP_RES_GEN_TEXT_BG");//, 850, 0);
        IMAGE_DIALOG_SLIDERHANDLE = resourceManager->GetImageThrow("IMAGE_DIALOG_SLIDERHANDLE");//, 256, 0);
        FONT_MULTIPLIER = resourceManager->GetFontThrow("FONT_MULTIPLIER");//, 144);
        FONT_PLAYBUTTONS = resourceManager->GetFontThrow("FONT_PLAYBUTTONS");//, 145);
        FONT_LOADER_TIP = resourceManager->GetFontThrow("FONT_LOADER_TIP");//, 146);
        FONT_DIALOG_HEADER = resourceManager->GetFontThrow("FONT_DIALOG_HEADER");//, 680);
        FONT_DIALOG_SMALL_TEXT = resourceManager->GetFontThrow("FONT_DIALOG_SMALL_TEXT");//, 683);
        FONT_DIALOG_BUTTONS = resourceManager->GetFontThrow("FONT_DIALOG_BUTTONS");//, 684);
        FONT_EULA_TEXT = resourceManager->GetFontThrow("FONT_EULA_TEXT");//, 845);

        // TODO: PIEFFECT not supported yet
        //PIEFFECT_CRYSTALBALL = resourceManager->GetPIEffectThrow("PIEFFECT_CRYSTALBALL", 147);
        //PIEFFECT_CRYSTALRAYS = resourceManager->GetPIEffectThrow("PIEFFECT_CRYSTALRAYS", 148);
        
        // TODO: Implement ExtractInitResources

        return true;
    }

    Image* IMAGE_LOADER_GEOM_GLOW = nullptr;
    Image* IMAGE_LOADER_POPCAP = nullptr;
    Image* IMAGE_LOADER_WHITEDOT = nullptr;
    Image* IMAGE_MAIN_MENU_NIGHT = nullptr;
    Image* IMAGE_768_MAIN_MENU_NIGHT = nullptr;
    Image* IMAGE_600_MAIN_MENU_NIGHT = nullptr;

    bool ExtractLoaderResources(ResourceManager* resourceManager)
    {
        //resourceManager->InitResourceManager(); // TODO: Missing function

        // TODO: Extra arguments are intId and optional but these aren't support yet
        IMAGE_LOADER_GEOM_GLOW = resourceManager->GetImageThrow("IMAGE_LOADER_GEOM_GLOW");//, 157, false);
        IMAGE_LOADER_POPCAP = resourceManager->GetImageThrow("IMAGE_LOADER_POPCAP");//, 158, false);
        IMAGE_LOADER_WHITEDOT = resourceManager->GetImageThrow("IMAGE_LOADER_WHITEDOT");//, 159, false);
        IMAGE_MAIN_MENU_NIGHT = resourceManager->GetImageThrow("IMAGE_MAIN_MENU_NIGHT");//, 160, false);
        IMAGE_768_MAIN_MENU_NIGHT = resourceManager->GetImageThrow("IMAGE_768_MAIN_MENU_NIGHT");//, 161, false);
        IMAGE_600_MAIN_MENU_NIGHT = resourceManager->GetImageThrow("IMAGE_600_MAIN_MENU_NIGHT");//, 162, false);

        return true;
    }

    Image* IMAGE_2DONLY_MAINMENU_BACKGROUND = nullptr;
    Image* IMAGE_2DONLY_MAINMENU_FOREGROUND = nullptr;

    bool Extract2DOnlyResources(ResourceManager* resourceManager)
    {
        //resourceManager->InitResourceManager(); // TODO: Missing function

        // TODO: Extra arguments are intId and optional but these aren't support yet
        IMAGE_2DONLY_MAINMENU_BACKGROUND = resourceManager->GetImageThrow("IMAGE_2DONLY_MAINMENU_BACKGROUND");//, 0, false);
        IMAGE_2DONLY_MAINMENU_FOREGROUND = resourceManager->GetImageThrow("IMAGE_2DONLY_MAINMENU_FOREGROUND");//, 1, false);

        return true;
    }
}
