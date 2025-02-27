#include <iostream>
 int main(){
	float R,P;
	int T;
		std::cout << "syma groshe"  << std::endl;
		std::cin >> P;
		std::cout << "period" << std::endl;
		std::cin >> T;
		std::cout << "procent"<< std::endl;
		std::cin >> R;

	float I = (P*T*R)/100;
		
		std::cout << "procent" << I << std::endl;
		std::cout  << static_cast<int>(I) << std::endl;

 }



