/**
 * Copyright (c) 2024 Jun Yeop Na(ns090200@gmail.com)
 * All rights reserved.
 */

#ifndef COMPONENTS_DRAW_RECTANGLE_H
#define COMPONENTS_DRAW_RECTANGLE_H

#include <types/component_position.h>
#include <types/component_size.h>
#include <types/alias.h>

#include "draw_component_types.h"

struct Rectangle
{
	struct ComponentSize size;
	struct ComponentPosition position;
	color_type color;
};

void update_component_position()

#endif