//#include <iostream>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	string na;
//	cin >> na;
//
//	int start = 0; //a
//	int naMoves = 0;
//
//	for (int i = 0; i < na.length(); i++) {
//		int index = na[i] - 97; // all char is small -> a = 97 : if index == a -> index = 97 - 97 = 0 -> 0 moves | to make a = 0 and z = 25
//		int walk = abs(start - index);
//
//		if (walk < 13)
//			naMoves += walk;
//		else
//			naMoves += 26 - walk;
//
//		start = index;
//
//
//	}
//
//	cout << naMoves;
//	return 0;
//}