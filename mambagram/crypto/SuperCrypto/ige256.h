#ifndef IGE256_H
#define IGE256_H

#include <vector>
#include <array>
#include <cstdint>
#include <stdexcept>

namespace Crypto {
    class AES256IGE {
    public:
        /**
         * Encrypt or decrypt data using AES-256-IGE.
         * 
         * @param in Input data to encrypt/decrypt.
         * @param key A 256-bit (32 bytes) encryption key.
         * @param iv A 256-bit (32 bytes) initialization vector.
         * @param encrypt Set to true for encryption, false for decryption.
         * @return A vector containing the encrypted/decrypted data.
         * @throws std::invalid_argument If input sizes are invalid.
         */
        static std::vector<uint8_t> process(const std::vector<uint8_t>& in, 
                                            const std::array<uint8_t, 32>& key, 
                                            const std::array<uint8_t, 32>& iv, 
                                            bool encrypt);
    };
}

#endif  // IGE256_H
