#ifndef VECTOR_H
#define VECTOR_H

template <class T>
class Vector		//Vector class to perform vector equations
{
public:
	Vector<T>();
	Vector<T>(T, T, T);
	T x, y, z;
	template <typename T>
	Vector<T> operator+(Vector<T> other) 
	{
		Vector<T> temp;
		temp.x = x + other.x;
		temp.y = y + other.y;
		temp.z = z + other.z;

		return temp;
	}
	template <typename T>
	Vector<T> operator-(Vector<T> other)
	{
		Vector<T> temp;
		temp.x = x - other.x;
		temp.y = y - other.y;
		temp.z = z - other.z;

		return temp;
	}
	template <typename T>
	Vector<T> operator*(Vector<T> other)
	{
		Vector<T> temp;
		temp.x = x * other.x;
		temp.y = y * other.y;
		temp.z = z * other.z;

		return temp;
	}
	T magnitude;
	T Magnitude();
	Vector<T> Normalize();
	T DotProduct(Vector<T>);
	Vector<T> CrossProduct(Vector<T>);

private:

};

template <typename T>
Vector<T>::Vector()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

template <typename T>
Vector<T>::Vector(T a, T b, T c)
{
	x = a;
	y = b;
	z = c;
}

template <typename T>
T Vector<T>::Magnitude()
{
	Vector<T> temp = *this * *this;
	magnitude = sqrt(temp.x + temp.y + temp.z);

	return magnitude;
}

template <typename T>
Vector<T> Vector<T>::Normalize()
{
	Vector<T> temp;
	temp.x = x / magnitude;
	temp.y = y / magnitude;
	temp.z = z / magnitude;
	temp.magnitude = magnitude / magnitude;

	return temp;
}

template <typename T>
T Vector<T>::DotProduct(Vector<T> other)
{
	T dotprod;
	dotprod = ((x*other.x) + (y*other.y) + (z*other.z));

	return dotprod;
}

template <typename T>
Vector<T> Vector<T>::CrossProduct(Vector<T> other)
{
	Vector<T> temp;
	temp.x = ((y*other.z) - (z*other.y));
	temp.y = ((z*other.x) - (x*other.z));
	temp.z = ((x*other.y) - (y*other.x));
	
	return temp;
}

#endif VECTOR_H