#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N;
long long A, B;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	long long LCM = 0;
	long long a = 0;
	long long b = 0;
	r(i, N) {
		cin >> A >> B;
		a = A, b = B;
		if (A > B) swap(A, B);
		while (true) {
			if (A % B == 0) {
				LCM = B;
				break;
			}
			else {
				int tmp = A % B;
				A = B;
				B = tmp;
			}
		}
		cout << a * b / LCM << "\n";
	}
	return 0;
}