#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int A, B;
vector<int> arr(3, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> A >> B;
	for (int i = 0; i < 3; i++) {
		arr[i] = A * (B % 10);
		B /= 10;
		cout << arr[i] << "\n";
	}
	
	cout << arr[0] + arr[1] * 10 + arr[2] * 100;

	return 0;
}