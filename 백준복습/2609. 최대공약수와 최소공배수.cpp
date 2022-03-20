#include <iostream>
#include <algorithm>
using namespace std;;

int A, B, P, M;
int GCD, LCM;

int main()
{
	cin >> A >> B;
	P = A * B;
	M = B;

	if (B > A) {
		swap(A, B);
		M = A;
	}

	while (true) {
		GCD = A % B;
		if (GCD == 0) break;
		A = B;
		B = GCD;
	}

	cout << B << " " << P / B;

	return 0;
}