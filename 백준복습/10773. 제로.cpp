#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N, S;
vector<int> arr;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	r(i, N) {
		int input;
		cin >> input;
		if (input != 0) arr.push_back(input);
		else arr.pop_back();
	}

	r(i, arr.size()) {
		S += arr[i];
	}

	cout << S;

	return 0;
}