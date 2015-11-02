#include "Vecter3.h"
#include "Vecter2.h"

void main()
{
	Vecter3<int> Dude1(1,-7,1);
	Vecter3<int> Dude2(5,2,4);
	Vecter3<int> Dude4(1,2,0);
	Vecter3<int> Dude5(3,2,0);
	Vecter3<int> Dude3(0,0,0);

	Vector2<double> Plager1(5,7);
	Vector2<double> Plager2(2,1);
	Vector2<double> Plager3(0,0);

	Dude3 = Dude1 + Dude2;
	Dude3 = Dude1 - Dude2;
	Dude3 = Dude1 / Dude2;
	
	Plager3 = Plager1 + Plager2;
	Plager3 = Plager2.Normalizer();

	//std::cout << Dude3.num1 << ",";
	//std::cout << Dude3.num2 << ",";
	//std::cout << Dude3.num3 << std::endl;
	//std::cout << Dude1 * Dude4 << std::endl;
	std::cout << Plager3.num1 << ",";
	std::cout << Plager3.num2 << std::endl;

	std::cout << Plager1.Magnitude() << std::endl;

	system("pause");

}