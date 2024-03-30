#ifndef VIEW_UI_HPP
#define VIEW_UI_HPP

namespace View
{
    class IUi
    {
    public:
        IUi() = default;
        virtual ~IUi() = default;
        virtual void display() = 0;
        virtual void init() = 0;
        virtual void addNewWindow() = 0;
    };
}

#endif