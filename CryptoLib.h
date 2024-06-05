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

TODO:Encryption Algorithms:
Symmetric Encryption: Implement AES (Advanced Encryption Standard) or DES (Data Encryption Standard).
Asymmetric Encryption: Implement RSA (Rivest-Shamir-Adleman) and ECC (Elliptic Curve Cryptography).

TODO:Hash Functions:
Implement hash functions like SHA-256 (Secure Hash Algorithm 256-bit) and MD5 (Message Digest Algorithm 5).
Explore creating your own custom hash functions and test their effectiveness.

TODO:Digital Signatures:
Implement digital signature algorithms such as DSA (Digital Signature Algorithm) or ECDSA (Elliptic Curve Digital Signature Algorithm).
Create a system for signing and verifying messages/documents.

TODO:Key Exchange Algorithms:
Implement the Diffie-Hellman key exchange protocol.
Explore and implement other key exchange methods like the Elliptic Curve Diffie-Hellman (ECDH).

TODO:Random Number Generation:
Implement pseudorandom number generators (PRNGs) and cryptographically secure PRNGs.
Study and implement algorithms like the Linear Congruential Generator (LCG) and Mersenne Twister.

TODO:Error Detection and Correction:
Implement algorithms for error detection (e.g., CRC, Cyclic Redundancy Check).
Implement error-correcting codes like Hamming code and Reed-Solomon code.

TODO:Steganography:
Implement techniques for hiding information within digital media.
Explore LSB (Least Significant Bit) method for image steganography.
Advanced Features and Applications:

TODO:Secure Communication Protocols:
Build a basic implementation of TLS (Transport Layer Security) or SSL (Secure Sockets Layer).
Implement end-to-end encryption for messaging applications.

TODO:Blockchain Technology:
Implement a simple blockchain and understand consensus algorithms like Proof of Work (PoW) and Proof of Stake (PoS).
Explore smart contracts and decentralized applications (dApps).

TODO:Quantum Cryptography:
Study and implement basic quantum key distribution algorithms like BB84.
Explore post-quantum cryptographic algorithms.
 */
class CryotoLib
{
    /*
     * Large Prime Numbers Generation Algorithm
     */
    long generatePrimeNumber();
    /*
     * Encryption Algorithm using Advanced Encryption Standard (AES)
     */
    std::string encryptAES(std::string message, long key);
};

#include "CryptoLib.cpp"

#endif // CYPTOLIB_MAIN_H
