/**
 * Copyright (c) 2024 Jun Yeop Na(ns090200@gmail.com)
 * All rights reserved.
 */

#ifndef COMPONENTS_FFXIV_TACTIC_PAGE_H
#define COMPONENTS_FFXIV_TACTIC_PAGE_H

#include "component_size.h"

/**
 * Defines one drawing page.
 * Page can contain drawing components like square, lines
 */
struct FfxivTacticPage
{
    ComponentSize size;
};
#endif