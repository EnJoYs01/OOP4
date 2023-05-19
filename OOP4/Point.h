#pragma once
#include "ABSFigure.h"
#include"IMove.h"

class Point :public ABSFigure, public IMove{
private:
	COLORREF color;
public:
	Point(int, int, COLORREF color = RGB(0, 0, 0));
	void Hide();
	void Show();
	void MoveTo(int, int);
	void setColor(COLORREF color);
	COLORREF getColor();
};

