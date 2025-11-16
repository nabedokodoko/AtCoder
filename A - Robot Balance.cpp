#include<iostream>

using namespace std;

void RobotBalance() {
	int N, M;
	cin >> N >> M;

	int result = (N <= M) ? 0 : N - M;

	cout << result << endl;
}