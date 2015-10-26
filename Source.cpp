#include <iostream>
#include "Vector.h"
using namespace std;


int main()
{
	//VECT2D vec1;
	//VECT2D vec2;
	//Vector<VECT2D> insert;

	//cout << "Type in the x and y values of the first point:\nx: ";
	//cin >> vec1.x;
	//cout << "y: ";
	//cin >> vec1.y;

	//cout << "\nNow type in the x and y values of the second point:\nx: ";
	//cin >> vec2.x;
	//cout << "y: ";
	//cin >> vec2.y;

	//insert.addition2D(vec1, vec2);
	//cout << "\nAfter performing Vector addition using the two points this is the resulting vector: (" << insert.addsum2D.x << ", " << insert.addsum2D.y << ")\n\n";

	//insert.subtraction2D(vec1, vec2);
	//cout << "After performing Vector subtraction using the two points this is the resulting vector: (" << insert.subsum2D.x << ", " << insert.subsum2D.y << ")\n\n";

	//VECT3D vecUno;
	//VECT3D vecDos;
	//Vector<VECT3D> newinsert;

	//cout << "Type in the coordinate values for the first 3D vector:\nx: ";
	//cin >> vecUno.x;
	//cout << "y: ";
	//cin >> vecUno.y;
	//cout << "z: ";
	//cin >> vecUno.z;

	//cout << "\nType in the coordinate values for the second 3D vector:\nx: ";
	//cin >> vecDos.x;
	//cout << "y: ";
	//cin >> vecDos.y;
	//cout << "z: ";
	//cin >> vecDos.z;

	//newinsert.addition3D(vecUno, vecDos);
	//cout << "\nAfter performing Vector addition using the two points this is the resulting vector: "
	//	<< "(" << newinsert.addsum3D.x << ", " << newinsert.addsum3D.y << ", " << newinsert.addsum3D.z << ")\n\n";

	//newinsert.subtraction3D(vecUno, vecDos);
	//cout << "After performing Vector subtraction using the two points this is the resulting vector: "
	//	<< "(" << newinsert.subsum3D.x << ", " << newinsert.subsum3D.y << ", " << newinsert.subsum3D.z << ")\n\n";

	//Vector<double> addmaginsert;
	//Vector<double> submaginsert;

	//addmaginsert.Magnitude2D(insert.addsum2D.x, insert.addsum2D.y);
	//cout << "The magnitude of the first 2D vector is " << addmaginsert.sum2D << ".\n\n";

	//submaginsert.Magnitude2D(insert.subsum2D.x, insert.subsum2D.y);
	//cout << "The magnitude of the second 2D vector is " << submaginsert.sum2D << ".\n\n";

	//addmaginsert.Magnitude3D(newinsert.addsum3D.x, newinsert.addsum3D.y, newinsert.addsum3D.z);
	//cout << "The magnitude of the first 3D vector is " << addmaginsert.sum3D << ".\n\n";

	//submaginsert.Magnitude3D(newinsert.subsum3D.x, newinsert.subsum3D.y, newinsert.subsum3D.z);
	//cout << "The magnitude of the second 3D vector is " << submaginsert.sum3D << ".\n\n";

	//Vector<VECT2D> NormalVec2D;
	//NormalVec2D.addsum2D = { 0, 0 };
	//NormalVec2D.subsum2D = { 0, 0 };

	//NormalVec2D.Normalizing2D(NormalVec2D.addsum2D, insert.addsum2D.x, insert.addsum2D.y, addmaginsert.sum2D);
	//cout << "The normalized values for the first 2D vector are as follows.\nx = "
	//	<< NormalVec2D.addsum2D.x << "\ny = " << NormalVec2D.addsum2D.y << "\nMagnitude = " << NormalVec2D.sum2D.x << "\n\n";

	//NormalVec2D.Normalizing2D(NormalVec2D.subsum2D, insert.subsum2D.x, insert.subsum2D.y, submaginsert.sum2D);
	//cout << "The normalized values for the second 2D vector are as follows.\nx = "
	//	<< NormalVec2D.subsum2D.x << "\ny = " << NormalVec2D.subsum2D.y << "\nMagnitude = " << NormalVec2D.sum2D.y << "\n\n";

	//Vector<VECT3D> NormalVec3D;
	//NormalVec3D.addsum3D = { 0, 0, 0 };
	//NormalVec3D.subsum3D = { 0, 0, 0 };

	//NormalVec3D.Normalizing3D(NormalVec3D.addsum3D, newinsert.addsum3D.x, newinsert.addsum3D.y, newinsert.addsum3D.z, addmaginsert.sum3D);
	//cout << "The normalized values for the first 3D vector are as follows.\nx = "
	//	<< NormalVec3D.addsum3D.x << "\ny = " << NormalVec3D.addsum3D.y << "\nz = " << NormalVec3D.addsum3D.z
	//	<< "\nMagnitude = " << NormalVec3D.sum3D.x << "\n\n";

	//NormalVec3D.Normalizing3D(NormalVec3D.subsum3D, newinsert.subsum3D.x, newinsert.subsum3D.y, newinsert.subsum3D.z, addmaginsert.sum3D);
	//cout << "The normalized values for the second 3D vector are as follows.\nx = "
	//	<< NormalVec3D.subsum3D.x << "\ny = " << NormalVec3D.subsum3D.y << "\nz = " << NormalVec3D.subsum3D.z
	//	<< "\nMagnitude = " << NormalVec3D.sum3D.y << "\n\n";

	Vector<double> dick;
	//dick = { 0.0,3.0,0.0 };
	Vector<double> butt;
	//butt = { 5,0 };
	VECT2D dickbutt = dick + butt;
	cout << dickbutt.x << ", " << dickbutt.y << endl;

	system("pause");
	return 0;
}