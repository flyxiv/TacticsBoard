/**
 * Copyright (c) 2024 Jun Yeop Na(ns090200@gmail.com)
 * All rights reserved.
 */

#ifndef TYPES_ALIAS_H
#define TYPES_ALIAS_H

/**
 * color values are defined with '#ffffff' format,
 * so it needs 8 characters to store the color.
 * including the \0 character to define it as a string.
 */
#define COLOR_CHAR_SIZE 8

/**
 * Defines aliases for commonly used primitive types.
 *
 */
#include <stdint.h>
#include <assert.h>
#include <limits.h>

#include <components/ffxiv_tactic_page.h>

_Static_assert(MAX_PAGE_HEIGHT <= UINT16_MAX, "MAX_PAGE_HEIGHT should be less than or equal to UINT16_MAX");
_Static_assert(MAX_PAGE_WIDTH <= UINT16_MAX, "MAX_PAGE_WIDTH should be less than or equal to UINT16_MAX");
typedef uint16_t length_type;

_Static_assert(MAX_PAGE_HEIGHT <= INT16_MAX, "MAX_PAGE_HEIGHT should be less than or equal to INT16_MAX");
_Static_assert(MAX_PAGE_WIDTH <= INT16_MAX, "MAX_PAGE_WIDTH should be less than or equal to INT16_MAX");
typedef int16_t coordinate_type;

typedef uint8_t z_value_type;

typedef char color_type[COLOR_CHAR_SIZE];

#endif