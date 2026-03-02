#include "pch.h"
#include "Cryo/Platform/Platform.h"

#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <Windows.h>
#endif

namespace Cryo::Platform
{
    void DebugOutput(const char* message)
    {
#if defined(_WIN32)
        ::OutputDebugStringA(message);
#else
        (void)message;
#endif
    }

    bool IsDebuggerPresent()
    {
#if defined(_WIN32)
        return ::IsDebuggerPresent() != 0;
#else
        return false;
#endif
    }
}