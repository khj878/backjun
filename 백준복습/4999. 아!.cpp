


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string s1, s2;

int main()
{
	cin >> s1 >> s2;
	if (s1.length() < s2.length()) cout << "no";
	else cout << "go";

	return 0;
}