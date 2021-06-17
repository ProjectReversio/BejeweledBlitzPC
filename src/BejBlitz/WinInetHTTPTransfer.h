#pragma once

#include <SexyAppFramework/Common.h>

namespace Sexy
{
    class WinInetHTTPTransfer
    {
        enum EResult
        {
            RESULT_DONE,
            RESULT_NOT_STARTED,
            RESULT_NOT_COMPLETED,
            RESULT_NOT_FOUND,
            RESULT_HTTP_ERROR,
            RESULT_HTTP_REDIRECT,
            RESULT_ABORTED,
            RESULT_SOCKET_ERROR,
            RESULT_INVALID_ADDR,
            RESULT_CONNECT_FAIL,
            RESULT_DISCONNECTED,
            RESULT_INTERNAL_ERROR,
        };

        std::string mSpecifiedBaseURL;
        std::string mSpecifiedRelURL;
        std::string mURL;
        std::string mProto;
        std::string mUserName;
        std::string mUserPass;
        std::string mHost;
        int mPort;
        std::string mPath;
        std::string mAction;
        std::string mUserAgent;
        std::string mPostContentType;
        std::string mPostData;
        _iobuf *mFP;
        bool mUsingFile;
        std::string mContent;
        int mContentLength;
        int mCurContentLength;
        bool mTransferPending;
        bool mThreadRunning;
        bool mExiting;
        bool mAborted;
        Sexy::WinInetHTTPTransfer::EResult mResult;
        RTL_CRITICAL_SECTION mFileCritSection;
    };
}