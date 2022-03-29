#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 5
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> res;
	string input;
	r(i, R) {
		bool flag = true;
		cin >> input;
		for (int i = 2; i < input.length(); i++) {
			if (input[i - 2] == 'F' && input[i - 1] == 'B' && input[i] == 'I') {
				flag = false;
			}
		}
		if(!flag)
		res.push_back(i + 1);
	}
	if (res.size()) {
		r(i, res.size()) {
			cout << res[i] << " ";
		}
	}
	else {
		cout << "HE GOT AWAY!";
	}
	return 0;
}