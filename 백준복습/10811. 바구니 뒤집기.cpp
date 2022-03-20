#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(101);
int N, M;
int A, B;

int main()
{
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}
	for (int t = 0; t < M; t++) {
		cin >> A >> B;
		reverse(arr.begin() + A, arr.begin() + B + 1);
	}

	for (int i = 1; i <= N; i++)
		cout << arr[i] << " ";
	cout << '\n';

	return 0;
}