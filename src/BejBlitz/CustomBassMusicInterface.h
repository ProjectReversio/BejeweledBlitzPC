#pragma once

#include <SexyAppFramework/BassMusicInterface.h>
#include <SexyAppFramework/XMLParser.h>
#include "CurvedVal.h"

namespace Sexy
{
    class QueuedSongCommand
    {
    public:
        std::wstring mSongName;
        std::wstring mEventName;
        bool mForceRestart;

    public:
        QueuedSongCommand();
    };

    class SongEventInfo
    {
    public:
        std::wstring mName;
        std::string mVolumeData;
        std::string mTempoData;
        std::string mOffsetData;
        std::vector<int> mTracks;
        std::vector<int> mRowSync;
        bool mMultVolume;

    public:
        SongEventInfo();
        SongEventInfo(const SongEventInfo&);
        virtual ~SongEventInfo();
    };

    class TrackInfo
    {
    public:
        float mOrigVolume;
        CurvedVal mVolume;
    };

    class SongInfo
    {
    public:
        int mStartPos;
        std::vector<TrackInfo> mTracks;
        int mMusicId;
        std::wstring mName;
        std::multimap<std::wstring,SongEventInfo> mSongEventInfoMap;
        bool mLoop;
        CurvedVal mVolume;
        float mMainVolume;
        int mOrigTempo;
        CurvedVal mTempo;

    public:
        SongInfo();
        virtual ~SongInfo();
    };


    class CustomBassMusicInterface : public BassMusicInterface
    {
        typedef BassMusicInterface Parent;

    private:
        bool mHasFailed;
        XMLParser *mXMLParser;
        std::wstring mSongName;
        float mMusicVolumeScalar;
        std::multimap<std::wstring,SongEventInfo> mDefaultEventsMap;
        std::map<std::wstring,SongInfo*> mSongs;
        std::map<std::wstring,int> mLoadedMusicFiles;
        std::vector<QueuedSongCommand> mQueuedSongCommandVector;
        bool mForceParamUpdate;
        bool mCurCommandDone;
        bool mStopAll;

    public:
        CustomBassMusicInterface(HWND hwnd);
        virtual ~CustomBassMusicInterface();

        void ParseEvent(const XMLElement& theXMLElement, SongEventInfo* theSongEventInfo);
        void ParseSong(const XMLElement& theXMLElement, SongInfo* theSongInfo);
        void ParseDefaultEvents();
        void ParseMusic();
        void ReadMusicXML();
        void QueueEvent(const std::wstring& theEventName, const std::wstring& theSongName, bool forceRestart);
        SongInfo* FindSong(const std::wstring& theName);
        void StopAllMusic() override;
        void HandleEvent(SongInfo* theSongInfo, SongEventInfo* theSongEventInfo);
        void MusicSyncCallbackStub(ulong handle, ulong channel, ulong data, void* user);
        void CheckQueue();
        void SetTempo(int theTempo);
        void ParseIntVector(std::vector<int>& theIntVector, const std::string& theString);
        void Update() override;
    };
}