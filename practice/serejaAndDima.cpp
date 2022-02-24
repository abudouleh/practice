//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//
//    int x = n;
//
//    vector <int> A;
//
//    int D = 0;
//    int S = 0;
//
//    int num;
//    
//    while (n--) {
//        cin >> num;
//        A.push_back(num);
//    
//    }
//
//    for (int i = 1; i <= x; i++) {
//
//        if (i % 2 != 0) {
//            auto it = A.begin();
//            auto it1 = A.end()-1;
//
//            if (*it > *it1) {
//                S = S + *it;
//                A.erase(it);
//            }
//
//            else
//            {
//                S = S + *it1;
//                A.erase(it1);
//
//            }
//        }
//
//        else
//        {
//            auto it = A.begin();
//            auto it1 = A.end()-1;
//
//            if (*it > *it1) {
//                D = D + *it;
//                A.erase(it);
//            }
//
//            else
//            {
//                D = D + *it1;
//                A.erase(it1);
//
//            }
//        }
//    }
//    cout << S << " " << D << endl;
//
//    return 0;
//}
//   
