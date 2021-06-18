#include "PopDRMComm.h"

PopDRMComm::PopDRMComm()
{
    mThread = nullptr;
    mThreadId = 0;
    mEvent = nullptr;
    mHwnd = nullptr;
    mDRMHwnd = nullptr;
    mFileHandle = nullptr;
    mDataPtr = nullptr;
    mRequiredThread = GetCurrentThreadId();
    mLockMsg = RegisterWindowMessageA("PopCapDRM_EnableLocking");
    mTimingMsg = RegisterWindowMessageA("PopCapDRM_EnableTiming");
    mQueryMsg = RegisterWindowMessageA("PopCapDRM_QueryData");
    mConnectMsg = RegisterWindowMessageA("PopCapDrm_IPC");
    mResponseMsg = RegisterWindowMessageA("PopCapDrm_IPC_Response");
    mForceLockMsg = RegisterWindowMessageA("PopCapDrm_ForceLock");
    mBuyGameMsg = RegisterWindowMessageA("PopCapDrm_BuyGame");
    mShowScreenMsg = RegisterWindowMessageA("PopCapDRM_ShowScreen");
    mWaitMsg = RegisterWindowMessageA("PopCapDRM_WaitUI");
    mConnected = false;

    InitializeCriticalSection(&mStringCritSection);
    InitWindow();

    mWeb = new Web();
    mWeb->mComm = this;
    mWeb->mBeginGetMsg = RegisterWindowMessageA("PopCamDRM_Web_BeginGet");
    mWeb->mGetTransferStatusMsg = RegisterWindowMessageA("PopCapDRM_Web_GetTransferStatus");
    mWeb->mFinishGetMsg = RegisterWindowMessageA("PopCapDRM_Web_FinishGet");
}

PopDRMComm::~PopDRMComm()
{
    if (mThread)
    {
        PostThreadMessageW(mThreadId, WM_QUIT, 0, 0);
        WaitForSingleObject(mThread, -1);
        CloseHandle(mThread);
    }

    if (mDataPtr)
        UnmapViewOfFile(mDataPtr);

    if (mFileHandle)
        CloseHandle(mFileHandle);

    DeleteCriticalSection(&mStringCritSection);

    if (mWeb)
        delete mWeb;
}

void PopDRMComm::InitWindow()
{
    // TODO: Implement InitWindow
}

void PopDRMComm::InitFileMapping()
{
    // TODO: Implement InitFileMapping
}

void PopDRMComm::BuyGame(const char* URL)
{
    // TODO: Implement BuyGame
}

void PopDRMComm::ThreadProc(void* theParam)
{
    // TODO: Implement ThreadProc
}

LRESULT CALLBACK PopDRMComm::WindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    // TODO: Implement WindowProc

    return DefWindowProc(hWnd, msg, wParam, lParam);
}

LRESULT CALLBACK PopDRMComm::Web::BeginGet(const std::string& URL)
{
    // TODO: Implement BeginGet

    return -1; // TEMP: return -1 for now
}
