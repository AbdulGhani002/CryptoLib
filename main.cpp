#include "CryptoLib.h"
#include <iostream>
#include <string>

int main()
{
    std::cout << CryptoLib::encryptAES("Abdul Ghani", CryptoLib::generatePrimeNumber()) << std::endl;
    return 0;
}
