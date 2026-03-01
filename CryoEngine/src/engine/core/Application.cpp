#include "pch.h"
#include "Application.h"
#include "Log.h"

namespace Cryo
{
    Application::Application()
    {
        LogInfo("Application Created");
    }

    Application::~Application()
    {
        LogInfo("Application Destroyed");
    }

    void Application::Run()
    {
        LogInfo("Application Run");

        while (m_Running)
        {
            // Temporary test loop
            m_Running = false;
        }
    }
}