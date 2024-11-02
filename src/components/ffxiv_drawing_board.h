/**
 * Copyright (c) 2024 Jun Yeop Na(ns090200@gmail.com)
 * All rights reserved.
 */

#ifndef COMPONENTS_FFXIV_DRAWING_BOARD_H
#define COMPONENTS_FFXIV_DRAWING_BOARD_H

#include <limits.h>
#include <assert.h>
#include <types/component_size.h>

#include "draw/draw_component_types.h"

#define MAX_COMPONENT_COUNT 300
#define MAX_PAGE_WIDTH 2000
#define MAX_PAGE_HEIGHT 2000

/**
 * Defines one drawing page.
 * Page can contain drawing components like square, lines
 */
struct FfxivDrawingBoard
{
	struct ComponentSize size;
	struct DrawComponent components[MAX_COMPONENT_COUNT];
};

#endif