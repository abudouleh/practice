//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n, first[30], last[30];
//	cin >> n;
//
//	string res = "ROYGBIV";
//
//	for (int i = 0; i < 7; i++)
//		first[res[i] - 'A'] = i, last[res[i] - 'A'] = i;
//
//    for (int i = 7; i < n; i++)
//    {
//        for (int j = 0; j < 7; j++)
//        {
//            int ix1 = last[res[j] - 'A'], ix2 = first[res[j] - 'A'];
//
//            bool f = 1;
//            if (i - ix1 + 1 <= 4)
//                f = 0;
//            if ((n - i) + (ix2 + 1) <= 4)
//                f = 0;
//            if (f)
//            {
//                last[res[j] - 'A'] = i;
//                res.push_back(res[j]);
//                break;
//            }
//        }
//    }
//
//    cout << res << endl;
//
//
//	return 0;
//}