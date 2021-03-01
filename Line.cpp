#include <iostream>
#include "Line.h"

using namespace std;

void Line::SetA(const double aa)
{
	A = aa;
}
void Line::SetB(const double bb)
{
	B = bb;
}

double Line::GetA() { return A; }

double Line::GetB() { return B; }



void Line::Init(double ia, double ib)
{

	A = ia; 
	B = ib;
	if (ia == 0)throw "Constanta!";
}

Line ::Line()
{
	Init(1, 0);
}

Line::Line(double ia, double ib) // конструктор з параметрами
{
	Init(ia, ib);
}

double Line::function(double x)
{
	return A * x + B;
}

void Line::Read()
{
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	if(A==0)throw "Constanta!";
}

void Line::Display()
{
	cout << A << "x +  B = " << B << endl;
}

Line MakeLine(double aa, double bb)
{
	if(aa==0)throw "Constanta!";
	return Line(aa, bb);
}
