#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int Y;

int main()
{
	cin >> Y;
	if (Y % 4) {
		cout << 0;
	}
	else {
		if (Y % 400 == 0) {
			cout << 1;
		}
		else if (Y % 4 == 0 && Y % 100 != 0) {
			cout << 1;
		}
		else {
			cout << 0;
		}
	}

	return 0;
}