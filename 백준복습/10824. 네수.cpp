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

string a, b, c, d;
stringstream ss1, ss2;
int n1, n2;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b >> c >> d;
	a = a + b;
	c = c + d;
	
	ss1 << a;
	ss2 << c;
	cout << a << " " << c;

	ss1 >> n1;
	ss2 >> n2;
	cout << n1 + n2;

	return 0;
}