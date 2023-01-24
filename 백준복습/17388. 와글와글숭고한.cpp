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

vector<int> arr(3, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int S = 0;
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
		S += arr[i];
	}

	if (S >= 100) cout << "OK";
	else {
		if (arr[0] < arr[1] && arr[0] < arr[2]) cout << "Soongsil";
		else if (arr[1] < arr[0] && arr[1] < arr[2]) cout << "Korea";
		else if (arr[2] < arr[1] && arr[2] < arr[0]) cout << "Hanyang";
	}




	return 0;
}