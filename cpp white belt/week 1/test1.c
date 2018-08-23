#include <iostream>
using namespace std;

int main() {
	int x, y;
	int treshold = 100000;
	cin >> x >> y;
	if (abs(x) < treshold && abs(y) < treshold)
		cout << x + y;
	else
	    cout << "One or more arguments exceed limits";
	return 0;
}