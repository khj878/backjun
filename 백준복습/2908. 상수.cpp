#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

string A, B;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> A >> B;
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	stringstream ss1, ss2;
	ss1 << A;
	ss2 << B;
	int a, b;
	ss1 >> a;
	ss2 >> b;

	if (a > b) cout << a;
	else cout << b;

	return 0;
}