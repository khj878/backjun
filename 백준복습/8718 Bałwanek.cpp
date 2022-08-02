#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

deque <int> dq;
int N, K;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	dq.push_back(K);

	return 0;
}