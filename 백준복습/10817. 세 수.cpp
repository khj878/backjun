#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(3);


int main()
{
	for (int i = 0; i < 3; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.begin() + 3);
	cout << arr[1];

	return 0;
}