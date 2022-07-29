#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N;
vector<int> arr;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	r(i, N) {
		arr.push_back(i + 1);
	}

	while(arr.size() != 1) {
		arr.erase(arr.begin());
		arr.push_back(arr[0]);
		arr.erase(arr.begin());
	}
	cout << arr[0];

	return 0;
}