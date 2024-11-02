/**
 * Copyright (c) 2024 Jun Yeop Na(ns090200@gmail.com)
 * All rights reserved.
 */

#ifndef COMPONENTS_FFXIV_TACTIC_PAGE_H
#define COMPONENTS_FFXIV_TACTIC_PAGE_H

#include "ffxiv_drawing_board.h"
#include "ffxiv_tactics_notes.h"

struct FfxivTacticPage
{
	struct FfxivDrawingBoard drawing_board;
	struct FfxivTacticsNotes notes;
};

#endif