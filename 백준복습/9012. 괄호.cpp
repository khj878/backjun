#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string S, st;
int N;
bool flag;

int main()
{
	cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> S;
		flag = true;
		st = "";

		for (int i = 0; i < S.size(); i++) {
			if (st.size() == 0 && S[i] == ')') {
				flag = false;
				break;
			}

			if (S[i] == '(') st.push_back('(');
			else if (S[i] == ')' && st.back() == '(') st.pop_back();
		}

		if (st.size() != 0) flag = false;
		else if (st.size() == 0 && flag) flag = true;

		if (flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}