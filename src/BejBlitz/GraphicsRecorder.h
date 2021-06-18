#pragma once

#include <SexyAppFramework/Common.h>
#include <queue>

namespace Sexy
{
    class GraphicsRecorder
    {
    public:
        int mTimestamp;
        bool mIgnoreDraws;
        bool mRecordDraws;
        //std::deque<Sexy::GraphicsOperation> mGraphicsOperations; // TODO: Implement GraphicsOperation
    };

    extern GraphicsRecorder* gGR;
}