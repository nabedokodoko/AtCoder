#include<iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int result = (N <= M) ? 0 : N - M;

	cout << result << endl;
}