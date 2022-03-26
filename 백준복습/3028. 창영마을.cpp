#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string S;
vector<bool> arr(3, false);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	arr[0] = true;

	cin >> S;
	for (int i = 0; i < S.length(); i++) {
		if (S[i] == 'A') swap(arr[0], arr[1]);
		else if (S[i] == 'B') swap(arr[1], arr[2]);
		else if (S[i] == 'C') swap(arr[0], arr[2]);
	}
	
	for (int i = 0; i < 3; i++) {
		if (arr[i] == true) cout << i + 1;
	}

	return 0;
}