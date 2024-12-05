#include <iostream>
int main()
{
	std::cout << "napushu cheslo (a) " << std::endl;
	 int a;
	std::cin >> a ;

	std::cout << "napushu cheslo (b) " << std::endl;
	 int b;
	std::cin >> b;

	std::cout << "suma" << (a + b) << std::endl;
	std::cout << "vednemany" << (a - b) << std::endl;

	std::cout << "dobytok" << (a * b) << std::endl;
if (b != 0){
	std::cout << "chastka" << (a / b) << std::endl;
	std::cout << "ostacha" << (a % b) << std::endl;
	}
else { std::cout << "error 404" <<std::endl;
}
	return 0;
}
