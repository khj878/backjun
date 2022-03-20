#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int T;
int A, B;
int P;

int main()
{
	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> A >> B;
		
		P = A * B;
		
		if (A > B) swap(A, B);

		int tmp = 0;
		while (true) {
			tmp = B % A;

			B = A;
			A = tmp;
			
			if (tmp == 0) {
				break;
			}
		}
		cout << P / B << '\n';
	}

	return 0;
}