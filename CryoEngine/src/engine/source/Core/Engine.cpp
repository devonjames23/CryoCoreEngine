#include "pch.h"
#include "Cryo/Core/Engine.h"

namespace Cryo
{
    bool Init()
    {
        OutputDebugStringA("[Cryo] Init()\n");
        return true;
    }

    void Shutdown()
    {
        OutputDebugStringA("[Cryo] Shutdown()\n");
    }
}
