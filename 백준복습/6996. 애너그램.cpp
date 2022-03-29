#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 101
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int T;
string S1, S2;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	r(i, T) {
		cin >> S1 >> S2;
		vector<int> chk(26, 0);
		bool flag = true;

		if (S1.length() == 1 && S2.length() == 1) {
			cout << S1 << " & " << S2 << " are anagrams.\n";
			continue;
		}

		else {
			r(i, S1.length()) {
				chk[S1[i] - 'a']++;
			}
			r(i, S2.length()) {
				chk[S2[i] - 'a']++;
			}
			r(i, 26) {
				if (chk[i] % 2 == 1) {
					flag = false;
					break;
				}
			}
		}

		if (flag) cout << S1 << " & " << S2 << " are anagrams.\n";
		else cout << S1 << " & " << S2 << " are NOT anagrams.\n";
	}

	return 0;
}