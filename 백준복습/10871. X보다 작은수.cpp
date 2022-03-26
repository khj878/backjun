#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 10001
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N, dest;
vector<int> arr(R, 0);
vector<int> brr(R, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> dest;
	r(i, N) {
		cin >> arr[i];
		brr[i] = arr[i];
	}
	
	sort(arr.begin(), arr.begin() + N);
	
	int s = 0, e = N - 1;
	int m;
	while (s < e) {
		m = (s + e) / 2;
		if (arr[m] == dest) {
			break;
		}

		if (arr[m] > dest) {
			e = m + 1;
		}
		else if (arr[m] < dest) {
			s = m - 1;
		}
	}

	r(i, N) {
		if (brr[i] <= m) cout << brr[i] << " ";
	}

	return 0;
}

/*
int main()
{
	int N, X, input;
	cin >> N >> X;
	for(i = 0; i < N; i++)
	{
		  cin >> input;
		  if(input < X)
				   cout << input << " ";

	}
	return 0;
}
*/