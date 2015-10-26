#ifndef VECTOR_H
#define VECTOR_H

//struct VECT2D //A struct for 2D vectors
//{
//	double x; //double datatype used to allow for both whole numbers and decimal numbers to be used
//	double y;
//};
//
//struct VECT3D //A struct for 3D vectors
//{
//	double x;
//	double y;
//	double z;
//};

template <class T>
class Vector		//Vector class to perform vector equations
{
public:
	Vector(T);
	//double x;
	//double y;
	//double z;
	T x, y, z;
	template <typename T>
	Vector<T> operator+(T other) 
	{
		T temp;
		temp.x = x + other.x;
		temp.y = y + other.y;
		temp.z = z + other.z;

		return temp;
	}
	//Vector addition2D(T, T);										//Function for adding two 2D vectors together
	Vector subtraction2D(T, T);										//Function for subtracting one 2D vector from another 2D vector
	T addsum2D;														//Stores the results of the 2D addition function
	T subsum2D;														//Stores the results of the 2D subtraction function
	T sum2D;														//Stores the results of miscellaneous 2D functions
	Vector addition3D(T, T);										//Function for adding two 3D vectors together
	Vector subtraction3D(T, T);										//Function for subtracting one 3D vector from another 3D vector
	T addsum3D;														//Stores the results of the 3D addition function
	T subsum3D;														//Stores the results of the 3D subtraction function
	T sum3D;														//Stores the results of miscellaneous 3D functions
	Vector Magnitude2D(T, T);										//Function for finding the magnitude of 2D vectors
	Vector Magnitude3D(T, T, T);									//Function for finding the magnitude of 3D vectors
	Vector Normalizing2D(VECT2D&, double, double, double);			//Function for finding the normalized values of 2D vectors
	Vector Normalizing3D(VECT3D&, double, double, double, double);	//Function for finding the normalized values of 3D vectors

private:

};

template <typename T>
Vector<T>::Vector(T vect)
{
	x = 0;
	y = 0;
	z = 0;
}

template <typename T>
Vector<T> Vector<T>::addition2D(T one, T two)
{
	this->addsum2D.x = one.x + two.x;	//Adds the Xs of the two 2D vectors together
	this->addsum2D.y = one.y + two.y;	//Adds the Ys of the two 2D vectors together
	return *this;
}

template <typename T>
Vector<T> Vector<T>::subtraction2D(T one, T two)
{
	this->subsum2D.x = one.x - two.x;	//Subtracts the X of the second 2D vector from the X of the first 2D vector
	this->subsum2D.y = one.y - two.y;	//Subtracts the Y of the second 2D vector from the Y of the first 2D vector
	return *this;
}

template <typename T>
Vector<T> Vector<T>::addition3D(T one, T two)
{
	this->addsum3D.x = one.x + two.x;	//Adds the Xs of the two 3D vectors together
	this->addsum3D.y = one.y + two.y;	//Adds the Ys of the two 3D vectors together
	this->addsum3D.z = one.z + two.z;	//Adds the Zs of the two 3D vectors together
	return *this;
}

template <typename T>
Vector<T> Vector<T>::subtraction3D(T one, T two)
{
	this->subsum3D.x = one.x - two.x;	//Subtracts the X of the second 3D vector from the X of the first 3D vector
	this->subsum3D.y = one.y - two.y;	//Subtracts the Y of the second 3D vector from the Y of the first 3D vector
	this->subsum3D.z = one.z - two.z;	//Subtracts the Z of the second 3D vector from the Z of the first 3D vector
	return *this;
}

template <typename T>
Vector<T> Vector<T>::Magnitude2D(T x, T y)
{
	T doubleX;
	T doubleY;
	doubleX = x * x;						//Places the value of x squared in a temporary variable
	doubleY = y * y;						//Places the value of y squared in a temporary variable
	this->sum2D = sqrt(doubleX + doubleY);	//Adds the two temporary variables, gets the square root, and assigns the resulting value to the magnitude of the 2D vector
	return *this;
}

template <typename T>
Vector<T> Vector<T>::Magnitude3D(T x, T y, T z)
{
	T doubleX;
	T doubleY;
	T doubleZ;
	doubleX = x * x;									//Places the value of x squared in a temporary variable
	doubleY = y * y;									//Places the value of y squared in a temporary variable
	doubleZ = z * z;									//Places the value of z squared in a temporary variable
	this->sum3D = sqrt(doubleX + doubleY + doubleZ);	//Adds the three temporary variables together, gets the square root, and assigns the resulting value to the magnitude of the 3D vector
	return *this;
}

template <typename T>
Vector<T> Vector<T>::Normalizing2D(VECT2D &v, double x, double y, double l)
{
	v.x = x / l;			//Divides the x of the 2D vector by it's magnitude and assigns the result to the x of the normalized 2D vector
	v.y = y / l;			//Divides the y of the 2D vector by it's magnitude and assigns the result to the y of the normalized 2D vector
	this->sum2D = { 1, 1 };	//Assigns the value of 1 to both the x and y of the sum of the normalized 2D vector to be used as it's magnitude
	return *this;
}

template <typename T>
Vector<T> Vector<T>::Normalizing3D(VECT3D &v, double x, double y, double z, double l)
{
	v.x = x / l;				//Divides the x of the 3D vector by it's magnitude and assigns the result to the x of the normalized 3D vector
	v.y = y / l;				//Divides the y of the 3D vector by it's magnitude and assigns the result to the y of the normalized 3D vector
	v.z = z / l;				//Divides the z of the 3D vector by it's magnitude and assigns the result to the z of the normalized 3D vector
	this->sum3D = { 1, 1, 1 };	//Assigns the value of 1 to the x, y, & z of the sum of the normalized 3D vector to be used as it's magnitude
	return *this;
}
#endif VECTOR_H