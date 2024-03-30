#ifndef VIEW_UI_HPP
#define VIEW_UI_HPP

namespace View
{
    class IUi
    {
    public:
        ~Ui() = default;
        virtual void display() = 0;
        virtual void init() = 0;
        virtual void addNewWindow() = 0;
    };
}

#endif