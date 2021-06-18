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
    public:
        PopDRMComm *mComm;
        uint mBeginGetMsg;
        uint mGetTransferStatusMsg;
        uint mFinishGetMsg;

        static LRESULT CALLBACK BeginGet(const std::string& URL);
    };

public:
    HWND mHwnd;
    HWND mDRMHwnd;
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
    Web* mWeb;

public:
    PopDRMComm();
    virtual ~PopDRMComm();

    void InitWindow();
    void InitFileMapping();
    void BuyGame(const char* URL);
    void ThreadProc(void* theParam);
    static LRESULT CALLBACK WindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
};