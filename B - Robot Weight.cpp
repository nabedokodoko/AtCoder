#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

void RWeight() {
	int X, N;
	cin >> X >> N;

	vector<int> array(N);
	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	int Q;
	cin >> Q;

	int result = X;
	vector<int> answer;
	for (int i = 0; i < Q; i++) {
		int num;
		cin >> num;
		result += array[num - 1];

		array[num - 1] *= -1;
		answer.push_back(result);
	}

	for (int x : answer) {
		cout << x << endl;

	}

}