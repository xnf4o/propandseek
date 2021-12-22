/*
 * xnf4o | p5ych0p4th1c#0458
 */

#include "../include.h"
#include "drawing.hpp"

#include <utility>
#include "../xor.hpp"
#include "../functions/Functions.h"
#include "../ZeroInput.h"
#include "../ZeroGUI.h"



void Drawing::text(std::string text, const FVector2D position, const FLinearColor color) const
{
	ZeroGUI::TextLeft1(std::move(text), position, color, true);
}

void Drawing::release(UCanvas* canvas)
{
	ZeroGUI::SetupCanvas(canvas);
}

Drawing* drawing = new Drawing();
