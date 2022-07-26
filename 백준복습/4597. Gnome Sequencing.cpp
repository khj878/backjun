#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int T;
vector <int> arr(3, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	cout << "Gnomes:\n";
	r(t, T) {
		for (int i = 0; i < 3; i++)
			cin >> arr[i];
		bool res = false;
		if (arr[0] < arr[1]) {
			if (arr[1] < arr[2]) {
				res = true;
			}
		}
		else if(arr[0] > arr[1]) {
			if (arr[1] > arr[2]) {
				res = true;
			}
		}
		if (res) cout << "Ordered\n";
		else cout << "Unordered\n";
	}

	return 0;
}