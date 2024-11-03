/**
 * Copyright (c) 2024 Jun Yeop Na(ns090200@gmail.com)
 * All rights reserved.
 */

#ifndef TYPES_COMPONENT_POSITION_H
#define TYPES_COMPONENT_POSITION_H

#include "alias.h"
#include "coordinate.h"

/*
 * Defines types that are used to represent the position of a component.
 */

/*
 * All draw components have the corner points stored so that they can define their position.
 */
struct ComponentPosition
{
	struct Coordinate top_left_point;
	struct Coordinate top_right_point;
	struct Coordinate bottom_left_point;
	struct Coordinate bottom_right_point;

	/*
	 * Used to decide which component is topmost thus shown to user.
	 */
	z_value_type z;
};

#endif