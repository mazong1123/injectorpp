#ifndef INJECTORPP_UTILITY_H
#define INJECTORPP_UTILITY_H

#include <string>

namespace InjectorPP
{
    class Utility
    {
    public:
        static std::string GetLastErrorStdStr();
        static std::string W2M(const wchar_t* str);

    private:
        Utility();
        ~Utility();
        Utility(const Utility&);
    };
}

#endif
