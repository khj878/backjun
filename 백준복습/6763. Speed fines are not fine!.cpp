#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int limit;
int kmPerHour;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> limit >> kmPerHour;

	if (kmPerHour <= limit) cout << "Congratulations, you are within the speed limit!";
	else if (kmPerHour > limit && kmPerHour <= limit + 20) cout <<  "You are speeding and your fine is $100.";
	else if (kmPerHour > limit + 20 && kmPerHour <= limit + 30) cout << "You are speeding and your fine is $270.";
	else cout << "You are speeding and your fine is $500.";

	return 0;
}