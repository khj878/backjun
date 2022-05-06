#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 104
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N, M;
vector<int> arr(R, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	r(i, R) {
		arr[i] = i;
	}

	cin >> N >> M;
	
	int x, y;
	r(i, M) {
		cin >> x >> y;
		swap(arr[x], arr[y]);
	}

	for (int i = 1; i <= N; i++)
		cout << arr[i] << " ";

	return 0;
}