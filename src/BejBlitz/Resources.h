#pragma once

#include <SexyAppFramework/ResourceManager.h>

namespace Sexy
{
    extern Image* IMAGE_CURSOR_POINTER;
    extern Image* IMAGE_CURSOR_HAND;
    extern Image* IMAGE_CURSOR_DRAGGING;
    extern Image* IMAGE_CRYSTALBALL;
    extern Image* IMAGE_CRYSTALBALL_SHADOW;
    extern Image* IMAGE_DIALOG_BUTTON;
    extern Image* IMAGE_BROWSER_BACKBTN;
    extern Image* IMAGE_MAIN_MENU_RESIZER;
    extern Image* IMAGE_MAIN_MENU_BEJEWELED;
    extern Image* IMAGE_MAIN_MENU_MINI_BOOST_BAR;
    extern Image* IMAGE_CRYSTAL_SHADOW;
    extern Image* IMAGE_WINDOWED_BUTTON;
    extern Image* IMAGE_WAIT_120PX_BALL;
    extern Image* IMAGE_WAIT_120PX_BRIGHT;
    extern Image* IMAGE_WAIT_120PX_CANCEL_BUTTON;
    extern Image* IMAGE_WAIT_120PX_DULL;
    extern Image* IMAGE_WAIT_120PX_GEM_GLOW;
    extern Image* IMAGE_WAIT_BALL;
    extern Image* IMAGE_WAIT_BRIGHT;
    extern Image* IMAGE_WAIT_CANCEL_BUTTON;
    extern Image* IMAGE_WAIT_DULL;
    extern Image* IMAGE_WAIT_GEM_GLOW;
    extern Image* IMAGE_DIALOG_BACKGROUND;
    extern Image* IMAGE_AUTO_UP_RES_GEN_DOWNLOAD_EMPTY;
    extern Image* IMAGE_AUTO_UP_RES_GEN_DOWNLOAD_FILL;
    extern Image* IMAGE_AUTO_UP_RES_GEN_SCROLLBAR;
    extern Image* IMAGE_AUTO_UP_RES_GEN_SCROLLHANDLE;
    extern Image* IMAGE_AUTO_UP_RES_GEN_TEXT_BG;
    extern Image* IMAGE_DIALOG_SLIDERHANDLE;
    extern Font* FONT_MULTIPLIER;
    extern Font* FONT_PLAYBUTTONS;
    extern Font* FONT_LOADER_TIP;
    extern Font* FONT_DIALOG_HEADER;
    extern Font* FONT_DIALOG_SMALL_TEXT;
    extern Font* FONT_DIALOG_BUTTONS;
    extern Font* FONT_EULA_TEXT;
    extern bool ExtractInitResources(ResourceManager* resourceManager);

    extern Image* IMAGE_LOADER_GEOM_GLOW;
    extern Image* IMAGE_LOADER_POPCAP;
    extern Image* IMAGE_LOADER_WHITEDOT;
    extern Image* IMAGE_MAIN_MENU_NIGHT;
    extern Image* IMAGE_768_MAIN_MENU_NIGHT;
    extern Image* IMAGE_600_MAIN_MENU_NIGHT;
    extern bool ExtractLoaderResources(ResourceManager* resourceManager);

    extern Image* IMAGE_2DONLY_MAINMENU_BACKGROUND;
    extern Image* IMAGE_2DONLY_MAINMENU_FOREGROUND;
    extern bool Extract2DOnlyResources(ResourceManager* resourceManager);
}
