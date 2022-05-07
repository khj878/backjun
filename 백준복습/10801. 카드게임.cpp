#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<int> arr(10, 0);
vector<int> brr(10, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cntA = 0;
	int cntB = 0;

	r(i, 10) {
		cin >> arr[i];
	}
	r(i, 10) {
		cin >> brr[i];
	}

	r(i, 10) {
		if (arr[i] > brr[i]) cntA++;
		else if (arr[i] < brr[i]) cntB++;
	}

	if (cntA > cntB) cout << "A";
	else if (cntA < cntB) cout << "B";
	else cout << "D";


	return 0;
}