#include <iostream>
#include "injector.h"
#include "address.h"

using InjectorPP::Injector;
using InjectorPP::InjectorCore;

int main()
{
    INJECTORPP_SETUP();

    Address* fakeAddress = INJECTORPP_FAKE<Address>();

    std::cout << fakeAddress->GetZipCode() << std::endl;

    std::cout << fakeAddress->GetCity() << std::endl;

    std::cout << fakeAddress->GetCapitalCityByCountry("") << std::endl;

    INJECTORPP_CLEANUP();

    return 0;
}