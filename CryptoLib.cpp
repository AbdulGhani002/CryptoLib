//
// Created by itsag on 6/5/2024.
//

#include "CryptoLib.h"
#include <cmath>
#include <random>
#include <chrono>

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
    long min = 100000;
    long max = 1000000000;
    long value = (std::chrono::system_clock::now().time_since_epoch().count()) % (max - min + 1) + min;
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
