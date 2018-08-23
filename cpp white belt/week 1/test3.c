#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;

	if (!(a == 0 && b == 0 && c == 0)) //cout << "All coefficients are zeros";else
	{
		double D, x1, x2;

		D = b*b - 4*a*c;

		if (D >= 0){
			if (a == 0){
				x1 = -c/b;
				cout << x1; //cout << "x1 = " << x1;
			}
			else{
				x1 = (-b+sqrt(b*b - 4*a*c))/(2*a);
				x2 = (-b-sqrt(b*b - 4*a*c))/(2*a);
				if(D == 0)
					cout << x1; //cout << "x1 = " << x1;
				else
					cout << x1 << " " << x2; //cout << "x1 = " << x1 << "; x2 = " << x2;
			}
		}
		/*else
			cout << " hasn't got roots ";*/
	}


  return 0;
}