#ifndef INJECTORPP_CLASS_H
#define INJECTORPP_CLASS_H

#include <string>
#include <vector>

#include "function.h"

namespace InjectorPP
{
    struct Class
    {
        std::string Name;
        std::vector<Function> Methods;
    };
}

#endif