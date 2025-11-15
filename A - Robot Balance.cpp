#include<iostream>

using namespace std;

int RobotBalance() {
	int N, M;
	cin >> N >> M;

	if (N <= M) cout << "0" << endl;
	else cout << N - M << endl;
}