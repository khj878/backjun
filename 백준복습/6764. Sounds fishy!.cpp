#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<int> a(4, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int res = 0;


	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}

	if (a[0] > a[1] && a[1] > a[2] && a[2] > a[3]) cout << "Fish Diving";
	else if (a[0] < a[1] && a[1] < a[2] && a[2] < a[3]) cout << "Fish Rising";
	else if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3]) cout << "Fish At Constant Depth";    
	else cout << "No Fish";

	return 0;
}