#ifndef VIEW_WINDOW_HPP
#define VIEW_WINDOW_HPP

#include "view_window_geometry.hpp"

namespace View
{
    template<typename WinType>
    class IWindow
    {
    public:
        IWindow() = default;
        virtual ~IWindow() = default;

        // common methods for all windows, probably more
        virtual void render() = 0;
        virtual void update() = 0;
        virtual void initWindow() = 0;
        virtual void initSubWindow(WinType win, int rows, int cols, int beginX, int beginY) = 0;
    };
}
#endif