#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector <vector<bool>> arr(101, vector<bool>(101,false));
int N;
int X, Y;
int res;

int main()
{
	cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> X >> Y;
		
		for (int i = X; i < X + 10; i++) {
			for (int j = Y; j < Y + 10; j++) {
				arr[i][j] = true;
			}
		}
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (arr[i][j] == true) res++;
		}
	}

	cout << res;

	return 0;
}