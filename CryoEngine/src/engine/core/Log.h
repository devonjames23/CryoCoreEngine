#pragma once

namespace Cryo
{
    enum class LogLevel
    {
        Trace,
        Info,
        Warn,
        Error
    };

    // Basic log function. You can expand this later (timestamps, file output, etc.)
    void Log(LogLevel level, const char* message);

    // Convenience helpers
    void LogTrace(const char* message);
    void LogInfo(const char* message);
    void LogWarn(const char* message);
    void LogError(const char* message);
}