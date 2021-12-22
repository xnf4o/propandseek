/*
 * xnf4o | p5ych0p4th1c#0458
 */
#pragma once
#include "../SDK.h"

class Drawing
{
public:
	void text(std::string text, CG::FVector2D position, CG::FLinearColor color = {1, 1, 1, 1}) const;
	void release(CG::UCanvas* canvas);
};

extern Drawing* drawing;