//
// Created by itsag on 6/5/2024.
//

#ifndef CYPTOLIB_MAIN_H
#define CYPTOLIB_MAIN_H
#include <string>
/*
 * TODO:Cryptographic Library

*DONE:Prime Number Generation:
Implement algorithms to generate large prime numbers.
Use methods like the Sieve of Eratosthenes and probabilistic tests like the Miller-Rabin primality test.

*DONE:Encryption Algorithms:
Symmetric Encryption: Implement AES (Advanced Encryption Standard) or DES (Data Encryption Standard).
Asymmetric Encryption: Implement RSA (Rivest-Shamir-Adleman) and ECC (Elliptic Curve Cryptography).

*DONE:Hash Functions:
Implement hash functions like SHA-256 (Secure Hash Algorithm 256-bit) and MD5 (Message Digest Algorithm 5).

*DONE:Digital Signatures:
Implement digital signature algorithms such as DSA (Digital Signature Algorithm) or ECDSA (Elliptic Curve Digital Signature Algorithm).
Create a system for signing and verifying messages/documents.


*DONE:Error Detection and Correction:
Implement algorithms for error detection (e.g., CRC, Cyclic Redundancy Check).
Implement error-correcting codes like Hamming code and Reed-Solomon code.
 */
class CryptoLib
{
public:
    /*
     * Large Prime Numbers Generation Algorithm
     */
    static long generatePrimeNumber();
    /*
     * Encryption Algorithm using Advanced Encryption Standard (AES)
     */
    static std::string encryptAES(const std::string &message, long key);

    /*
     * Decryption Algorithm using Advanced Encryption Standard (AES)
     */
    static std::string decryptAES(const std::string &cipher, long key);
    /*
     * Hash Function
     */
    static std::string hashFunction(const std::string &message);

    /*
     * Digital Signature Algorithm
     */
    static std::string signMessage(const std::string &message, long privateKey);
    /*
     * Verify Digital Signature
     */
    static bool verifySignature(const std::string &message, const std::string &signature, long publicKey);
    /*
    *Error Detection and Correction
    */
    static std::string crc(const std::string &message);
};

#include "CryptoLib.cpp"
#endif // CYPTOLIB_MAIN_H
