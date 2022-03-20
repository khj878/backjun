#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> arr;
string input;
long long res;

int main()
{
	arr.push_back("black"); arr.push_back("brown"), arr.push_back("red");
	arr.push_back("orange"); arr.push_back("yellow"); arr.push_back("green");
	arr.push_back("blue"); arr.push_back("violet"); arr.push_back("grey"); arr.push_back("white");
	
	for (int n = 0; n < 2; n++) {
		cin >> input;

		for (int i = 0; i < 10; i++) {
			if (input.compare(arr[i]) == 0 && n == 0) res += (long long)i * 10;
			else if (input.compare(arr[i]) == 0 && n == 1) res += (long long)i;
		}
	}

	cin >> input;
	for (int i = 0; i < 10; i++) {
		if (input.compare(arr[i]) == 0) {
			for (int j = 0; j < i; j++) res *= (long long)10;
		}
	}

	cout << res;

	return 0;
}