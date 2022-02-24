//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//
//	vector <int> snack(n+1);
//
//	for (int i = 1; i <= n; i++) {
//		cin >> snack[i];
//	}
//
//	vector <bool> vis(n+1);
//	int c = n;
//
//	for (int i = 1; i <= n; i++) {
//		vis[snack[i]] = true;
//
//		while (vis[c] && c > 0)
//			cout << c-- << " ";
//		cout << "\n";
//	}
//
//
//	return 0;
//}