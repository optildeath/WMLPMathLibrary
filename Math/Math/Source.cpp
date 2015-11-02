#include <iostream>
#include "Vector.h"
using namespace std;


int main()
{
	Vector<double> vec1 = { 1.414213562373095, 1.414213562373095, 0 };
	cout << "vec1:\n";
	vec1.Magnitude();
	cout << vec1.magnitude << endl;
	vec1.Normalize();
	cout << vec1.x << endl << vec1.y << endl << vec1.magnitude << "\n\n";
	Vector<double> vec3 = { 2.8284271247461903, 2.8284271247461903, 0 };
	cout << "vec3:\n";
	vec3.Magnitude();
	cout << vec3.magnitude << endl;
	vec3 = vec3.Normalize();
	cout << vec3.x << endl << vec3.y << endl << vec3.magnitude << "\n\n";
	Vector<double> vec2 = { 3,4,0 };
	cout << "vec2:\n";
	vec2.Magnitude();
	cout << vec2.magnitude << endl;
	vec2.Normalize();
	cout << vec2.x << endl << vec2.y << endl << vec2.magnitude << "\n\n";
	Vector<double> vec4 = vec2.Normalize();
	cout << "vec4:\n";
	cout << "x: " << vec4.x << "\ny: " << vec4.y << "\nmagnitude: " << vec4.magnitude << "\n\n";
	Vector<double> A = { -5,2,2 };
	Vector<double> B = { 1,3,5 };
	double Dotprod;
	Dotprod = A.DotProduct(B);
	cout << Dotprod << "\n\n";
	Vector<double> C;
	C = A.CrossProduct(B);
	cout << C.x << endl << C.y << endl << C.z << "\n\n";
	system("pause");
	return 0;
}