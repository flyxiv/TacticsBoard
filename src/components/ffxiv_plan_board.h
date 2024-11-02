/**
 * Copyright (c) 2024 Jun Yeop Na(ns090200@gmail.com)
 * All rights reserved.
 */

#ifndef COMPONENTS_FFXIV_PLAN_BOARD_H
#define COMPONENTS_FFXIV_PLAN_BOARD_H

#define MAX_PAGE_COUNT 10
#define MAX_PALETTE_COUNT 20

#include "component_size.h"
#include "ffxiv_tactic_page.h"
#include "ffxiv_plan_board_mode.h"

/**
 * The biggest component in the Application.
 * Contains all components needed for the board such as palletes, pages, etc.
 */
struct FfxivPlanBoard
{
	ComponentSize size;
	FfxivTacticPage pages[MAX_PAGE_COUNT];
	FfxivPlanBoardMode mode;
};

#endif