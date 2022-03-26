#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 10
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int T, N;
vector<vector<char>> arr((char)(R), vector<char>((char)(R), '#'));

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> T;

	r(i, T) {
		cin >> N;
		for (int i = 1; i < N - 1; i++) {
			for (int j = 1; j < N - 1; j++) {
				arr[i][j] = 'J';
			}
		}
		r(i, N) {
			r(j, N) {
				cout << arr[i][j];
			}
			cout << "\n";
		}
		cout << "\n";

		r(i, N) {
			r(j, N) {
				arr[i][j] = '#';
			}
		}
	}

	return 0;
}