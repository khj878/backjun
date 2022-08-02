#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<int> a(3, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	r(i, 3) cin >> a[i];

	if (a[0] == a[1] && a[1] == a[2]) cout << "*";
	else if (a[0] == a[1]) cout << "C";
	else if (a[0] == a[2]) cout << "B";	
	else if (a[1] == a[2]) cout << "A";


	return 0;
}