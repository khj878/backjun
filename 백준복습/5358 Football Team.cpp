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

string S;
int main()
{
	while (getline(cin, S)) {
		for (int i = 0; i < S.length(); i++) {
			if (S[i] == 'i') {
				S[i] = 'e';
			}
			else if (S[i] == 'e') {
				S[i] = 'i';
			}
			else if (S[i] == 'E') {
				S[i] = 'I';
			}
			else if (S[i] == 'I') {
				S[i] = 'E';
			}
		}
		cout << S << "\n";
	};


	return 0;
}