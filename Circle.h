#pragma once
#include "Point.h"
class Circle;
class Control
{
public:
	bool IntersectCheck(Circle&, Circle&);
};
class LookIntoCircle
{
public:
	double GetRadius(Circle&);
};
class Circle
{
private:
	Point Centre;
	double Radius;
public:
	Circle(double X, double Y, double R);
	friend class LookIntoCircle;
	friend bool Control::IntersectCheck(Circle&, Circle&);
	friend bool CircleCompare(Circle&, Circle&);
	friend Circle CircleAdd(Circle&, Circle&);
};
