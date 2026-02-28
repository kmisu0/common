/**
 * @file    bitutils.h
 * @brief   Inline functions for bit manipulation (uint8, uint16, uint32)
 *          Provides functions for setting, clearing, toggling, reading and checking bits.
 * @author  Milan Kiss
 * @date    2026-02-24
 *
 * This module provides inline functions to:
 *  - Set, clear and toggle individual bits with assertion checking of pointers (must not be NULL) and indexes
 *  - Read individual bits with assertion checking of indexes
 *  - Check bitmasks: whether all bits are 0 or all bits are 1
 */

#ifndef BITUTILS_H
#define BITUTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <assert.h>
#include <stddef.h>

// --------------------------- uint8 ---------------------------

/**
 * @brief   Bit manipulation functions for 8-bit variables (uint8_t)
 *
 * @details
 *  - setBitInUint8 / clearBitInUint8 / toggleBitInUint8:
 *      Set, clear, or toggle a single bit.
 *      The bit index must be in range (0–7).
 *      The caller must provide a valid, non-NULL pointer to the variable.
 *  - readBitInUint8:
 *      Reads the value of a specific bit.
 *      The bit index must be in range (0–7).
 *  - allBitsFalseUint8 / allBitsTrueUint8:
 *      Return a boolean indicating whether all bits are 0 or all bits are 1.
 */

/**
 * @brief   Sets a specific bit in a uint8_t variable.
 * @param   data Pointer to the uint8_t variable. 
 *               Must not be NULL (checked in debug builds).
 * @param   n    Bit index to set (0–7)
 */
static inline void setBitInUint8(uint8_t *data, uint8_t n)
{
    assert(data != NULL);
    assert(n < 8);
    *data |= (1U << n);
}

/**
 * @brief   Clears a specific bit in a uint8_t variable.
 * @param   data Pointer to the uint8_t variable
 *               Must not be NULL (checked in debug builds).
 * @param   n    Bit index to clear (0–7)
 */
static inline void clearBitInUint8(uint8_t *data, uint8_t n)
{
    assert(data != NULL);
    assert(n < 8);
    *data &= ~(1U << n);
}

/**
 * @brief   Reads a specific bit from a uint8_t variable.
 * @param   data The uint8_t variable to read
 * @param   n    Bit index to read (0–7)
 * @return  True if the specified bit is 1, false otherwise
 */
static inline bool readBitInUint8(uint8_t data, uint8_t n)
{
    assert(n < 8);
    return (data & (1U << n)) != 0;
}

/**
 * @brief   Toggles a specific bit in a uint8_t variable.
 * @param   data Pointer to the uint8_t variable to read
 *               Must not be NULL (checked in debug builds).
 * @param   n    Bit index to toggle (0–7)
 */
static inline void toggleBitInUint8(uint8_t *data, uint8_t n)
{
    assert(data != NULL);
    assert(n < 8);
    *data ^= (1U << n);
}

/**
 * @brief   Checks if all bits in a uint8_t variable are 0.
 * @param   data The uint8_t variable to check
 * @return  true if all bits are 0, false otherwise
 */
static inline bool allBitsFalseUint8(uint8_t data) { return data == 0; }

/**
 * @brief   Checks if all bits in a uint8_t variable are 1.
 * @param   data The uint8_t variable to check
 * @return  true if all bits are 1, false otherwise
 */
static inline bool allBitsTrueUint8(uint8_t data) { return data == 0xFF; }

// --------------------------- uint16 ---------------------------

/**
 * @brief   Bit manipulation functions for 16-bit variables (uint16_t)
 *
 * @details
 *  - setBitInUint16 / clearBitInUint16 / toggleBitInUint16:
 *      Set, clear, or toggle a single bit.
 *      The bit index must be in range (0–15).
 *      The caller must provide a valid, non-NULL pointer to the variable.
 *  - readBitInUint16:
 *      Reads the value of a specific bit.
 *      The bit index must be in range (0–15).
 *  - allBitsFalseUint16 / allBitsTrueUint16:
 *      Return a boolean indicating whether all bits are 0 or all bits are 1.
 */

/**
 * @brief   Sets a specific bit in a uint16_t variable.
 * @param   data Pointer to the uint16_t variable
 *               Must not be NULL (checked in debug builds).
 * @param   n    Bit index to set (0–15)
 */
static inline void setBitInUint16(uint16_t *data, uint8_t n)
{
    assert(data != NULL);
    assert(n < 16);
    *data |= (1U << n);
}

/**
 * @brief   Clears a specific bit in a uint16_t variable.
 * @param   data Pointer to the uint16_t variable
 *               Must not be NULL (checked in debug builds).
 * @param   n    Bit index to clear (0–15)
 */
static inline void clearBitInUint16(uint16_t *data, uint8_t n)
{
    assert(data != NULL);
    assert(n < 16);
    *data &= ~(1U << n);
}

/**
 * @brief   Reads a specific bit from a uint16_t variable.
 * @param   data The uint16_t variable to read
 * @param   n    Bit index to read (0–15)
 * @return  True if the specified bit is 1, false otherwise
 */
static inline bool readBitInUint16(uint16_t data, uint16_t n)
{
    assert(n < 16);
    return (data & (1U << n)) != 0;
}

/**
 * @brief   Toggles a specific bit in a uint16_t variable.
 * @param   data Pointer to the uint16_t variable to read
 * @param   n    Bit index to toggle (0–15)
 */
static inline void toggleBitInUint16(uint16_t *data, uint16_t n)
{
    assert(data != NULL);
    assert(n < 16);
    *data ^= (1U << n);
}

/**
 * @brief   Checks if all bits in a uint16_t variable are 0.
 * @param   data The uint16_t variable to check
 * @return  true if all bits are 0, false otherwise
 */
static inline bool allBitsFalseUint16(uint16_t data) { return data == 0; }

/**
 * @brief   Checks if all bits in a uint16_t variable are 1.
 * @param   data The uint16_t variable to check
 * @return  true if all bits are 1, false otherwise
 */
static inline bool allBitsTrueUint16(uint16_t data) { return data == 0xFFFF; }

// --------------------------- uint32 ---------------------------

/**
 * @brief   Bit manipulation functions for 32-bit variables (uint32_t)
 *
 * @details
 *  - setBitInUint32 / clearBitInUint32 / toggleBitInUint32:
 *      Set, clear, or toggle a single bit.
 *      The bit index must be in range (0–31).
 *      The caller must provide a valid, non-NULL pointer to the variable.
 *  - readBitInUint32:
 *      Reads the value of a specific bit.
 *      The bit index must be in range (0–31).
 *  - allBitsFalseUint32 / allBitsTrueUint32:
 *      Return a boolean indicating whether all bits are 0 or all bits are 1.
 */

/**
 * @brief   Sets a specific bit in a uint32_t variable.
 * @param   data Pointer to the uint32_t variable
 *               Must not be NULL (checked in debug builds).
 * @param   n    Bit index to set (0–31)
 */
static inline void setBitInUint32(uint32_t *data, uint8_t n)
{
    assert(data != NULL);
    assert(n < 32);
    *data |= (1UL << n);
}

/**
 * @brief   Clears a specific bit in a uint32_t variable.
 * @param   data Pointer to the uint32_t variable
 *               Must not be NULL (checked in debug builds).
 * @param   n    Bit index to clear (0–31)
 */
static inline void clearBitInUint32(uint32_t *data, uint8_t n)
{
    assert(data != NULL);
    assert(n < 32);
    *data &= ~(1UL << n);
}

/**
 * @brief   Reads a specific bit from a uint32_t variable.
 * @param   data The uint32_t variable to read
 * @param   n    Bit index to read (0–31)
 * @return  True if the specified bit is 1, false otherwise
 */
static inline bool readBitInUint32(uint32_t data, uint32_t n)
{
    assert(n < 32);
    return (data & (1UL << n)) != 0;
}

/**
 * @brief   Toggles a specific bit in a uint32_t variable.
 * @param   data Pointer to the uint32_t variable to read
 *               Must not be NULL (checked in debug builds).
 * @param   n    Bit index to toggle (0–31)
 */
static inline void toggleBitInUint32(uint32_t *data, uint32_t n)
{
    assert(data != NULL);
    assert(n < 32);
    *data ^= (1UL << n);
}

/**
 * @brief   Checks if all bits in a uint32_t variable are 0.
 * @param   data The uint32_t variable to check
 * @return  true if all bits are 0, false otherwise
 */
static inline bool allBitsFalseUint32(uint32_t data) { return data == 0; }

/**
 * @brief   Checks if all bits in a uint32_t variable are 1.
 * @param   data The uint32_t variable to check
 * @return  true if all bits are 1, false otherwise
 */
static inline bool allBitsTrueUint32(uint32_t data) { return data == 0xFFFFFFFF; }

#endif