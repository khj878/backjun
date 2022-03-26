#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int A, B;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true) {
		cin >> A >> B;
		if (A == B && B == 0) {
			break;
		}
		else {
			if (A <= B) cout << "No";
			else cout << "Yes";
		}
		cout << "\n";
	}

	return 0;
}