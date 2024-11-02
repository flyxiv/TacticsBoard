/**
 * Copyright (c) 2024 Jun Yeop Na(ns090200@gmail.com)
 * All rights reserved.
 */

#ifndef COMPONENTS_DRAW_ICON_H
#define COMPONENTS_DRAW_ICON_H

#include <types/component_size.h>
#include <types/component_position.h>

#include <types/alias.h>

struct Icon
{
	struct ComponentSize size;
	struct ComponentPosition position;
	char *icon_path;
};

#endif