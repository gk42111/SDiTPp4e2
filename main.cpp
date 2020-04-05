#include<iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle C1(-1, 2, 7);
	Circle C2(4, 5, 6);
	Circle C3(CircleAdd(C1, C2));
	LookIntoCircle Look;

	cout << CircleCompare(C1,C2) << endl;
	cout << Look.GetRadius(C3) << endl;
	

	system("pause");
	return 0;
}