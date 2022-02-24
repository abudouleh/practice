//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int b, m, a[20][20], c = 0, Mbox = 0, cm = 0;
//
//	cin >> b >> m;
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a[i][0] >> a[i][1];
//		Mbox += a[i][0];
//		cm += a[i][0] * a[i][1];
//	}
//
//	if (Mbox <= b)
//	{
//		cout << cm;                                    		return 0;
//	}
//
//
//	while (b)
//	{
//		int x = 0;
//		for (int i = 0; i < m; i++)
//			if (a[x][1] < a[i][1])
//				x = i;
//
//		if (b <= a[x][0])
//		{
//			c += b * a[x][1];
//			cout << c;
//			return 0;
//		}
//		else
//		{
//			c += a[x][0] * a[x][1];
//			b = b - a[x][0];
//			a[x][1] = 0;
//		}
//	}
//	return 0;
//}
