//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//
//	int* h = new int[n];
//	int* g = new int[n];
//
//	for (int i = 0; i < n; i++) {
//		cin >> h[i] >> g[i];
//	}
//
//	int x = 0;
//	for (int o = 0; o < n; o++) {
//		for (int j = 0; j < n; j++) {
//			if (h[o] == g[j])
//				x++;
//		}
//
//	}
//
//	cout << x;
//
//	return 0;
//}