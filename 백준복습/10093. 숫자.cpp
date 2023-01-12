#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int a, b;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> a >> b;
	if (a > b) {
		swap(a, b);
	}
	cout << b - a - 1<< "\n";
	for (int i = a + 1; i < b; i++) {
		cout << i << " ";
	}

	return 0;
}