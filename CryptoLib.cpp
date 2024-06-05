//
// Created by itsag on 6/5/2024.
//

#include "CryptoLib.h"
#include <cmath>
#include <random>
#include <chrono>
#include <string>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
long updateValue()
{
    long max = 1000000000;
    long value = (std::chrono::system_clock::now().time_since_epoch().count()) % (max + 1);
    if (value < 0)
    {
        value = -value;
    }
    return value;
}
long generatePrimeNumber()
{
    long prime = updateValue();

    while (!isPrime(prime))
    {
        prime = updateValue();
    }

    return prime;
}


std::string CryotoLib::encryptAES(std::string message, long key)
{
    // Convert the key to a string
    std::string keyString = std::to_string(key);
    // Generate a random initialization vector (IV)
    // Create a cipher context
    // Encrypt the padded message
    //Return the encrypted message as a string
    return std::string();
}
