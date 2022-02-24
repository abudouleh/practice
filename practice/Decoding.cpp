//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>    
//
//using namespace std;
//
//int main() {
//	int n;
//	string a;
//	cin >> n >> a;
//	vector <char> t;
//
//	if (n % 2 != 0) {
//		t.push_back(a[0]);
//		
//		for (int i = 1; i < n; i++) {
//			if (i % 2 == 0)
//				t.push_back(a[i]);
//			else
//				t.insert(t.begin(), a[i]);
//
//		}
//
//	}
//
//	else {
//		t.push_back(a[0]);
//
//		for (int i = 1; i < n; i++) {
//			if (i % 2 == 0)
//				t.insert(t.begin(), a[i]);
//			else
//				t.push_back(a[i]); 
//
//		}
//
//	}
//
//
//	for (int i = 0; i < n; i++) {
//		cout << t[i];
//	}
//		return 0;
//	
//}