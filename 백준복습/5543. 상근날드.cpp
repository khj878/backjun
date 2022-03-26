#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(3, 0);
vector<int> brr(2, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 2; i++) {
		cin >> brr[i];
	}
	sort(arr.begin(), arr.begin() + 3);
	sort(brr.begin(), brr.begin() + 2);
	cout << arr[0] + brr[0] - 50;


	return 0;
}