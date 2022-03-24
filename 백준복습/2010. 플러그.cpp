#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, input;

int main()
{
	cin >> N;
	int sums = 0;
	for (int i = 0; i < N - 1; i++) {
		cin >> input;
		sums += input - 1;
	}
	cin >> input;
	sums += input;
	
	cout << sums;

	return 0;
}