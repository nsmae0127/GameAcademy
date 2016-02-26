#pragma once

#include "Position.h"

class rt
{
public:
	rt(int x, int y, int w, int h);
	~rt();

	int size();
	bool intersect(int x, int y);
	bool crash(rt b);

private:
	CPosition pos;

	int width;
	int height;
};

