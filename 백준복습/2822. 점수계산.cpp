#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 8
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<int> arr(R, 0);
vector<int> brr(R, 0);
vector<int> res;

bool cmp(int x, int y) {
	return x > y;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	r(i, R) {
		cin >> arr[i];
		brr[i] = arr[i];
	}

	sort(arr.begin(), arr.begin() + R, cmp);

	int cnt = 5;
	int sums = 0;
	r(i, R) {
		if (cnt) {
			sums += arr[i];
			r(j, R) {
				if (arr[i] == brr[j]) {
					res.push_back(j + 1);
					cnt--;
					break;
				}
			}
		}
	}

	cout << sums << "\n";
	sort(res.begin(), res.begin() + res.size());
	r(i, res.size()) {
		cout << res[i] << " ";
	}

	return 0;
}