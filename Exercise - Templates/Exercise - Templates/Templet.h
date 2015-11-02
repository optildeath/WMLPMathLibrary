#ifndef _2DVECTER_H_
#define _2DVECTER_H_

#include <iostream>

template <typename T>
class Vecter3
{
public:
	

	T num1;
	T num2;
	T num3;
	Vecter3(T, T, T);
	Vecter3<T> operator+(Vecter3<T> &Tick)
	{
		Vecter3<T> Derp;
		Derp.num1 = num1 + Tick.num1;
		Derp.num2 = num2 + Tick.num2;
		Derp.num3 = num3 + Tick.num3;
		return Derp;
	}
	

	/*T Sub();
	T Nor();
	T Nay();
	T Mul();
*/
//private:
//	T num1;
//	T num2;
//	T num3;
};
template <typename T>
Vecter3<T>::Vecter3(T x, T y, T z)
{

	num1 = x;
	num2 = y;
	num3 = z;
}

//template <typename T>
//Vecter3<T> operator+()
//{
//	++num1;
//	++num2;
//	++num3;
//
//}

//template <typename T>
//void Vecter3<T>::Sub()
//{
//	Vecter3 TotaNum;
//	TotalNum.num1 = a.num1 - b.num1;
//	TotalNum.num2 = a.num2 - b.num2;
//	TotalNum.num3 = a.num3 - b.num3;
//	return TotaNum;
//}
//
//template <typename T>
//void Vecter3<T>::Nor()
//{
//
//}
//
//template <typename T>
//void Vecter3<T>::Nay()
//{
//
//}
//
//template <typename T>
//void Vecter3<T>::Mul()
//{
//	Vecter3 TotaNum;
//	TotalNum.num1 = a.num1 * b.num1;
//	TotalNum.num2 = a.num2 * b.num2;
//	TotalNum.num3 = a.num3 * b.num3;
//	return TotaNum;
//}
#endif // !1

