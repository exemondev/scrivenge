#ifndef VIEW_CLI_WINDOW_HPP
#define VIEW_CLI_WINDOW_HPP

#include "view_window.hpp"
#include "view_window_geometry.hpp"
#include <memory>
#include <functional>
#include <ncurses.h>

namespace View
{
    class CliWindow : public IWindow<WINDOW*>
    {
    private:
        std::function<void(WINDOW*)> winDestroy{ [](WINDOW* win) { delwin(win); } };
        using CliWindowPtr = std::unique_ptr<WINDOW, decltype(winDestroy)>;
    private:
        WindowGeometry m_geometry{};
        CliWindowPtr m_win{};
    public:
        CliWindow(int width, int height,int beginX, int beginY);
        ~CliWindow() = default;
        void initWindow() override;
        void initSubWindow(WINDOW* win, int rows, int cols, int beginX, int beginY) override;

        virtual void render() override;
        virtual void update() override;
    };
}

#endif