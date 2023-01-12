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

double res;
double W, H;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> W >> H;
	H = H * H;
	res = W / H;
	if (res > 25.0) cout << "Overweight";
	else if (res > 18.5) cout << "Normal weight";
	else  cout << "Underweight";

	return 0;
}