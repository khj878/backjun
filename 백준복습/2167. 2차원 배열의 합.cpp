#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, input, K;
int I, J, X, Y;
vector<vector<int>> arr(303, vector<int>(303,0));

int main()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> input;
			arr[i][j] = input;
		}
	}

	cin >> K;
	for (int k = 0; k < K; k++) {
		int sums = 0;
		cin >> I >> J >> X >> Y;
		for(int i = I - 1; i < X; i++) {
			for (int j = J - 1; j < Y; j++) {
				sums += arr[i][j];
			}
		}
		cout << sums << "\n";
	}
	
		
	return 0;
}