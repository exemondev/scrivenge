#include "view_window_geometry.hpp"

namespace View
{
    WindowGeometry::WindowGeometry(int width, int height, int beginX, int beginY)
    : m_width  { width  }
    , m_height { height }
    , m_beginX { beginX }
    , m_beginY { beginY }
    {

    }

    int WindowGeometry::getX() const { return m_beginX; }
    int WindowGeometry::getY() const { return m_beginY; }
    int WindowGeometry::getWidth() const  { return m_width;  }
    int WindowGeometry::getHeight() const { return m_height; } 

    void WindowGeometry::setX(int x) { m_beginX = x; }
    void WindowGeometry::setY(int y) { m_beginY = y; }
    void WindowGeometry::setWidth(int width)  { m_width = width;   }
    void WindowGeometry::setHeight(int height) { m_height = height; }
}