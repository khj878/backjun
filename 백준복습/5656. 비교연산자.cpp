#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

string S;
int A, B;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 1;
	while (true) {
		cin >> A >> S >> B;
		bool res = false;
		if (S == "E") {
			break;
		}
		else if (S == ">") {
			if (A > B) res = true;
		}
		else if (S == ">=") {
			if (A >= B) res = true;
		}
		else if (S == "<") {
			if (A < B) res = true;
		}
		else if (S == "<=") {
			if (A <= B) res = true;
		}
		else if (S == "==") {
			if (A == B) res = true;
		}
		else if (S == "!=") {
			if (A != B) res = true;
		}
		cout << "Case " << t << ": ";
		if (res) cout << "true\n";
		else cout << "false\n";
		t++;
	}


	return 0;
}