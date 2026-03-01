#pragma once

namespace Cryo::Platform
{
    // Writes to the platform's debug output (VS Output window on Windows)
    void DebugOutput(const char* message);

    // Optional helper: true if a debugger is attached
    bool IsDebuggerPresent();
}