#include "view_cli_window.hpp"

namespace View
{
    CliWindow::CliWindow(int width, int height,int beginX, int beginY)
    : m_geometry{ width, height, beginX , beginY}
    {

    }

    void CliWindow::initWindow()
    {
        m_win = CliWindowPtr( newwin(
            m_geometry.getHeight(),
            m_geometry.getWidth(),
            m_geometry.getY(),
            m_geometry.getX()
        ), winDestroy );
    }

    void CliWindow::initSubWindow(WINDOW* win, int rows, int cols, int beginX, int beginY)
    {
        m_win = CliWindowPtr(subwin(win,rows, cols, beginY, beginX), winDestroy);
    }


    void CliWindow::render()
    {

    }

    void CliWindow::update()
    {

    }

}