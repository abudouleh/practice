//#include<string>
//#include<cctype>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	string o;
//	string n;
//	cin >> o;
//	cin >> n;
//
//	transform(o.begin(), o.end(), o.begin(), ::tolower);
//	transform(n.begin(), n.end(), n.begin(), ::tolower);
//
//	int x = 0;;
//
//	for (int i = 0; i < o.length(); i++) {
//		if (o[i] == n[i]) {
//			continue;
//		}
//
//		else if (o[i] < n[i]) {
//			x = -1;
//			break;
//		}
//
//		else {
//			x = 1;
//			break;
//		}
//		
//	}
//
//	cout << x;
//
//	return 0;
//}