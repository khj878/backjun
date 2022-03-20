#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string input;
vector<int> alpha(26);


int main()
{
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		alpha[input[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}

	return 0;
}