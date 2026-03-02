// Application.cpp
#include "pch.h"
#include "Cryo/Core/Application.h"
#include "Cryo/Core/Log.h"

#include <chrono>
#include <thread>

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

        using clock = std::chrono::steady_clock;

        auto lastTime = clock::now();

        while (m_Running)
        {
            auto now = clock::now();
            std::chrono::duration<float> delta = now - lastTime;
            lastTime = now;

            float dt = delta.count(); // seconds

            // --- Update ---
            // TODO: Update systems, input, scenes, etc.
            // LogTrace("Tick"); // (don’t spam logs every frame)

            // --- Render ---
            // TODO: Render frame

            // Temporary: run for ~1 second then stop (so it doesn't spin forever yet)
            static float elapsed = 0.0f;
            elapsed += dt;
            if (elapsed >= 1.0f)
                m_Running = false;

            // Prevent 100% CPU usage while you have no window/events yet
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }
}