#pragma once

#include <SexyAppFramework/Buffer.h>
#include "WinInetHTTPTransfer.h"

namespace Sexy
{
    class SexyApp;

    class BetaSupport
    {
        class DataLogEntry
        {
            Sexy::Buffer mBuffer;
            std::string mFileName;
            std::string mFileExt;
        };

        Sexy::SexyApp *mApp;
        HFONT *mDialogFont;
        HFONT *mItalicsFont;
        HFONT *mBoldFont;
        int mPeriodCount;
        HWND *mHWnd;
        HWND *mTextHWnd;
        HWND *mNameHWnd;
        HWND *mPasswordHWnd;
        Sexy::WinInetHTTPTransfer mWinInetHTTPTransfer;
        bool mAborted;
        bool mDialogClosed;
        std::string mBetaCommentURL;
        std::string mDemoUploadFile;
        std::string mName;
        std::string mPassword;
        bool mValidated;
        std::map<std::string,Sexy::BetaSupport::DataLogEntry> mDataLogs;
    };
}