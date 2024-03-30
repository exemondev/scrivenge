#include "view_window.hpp"
#include "view_cli_window.hpp"
#include <ncurses.h>

int main()
{
    initscr();
    View::IWindow<WINDOW*> *win{ new View::CliWindow(10,10,0,0)};
    win->initWindow();
    endwin();
    return 0;
}