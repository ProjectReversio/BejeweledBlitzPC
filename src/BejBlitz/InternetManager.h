#pragma once

#include <SexyAppFramework/HTTPTransfer.h>
#include "AdInstance.h"

namespace Sexy
{
    class InternetManager
    {
    private:
        int mNumMoreGamesAds;
        Sexy::HTTPTransfer mVersionCheckTransfer;
        Sexy::HTTPTransfer mFileTransfers[4];
        bool mParsed;
        bool mIsUpToDate;
        bool mDoingTransfers;
        std::string mUpdateURL;
        std::list<Sexy::AdInstance> mAdInstanceList;
        std::list<Sexy::AdInstance> mOldAdInstanceList;
        std::list<std::string> mPendingResourceList;
    };
}