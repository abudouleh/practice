//#include <iostream>
//#include<vector>
//
//using namespace std;
//
//int main() {
//
//	int e = 0, d = 0, n;
//	cin >> n;
//	vector<int> h(n);                    
//	for (int i = 0; i < n; i++)
//		cin >> h[i];
//
//
//	d = h[0];
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (h[i] >= h[i + 1])
//			e += h[i] - h[i + 1];
//
//		else
//		{
//			if (e >= (h[i + 1] - h[i]))
//				e -= h[i + 1] - h[i];
//
//
//			else
//			{
//				d += (h[i + 1] - h[i]) - e;
//				e = 0;
//			}
//
//		}
//	}
//	cout << d;
//
//	return 0;
//}
