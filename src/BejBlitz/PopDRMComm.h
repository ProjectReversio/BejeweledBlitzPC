#pragma once

#include <SexyAppFramework/Common.h>

class PopDRMComm
{
    class Web
    {
        enum EDownloaderStatus
        {
            STATUS_Done,
            STATUS_NotStarted,
            STATUS_Pending,
            STATUS_FileNotFound,
            STATUS_ServerError,
            STATUS_Aborted,
            STATUS_SocketError,
            STATUS_InvalidAddress,
            STATUS_ConnectFailed,
            STATUS_Disconnected,
            STATUS_InternalError,
        };
    private:
        PopDRMComm *mComm;
        uint mBeginGetMsg;
        uint mGetTransferStatusMsg;
        uint mFinishGetMsg;
    };

private:
    HWND *mHwnd;
    HWND *mDRMHwnd;
    void *mFileHandle;
    void *mDataPtr;
    bool mConnected;
    void *mEvent;
    void *mThread;
    uint mThreadId;
    uint mRequiredThread;
    int mLockMsg;
    int mTimingMsg;
    int mQueryMsg;
    int mConnectMsg;
    int mResponseMsg;
    int mForceLockMsg;
    int mBuyGameMsg;
    int mShowScreenMsg;
    int mWaitMsg;
    RTL_CRITICAL_SECTION mStringCritSection;
};