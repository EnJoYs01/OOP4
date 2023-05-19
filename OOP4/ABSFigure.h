#pragma once
class ABSFigure{
private:
	int x;
	int y;
public:
	virtual void Hide() = 0;
	virtual void Show() = 0;
	void setX(int);
	void setY(int);
	int getX();
	int getY();
};

