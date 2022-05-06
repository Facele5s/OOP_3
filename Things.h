#ifndef THINGS_H
#define THINGS_H

#include <iostream>
#include <math.h>

using namespace std;

class Complex {
public:
	double re = 0;
	double im = 0;

	void set_complex(double r, double i);
	double get_re_complex();
	double get_im_complex();
	void output_complex();
	double abs();
	
	Complex sum(Complex a, Complex b);
	Complex diff(Complex a, Complex b);
};

class Vector {
public:
	double x;
	double y;
	
	void setVector(double x, double y);
	double getX();
	double getY();
	
	double length();
	void outputXY();
	
	double scalarMult(Vector a, Vector b);

};

class Circle {
public:
	double radius;
	string color;

	void setCircle(double radius, string color);
	double getRadius();
	string getColor();

	double ring_length();
	double area();
};

#endif