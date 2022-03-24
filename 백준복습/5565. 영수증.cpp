#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int input;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < 9; i++) {
		cin >> input;
		N -= input;
	}

	cout << N;

	return 0;
}