#include "rt.h"

rt::rt(int x, int y, int w, int h)
{
	pos.SetData(x, y);
	width = w;
	height = h;
}

rt::~rt()
{
}

int rt::size()
{
	return width * height;
}

bool rt::intersect(int x, int y)
{
	if (x >= pos.getX() && x <= pos.getX() + width
		&& y >= pos.getY() && y <= pos.getY() + height)
		return true;
	return false;
}

bool rt::crash(rt b)
{
	if (pos.getX() < b.pos.getX() + b.width && pos.getX() + width > b.pos.getX() 
		&& pos.getY() > b.pos.getY() - b.height && pos.getY() - width < b.pos.getY()) 
			return true;
	return false;
}

