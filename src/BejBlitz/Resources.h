#pragma once

#include <SexyAppFramework/ResourceManager.h>

namespace Sexy
{
    extern Image* IMAGE_CURSOR_POINTER;
    extern Image* IMAGE_CURSOR_HAND;
    extern Image* IMAGE_CURSOR_DRAGGING;

    extern bool ExtractInitResources(ResourceManager* resourceManager);
    extern bool ExtractLoaderResources(ResourceManager* resourceManager);
    extern bool Extract2DOnlyResources(ResourceManager* resourceManager);
}
