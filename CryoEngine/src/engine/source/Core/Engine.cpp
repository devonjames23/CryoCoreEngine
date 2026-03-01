#include "pch.h"
#include "Cryo/Core/Engine.h"
#include "../core/Application.h" 
#include "../core/Log.h"

namespace Cryo
{
    bool Init()
    {
        LogInfo("Engine Init()");
        return true;
    }

    void Shutdown()
    {
        LogInfo("Engine Shutdown()");
    }

    void Run()
    {
        Application app;
        app.Run();
    }
}