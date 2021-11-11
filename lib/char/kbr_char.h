#ifndef __CHARPROCESS__
#define __CHARPROCESS__

#include <iostream>

class KerChar{
    private:
        const std::string _src;
        std::string _dest;
    public:
        KerChar(std::string input):_src(input){};
        std::string GetBitFromString();
};

#endif