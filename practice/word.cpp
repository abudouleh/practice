//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cctype>
//using namespace std;
//
//int main() {
//	string word;
//	cin >> word;
//
//	int up = 0;
//	int low =0;
//	for (int i = 0; i < word.length(); i++) {
//		if (isupper(word[i]))
//			up++;
//		else low++;
//	}
//
//	if (low >= up)
//		transform(word.begin(), word.end(), word.begin(), :: tolower);
//	else
//		transform(word.begin(), word.end(), word.begin(), ::toupper);
//
//	cout << word;
//
//	return 0;
//}