#include<iostream>
#include<iomanip>
#include<time.h>

int main()
{
	double x, y, R1, R2;

	std::cout << "R1 = "; std::cin >> R1;
	std::cout << "R2 = "; std::cin >> R2;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Entertwopoints: "; std::cin >> x >> y;

		if (x >= 0 && y >= 0)
		{
			if ((R1 * R1 >= x * x + y * y) && (R2 * R2 <= x * x + y * y))
				std::cout << "Isingrayarea.\n"; // в першій чверті координат, між R1 та R2.
			else
				std::cout << "Pointdon'tbelongtograyarea.\n"; // в першій чверті координат, але поза R1 та R2.
		}
		else 
			if(x <= 0 && y <= 0)
		{
			if ((R1 * R1 >= x * x + y * y) && (R2 * R2 <= x * x + y * y))
				std::cout << "Isingrayarea.\n"; // в третій чверті координат, між R1 та R2.
			else
				std::cout << "Pointdon'tbelongtograyarea.\n"; // в третій чверті, але поза R1 та R2.
		}
		else
			std::cout << "Pointisn'tinrightzone.\n"; // поза першою і третьою чвертю координат.
	}
	std::cout << "\n";

	for (int i = 0; i < 10; i++)
	{
		x = -R1 + rand() * (R1 * R1) / RAND_MAX;
		y = -R1 + rand() * (R1 * R1) / RAND_MAX;
		if ((x * x + y * y <= R1 * R1 && x > 0 && y > x) || (x * x + y * y <= R1 * R1 && x < 0 && y < x))
			std::cout << std::setw(8) << std::setprecision(4) << x << " "
			<< std::setw(8) << std::setprecision(4) << y << " " << "yes" << '\n';
		else
			std::cout << std::setw(8) << std::setprecision(4) << x << " "
			<< std::setw(8) << std::setprecision(4) << y << " " << "no" << '\n';
	}
	return 0;
}
