#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(1000001);
int N;

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.begin() + N);
	cout << arr[0] << " " << arr[N - 1];

	return 0;
}