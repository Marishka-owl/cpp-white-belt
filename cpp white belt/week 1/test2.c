#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	unsigned int limit = 30;
	string a, b, c;
	cin >> a >> b >> c;
	if (a.length() < limit && b.length() < limit && c.length() < limit){
		vector<string> w = {a, b, c};
		sort(begin(w), end(w));
		cout << w[0];
	}
	else{
		cout << "Length of one or more strings is more than 30 symbols";
	}
  return 0;
}