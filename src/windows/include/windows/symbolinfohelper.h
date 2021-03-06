#ifndef INJECTORPP_SYMBOLINFOHELPER_H
#define INJECTORPP_SYMBOLINFOHELPER_H

#define _NO_CVCONST_H

#include <Windows.h>
#include <DbgHelp.h>
#include <vector>

namespace InjectorPP
{
    class SymbolInfoHelper
    {
    public:
        SymbolInfoHelper();

        ~SymbolInfoHelper();

        PSYMBOL_INFO allocSymbol(int nameLen = MAX_SYM_NAME);

    private:
        SymbolInfoHelper(const SymbolInfoHelper&);

        std::vector<PSYMBOL_INFO> m_allocatedSymbolInfos;
    };
}

#endif
