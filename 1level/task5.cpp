#include <iostream>
using namespace std; 
 int main(){
	float R,P;
	int T;
		cout << "syma groshe"  << endl;
		cin >> P;
		cout << "period" << endl;
		cin >> T;
		cout << "procent"<< endl;
		cin >> R;

	float I = (P*T*R)/100;
		
		cout << "procent" << I << endl;
		cout  << static_cast<int>(I) << endl;

 }



