#pragma once

#include <SexyAppFramework/CritSect.h>

namespace Sexy
{
    struct SexyCacheData
    {
        int mVersion;
        HWND mHWnd;
        int mCachedItemCount;
        int mCacheSize;
    };


    class SexyCache
    {
    private:
        Sexy::CritSect mCritSect;
        Sexy::SexyCacheData mSexyCacheData;
        uint mSexyCacheMessage;
        std::map<void *,void *> mAllocDataMap;

    public:
        static bool Connected();
    };
}