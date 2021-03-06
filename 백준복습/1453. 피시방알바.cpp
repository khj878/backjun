#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 101
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N;
vector<bool> arr(R, false);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	int res = 0;
	r(i, N) {
		int a;
		cin >> a;
		if (arr[a]) {
			res++;
		}
		else {
			arr[a] = true;
		}
	}
	cout << res;

	return 0;
}