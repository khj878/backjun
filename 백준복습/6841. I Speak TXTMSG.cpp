#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

string imogy[12] = { "CU", ":-)", ":-(", ";-)", ":-P", "(~.~)"
				,"TA", "CCC", "CUZ", "TY", "YW", "TTYL" };
string text[12] = { "see you", "I¡¯m happy",  "I¡¯m unhappy", "wink",
					"stick out my tongue", "sleepy",
					"totally awesome", "Canadian Computing Competition",
					"because", "thank-you", "you¡¯re welcome", "talk to you later" };

string input;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (getline(cin, input)) {
		bool flag = false;
		for (int i = 0; i < 12; i++) {
			if (imogy[i].compare(input) == 0) {
				cout << text[i] << "\n";
				flag = true;
				break;
			}
		}
		if (!flag) {
			cout << input << "\n";
		}
	}

	return 0;
}