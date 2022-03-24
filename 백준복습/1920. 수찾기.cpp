#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> arr(100001, 0);
int input;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.begin() + N);

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> input;
		if(binary_search(arr.begin(),arr.begin() + N, input)) cout << 1 << '\n';
		else cout << 0 << "\n";
	}

	return 0;
}