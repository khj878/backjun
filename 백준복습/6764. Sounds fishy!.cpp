#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<int> arr(4, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int res = 0;


	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}

	if (arr[0] < arr[1]) {
		res = 1;
		for (int i = 0; i < 3; i++) {
			if (arr[i] > arr[i + 1]) {
				res = 0;
				break;
			}
		}
	}
	else if (arr[0] > arr[1]) {
		res = 2;
		for (int i = 0; i < 3; i++) {
			if (arr[i] < arr[i + 1]) {
				res = 0;
				break;
			}
		}
	}

	if (res == 0) cout << "No Fish";
	else if (res == 1) cout << "Fish Rising";
	else if (res == 2) cout << "Fish Diving";
	return 0;
}