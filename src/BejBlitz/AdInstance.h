#pragma once

#include <SexyAppFramework/Common.h>

namespace Sexy
{
    enum AdType
    {
        AdType_None,
        AdType_Popup,
        AdType_MoreGames,
    };

    class AdInstance
    {
    private:
        Sexy::AdType mType;
        int mWidth;
        int mHeight;
        std::list<std::string> mResourceList;
        bool mHasAllResources;
        bool mIsNew;
        bool mRemove;
        bool mJustDownloaded;
        std::string mClickURL;
        std::string mInstanceName;
    };
}