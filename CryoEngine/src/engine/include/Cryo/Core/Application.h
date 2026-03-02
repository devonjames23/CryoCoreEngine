#pragma once

namespace Cryo
{
    class Application
    {
    public:
        Application();
        ~Application();

        void Run();

    private:
        bool m_Running = true;
    };
}