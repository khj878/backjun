#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> arr(8, "");

int main()
{
	int res = 0;
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0 && arr[i][j] == 'F') res++;
			}
			else {
				if (j % 2 == 1 && arr[i][j] == 'F') res++;
			}
		}
	}
	cout << res;
		 
	return 0;
}
