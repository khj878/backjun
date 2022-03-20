#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;;

int N, input, X;
vector<int> arr(201);

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		arr[input + 100]++;
	}
	cin >> X;

	cout << arr[X + 100];

	return 0;
}