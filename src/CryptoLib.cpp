//
// Created by itsag on 6/5/2024.
//

#include "CryptoLib.h"
#include <cmath>
#include <random>
#include <chrono>
#include <string>
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
long CryptoLib::generatePrimeNumber()
{
    long prime = updateValue();

    while (!isPrime(prime))
    {
        prime = updateValue();
    }

    return prime;
}
int mapper(std::mt19937_64 &rng)
{
    std::uniform_int_distribution<int> dist(0, 255);
    return dist(rng);
}
std::string generateRandomIV()
{
    std::mt19937_64 rng(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    std::string iv;
    for (int i = 0; i < 16; i++)
    {
        iv += (char)mapper(rng);
    }
    return iv;
}
std::string CryptoLib::encryptAES(const std::string &message, long key)
{
    std::string keyString = std::to_string(key);

    std::string iv = generateRandomIV();
    std::string cipher = iv;

    for (int i = 0; i < message.length(); i++)
    {
        cipher += message[i] ^ keyString[i % keyString.length()] ^ iv[i % 16];
    }

    return std::string(cipher);
}

std::string CryptoLib::decryptAES(const std::string &cipher, long key)
{
    std::string keyString = std::to_string(key);
    std::string iv = cipher.substr(0, 16);
    std::string message = "";
    for (int i = 16; i < cipher.length(); i++)
    {
        message += cipher[i] ^ keyString[(i - 16) % keyString.length()] ^ iv[(i - 16) % 16];
    }
    return std::string(message);
}
std::string CryptoLib::hashFunction(const std::string &message)
{
    std::string hash = "";
    for (int i = 0; i < message.length(); i++)
    {
        hash += message[i] ^ 0x5A;
    }
    return hash;
}
std::string CryptoLib::signMessage(const std::string &message, long privateKey)
{
    std::string hash = hashFunction(message);
    return encryptAES(hash, privateKey);
}
bool CryptoLib::verifySignature(const std::string &message, const std::string &signature, long publicKey)
{
    std::string hash = hashFunction(message);
    return decryptAES(signature, publicKey) == hash;
}
std::string CryptoLib::crc(const std::string &message)
{
    std::string crc = "";
    for (int i = 0; i < message.length(); i++)
    {
        crc += message[i] ^ 0x5A;
    }
    return crc;
}