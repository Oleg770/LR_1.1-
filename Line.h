#pragma once

class Line
{
private:
	double A;
	double B;

public:
	void SetA(const double aa);
	void SetB(const double bb);
	double GetA();
	double GetB();

	void Init(double ia, double ib);
	Line();
	Line(double ia, double ib); // конструктор з параметрами
	double function(double x);
	void Read();
	void Display();

};

Line MakeLine(double aa, double bb);
