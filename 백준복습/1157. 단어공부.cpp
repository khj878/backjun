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
vector<int> arr(26, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> S;
	r(i, S.length()) {
		if (S[i] >= 'a' && S[i] <= 'z') {
			S[i] -= 32;
		}
		arr[S[i] - 'A']++;
	}
	int maxIdx = 0, maxValue = 0;
	r(i, 26) {
		if (arr[i] > maxValue) {
			maxValue = arr[i];
			maxIdx = i;
		}
	}
	sort(arr.begin(), arr.begin() + 26);
	if (arr[24] == arr[25]) cout << "?";
	else cout << (char)('A' + maxIdx);

	return 0;
}