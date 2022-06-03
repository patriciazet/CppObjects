#pragma once



struct Point
{
	int x, y;
};

class Rectangle
{
	int a = 0, b = 0;
public:
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(Point ur, Point ll);
	void setDimensions(int x, int y);
	int getField();
	int getCircuit();
};
