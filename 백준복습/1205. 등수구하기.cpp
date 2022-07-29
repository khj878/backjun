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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	return 0;
}

/*
	int main() {
		int N, score, P;
		int rank[100];

		//입력단
		cin >> N >> score >> P;

		for (int i = 0; i < N; i++) {
			cin >> rank[i];
		}

		//계산단
		int cnt = 0;
		int my_rank = 1;
		for (int i = 0; i < N; i++) {
			if (score < rank[i]) my_rank += 1;
			else if (score == rank[i]) my_rank = my_rank;
			else break;
			cnt++;
		}


		if (cnt == P) my_rank = -1;
		if (N == 0) my_rank = 1;



		cout << my_rank;

		return 0;
	}
*/