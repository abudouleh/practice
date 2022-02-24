//#include<iostream>
//#include<vector>
//#include<cmath>
//
//using namespace std;
//
//int main() {
//
//
//	int n;
//	cin >> n;
//
//	vector <int> max(n);
//	vector <int> min(n);
//	vector <int> a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//
//	max[0] = abs(a[n - 1] - a[0]);
//	min[0] = abs(a[1] - a[0]);
//
//
//	int ma1, ma2, mi1, mi2;
//	for (int i = 1; i < n - 1; i++) {
//		mi1 = abs(a[i + 1] - a[i]);
//		mi2 = abs(a[i - 1] - a[i]);
//
//		ma1 = abs(a[0] - a[i]);
//		ma2 = abs(a[n - 1] - a[i]);
//
//		if (ma1 > ma2)
//			max[i] = ma1;
//		else max[i] = ma2;
//
//		if (mi1 < mi2)
//			min[i] = mi1;
//		else min[i] = mi2;
//
//
//	}
//
//	max[n - 1] = abs(a[n - 1] - a[0]);
//	min[n - 1] = abs(a[n - 1] - a[n - 2]);
//
//	for (int i = 0; i < n; i++) {
//		cout << min[i] << " " << max[i] << endl;
//	}
//
//	return 0;
//}