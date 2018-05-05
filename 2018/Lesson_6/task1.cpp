#include "stdafx.h"
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265359

class Rectangle 
{
	int _a;
	int _b;

public:
	int get_square();
	void set_a(int);
	void set_b(int);

};
int Rectangle::get_square()
{
	int S = _a * _b;
	return S;
}
void Rectangle::set_a(int a)
{
	_a = a;
}
void Rectangle::set_b(int b)
{
	_b = b;
}

class Circle
{
	int _r;
public:
	int get_square();
	void set_r(int);
};
int Circle::get_square()
{
	int S = _r * _r * pi;
	return S;
}
void Circle::set_r(int r)
{
	_r = r;
}

class Segment
{
	int _x1;
	int _x2;
	int _y1;
	int _y2;

public:
	int get_length();
	void set_x1(int);
	void set_x2(int);
	void set_y1(int);
	void set_y2(int);

};
int Segment::get_length()
{
	int x = _x2 - _x1;
	int y = _y2 - _y1;
	int L = sqrt(x*x+y*y);
	return L;
}
void Segment::set_x1(int x1)
{
	_x1 = x1;
}
void Segment::set_x2(int x2)
{
	_x2 = x2;
}
void Segment::set_y1(int y1)
{
	_y1 = y1;
}
void Segment::set_y2(int y2)
{
	_y2 = y2;
}

class Vector
{
	int _x;
	int _y;
	
public:
	int get_vector();
	void set_x(int);
	void set_y(int);
	
};
int Vector::get_vector()
{
	int x = x+x1;
	int y = y+y1;

	
}
void Vector::set_x(int x)
{
	_x = x;
}
void Vector::set_y(int y)
{
	_y = y;
}


int main()
{
	Rectangle my_rectangle;
	my_rectangle.set_a(2);
	my_rectangle.set_b(3);

	Circle my_circle;
	my_circle.set_r(4);

	Segment my_segment;
	my_segment.set_x1(2);
	my_segment.set_x2(3);
	my_segment.set_y1(4);
	my_segment.set_y2(5);

	Vector my_vector;
	my_vector1(2,3);
	my_vector2(4,6);
	


	printf("S_Rectangle = %d\n", my_rectangle.get_square());
	printf("S_Circle = %d\n", my_circle.get_square());
	printf("L_Segment = %d\n", my_segment.get_length());
	printf("Sum_Vector = %d\n", my_vector.get_vector());


	return 0;
}
