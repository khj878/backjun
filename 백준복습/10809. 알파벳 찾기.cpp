#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string input;
vector<int> alpha(26, -1);


int main()
{
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (alpha[input[i] - 'a'] == -1) {
			alpha[input[i] - 'a'] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}

	return 0;
}