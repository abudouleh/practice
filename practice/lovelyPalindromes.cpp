#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string a;
	cin >> a;
	for (int i = a.size() - 1; i >= 0; i--) {
		a += a[i];
	}
	cout << a;


	//5555555555


	return 0;
}
