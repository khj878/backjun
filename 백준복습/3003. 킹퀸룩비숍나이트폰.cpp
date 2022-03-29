#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 6
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<int> arr(R, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	arr[0] = arr[1] = 1;
	arr[2] = arr[3] = arr[4] = 2;
	arr[5] = 8;

	int input;
	r(i, 6) {
		cin >> input;
		cout << arr[i] - input << " ";
	}
	

	return 0;
}