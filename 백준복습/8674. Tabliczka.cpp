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

double A, B, C;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    long long k, w, m;
    cin >> k >> w >> m;
    long long result = 0;
    while (k < w)
    {
        k += m;
        result++;
    }
    cout << result << "\n";
	return 0;
}