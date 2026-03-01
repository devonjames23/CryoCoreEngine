#include "pch.h"
#include "Log.h"
#include "../platform/Platform.h"
#include <cstdio>

namespace Cryo
{
    static const char* LevelToString(LogLevel level)
    {
        switch (level)
        {
        case LogLevel::Trace: return "TRACE";
        case LogLevel::Info:  return "INFO";
        case LogLevel::Warn:  return "WARN";
        case LogLevel::Error: return "ERROR";
        default:              return "UNKNOWN";
        }
    }

    void Log(LogLevel level, const char* message)
    {
        char buffer[1024];
        std::snprintf(buffer, sizeof(buffer), "[Cryo][%s] %s\n", LevelToString(level), message);
        Platform::DebugOutput(buffer);
    }

    void LogTrace(const char* message) { Log(LogLevel::Trace, message); }
    void LogInfo(const char* message) { Log(LogLevel::Info, message); }
    void LogWarn(const char* message) { Log(LogLevel::Warn, message); }
    void LogError(const char* message) { Log(LogLevel::Error, message); }
}