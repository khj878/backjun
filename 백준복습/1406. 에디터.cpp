#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

string input;
int N;
char inst;
char ch;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> input >> N;
	int idx = input.length();

	r(i, N) {
		cin >> inst;
		if (inst == 'L') {
			if (idx != 0) {
				idx--;
			}
		}
		else if (inst == 'D') {
			if (idx != input.length() ) {
				idx++;
			}
		}
		else if (inst == 'B') {
			input.erase(input.begin() + idx - 1);
			idx = input.length();
		}
		else if (inst == 'P') {
			cin >> ch;
			input.insert(input.begin() + idx, ch);
			idx = input.length();
		}
		cout << input << endl;
	}
	cout << input;

	return 0;
}