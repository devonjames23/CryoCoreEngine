#pragma once

namespace Cryo::Platform
{
    // Writes a string to the platform debug output
    void DebugOutput(const char* message);

    // Returns true if a debugger is attached
    bool IsDebuggerPresent();
}