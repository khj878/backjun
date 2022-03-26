#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 101
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N, M;
vector<vector <int>> arr(R, vector<int>(R, 0));
vector<vector <int>> brr(R, vector<int>(R, 0));

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	r(i, N) {
		r(j, M) {
			cin >> arr[i][j];
		}
	}

	r(i, N) {
		r(j, M) {
			cin >> brr[i][j];
		}
	}

	r(i, N) {
		r(j, M) {
			arr[i][j] += brr[i][j];
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}