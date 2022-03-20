#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(101);
int N, M;
int A, B, K;

int main()
{
	cin >> N >> M;
	for (int t = 0; t < M; t++) {
		cin >> A >> B >> K;
		for (int i = A; i <= B; i++) {
			arr[i] = K;
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}