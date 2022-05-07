#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 8
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

string S;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cntW = 0;
	r(i, R) {
		cin >> S;
		if (i % 2 == 0) {
			r(j, R) {
				if (S[j] == 'F' && j % 2 == 0) cntW++;
			}
		}
		if (i % 2 == 1) {
			r(j, R) {
				if (S[j] == 'F' && j % 2 == 1) cntW++;
			}
		}
	}

	cout << cntW;


	return 0;
}