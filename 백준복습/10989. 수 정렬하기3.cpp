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

int N, tmp;
vector<int> arr(10004, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		arr[tmp]++;
	}
	for (int i = 0; i <= 10000; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++)
				cout << i << "\n";
		}
	}
	return 0;
	return 0;
}