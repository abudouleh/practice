#include <iostream>

using namespace std;

int main() {
	int sh, ch, sum = 1;

	cin >> sh >> ch;

	while (true) {
		if ((sh * sum) % 10 == ch || (sh * sum) % 10 == 0) {
			cout << sum;
			break;
		}
		sum++;
	}



	return 0;
}

