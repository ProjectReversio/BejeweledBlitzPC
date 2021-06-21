#include "CustomBassMusicInterface.h"

namespace Sexy
{
    QueuedSongCommand::QueuedSongCommand()
    {
        // TODO: Implement QueuedSongCommand
    }

    SongEventInfo::SongEventInfo()
    {
        // TODO: Implement SongEventInfo
    }

    SongEventInfo::SongEventInfo(const SongEventInfo&)
    {
        // TODO: Implement SongEventInfo
    }

    SongEventInfo::~SongEventInfo()
    {
        // TODO: Implement ~SongEventInfo
    }

    SongInfo::SongInfo()
    {
        // TODO: Implement SongInfo
    }

    SongInfo::~SongInfo()
    {
        // TODO: Implement ~SongInfo
    }

    CustomBassMusicInterface::CustomBassMusicInterface(HWND hwnd) : Parent(hwnd)
    {
        // TODO: Implement CustomBassMusicInterface
    }

    CustomBassMusicInterface::~CustomBassMusicInterface()
    {
        // TODO: Implement ~CustomBassMusicInterface
    }

    void CustomBassMusicInterface::ParseEvent(const XMLElement& theXMLElement, SongEventInfo* theSongEventInfo)
    {
        // TODO: Implement ParseEvent
    }

    void CustomBassMusicInterface::ParseSong(const XMLElement& theXMLElement, SongInfo* theSongInfo)
    {
        // TODO: Implement ParseSong
    }

    void CustomBassMusicInterface::ParseDefaultEvents()
    {
        // TODO: Implement ParseDefaultEvents
    }

    void CustomBassMusicInterface::ParseMusic()
    {
        // TODO: Implement ParseMusic
    }

    void CustomBassMusicInterface::ReadMusicXML()
    {
        // TODO: Implement ReadMusicXML
    }

    void CustomBassMusicInterface::QueueEvent(const std::wstring& theEventName, const std::wstring& theSongName, bool forceRestart)
    {
        // TODO: Implement QueueEvent
    }

    SongInfo* CustomBassMusicInterface::FindSong(const std::wstring& theName)
    {
        // TODO: Implement FindSong
        return nullptr;
    }

    void CustomBassMusicInterface::StopAllMusic()
    {
        mSongName = L"";
        Parent::StopAllMusic();
    }

    void CustomBassMusicInterface::HandleEvent(SongInfo* theSongInfo, SongEventInfo* theSongEventInfo)
    {
        // TODO: Implement HandleEvent
    }

    void CustomBassMusicInterface::MusicSyncCallbackStub(ulong handle, ulong channel, ulong data, void* user)
    {
        // TODO: Implement MusicSyncCallbackStub
    }

    void CustomBassMusicInterface::CheckQueue()
    {
        // TODO: Implement CheckQueue
    }

    void CustomBassMusicInterface::SetTempo(int theTempo)
    {
        // TODO: Implement SetTempo
    }

    void CustomBassMusicInterface::ParseIntVector(std::vector<int>& theIntVector, const std::string& theString)
    {
        // TODO: Implement ParseIntVector
    }

    void CustomBassMusicInterface::Update()
    {
        Parent::Update();
        CheckQueue();

        if (mStopAll)
        {
            mStopAll = false;
            StopAllMusic();
        }
    }
}