/**
 * Copyright (c) 2024 Jun Yeop Na(ns090200@gmail.com)
 * All rights reserved.
 */

#ifndef COMPONENTS_DRAW_DRAW_COMPONENT_TYPES_H
#define COMPONENTS_DRAW_DRAW_COMPONENT_TYPES_H

#include "icon.h"
#include "rectangle.h"

enum DrawComponentType
{
	ICON = 0,
	RECTANGLE = 1
};

struct DrawComponent
{
	enum DrawComponentType type;
	union
	{
		struct Icon icon;
		struct Rectangle rectangle;
	} component;
};

#endif