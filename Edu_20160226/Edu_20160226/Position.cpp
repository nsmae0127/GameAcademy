#include "Position.h"



CPosition::CPosition()
{
	x = 0;
	y = 0;
}

CPosition::CPosition(int posX, int posY)
{
	SetData(posX, posY);
}

CPosition::~CPosition()
{
}

void CPosition::SetData(int posX, int posY)
{
	x = posX;
	y = posY;
}

int CPosition::getX()
{
	return x;
}

int CPosition::getY()
{
	return y;
}
