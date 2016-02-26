#pragma once
class CPosition
{
public:
	CPosition();
	CPosition(int posX, int posY);
	~CPosition();

	void SetData(int posX, int posY);
	int getX();
	int getY();

private:
	int x;
	int y;

};

