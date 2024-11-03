/**
 * Copyright (c) 2024 Jun Yeop Na(ns090200@gmail.com)
 * All rights reserved.
 */

#ifndef TYPES_COMPONENT_BOUND_H
#define TYPES_COMPONENT_BOUND_H

#include "alias.h"

/*
 * When drawing, the mouse is dragged from top-left to bottom-right.
 So the component's position and size must be calculated with these two points as end points.
 */
struct ComponentBound
{
	struct Coordinate top_left_point;
	struct Coordinate bottom_right_point;
};

#endif