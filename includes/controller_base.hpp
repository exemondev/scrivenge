#ifndef CONTROLLER_BASE_HPP
#define CONTROLLER_BASE_HPP

namespace Controller
{
    class IBase
    {
    public:
        IBase() = default;
        virtual ~IBase() = default;
        // methods that would be common, should add or remove if needed
        virtual void process() = 0;
        virtual void init() = 0;
    };
}

#endif