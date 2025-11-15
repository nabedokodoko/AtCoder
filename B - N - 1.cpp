#include<iostream>
#include <vector>
using namespace std;
int atcoder() {
    int N, M;
    cin >> N >> M;
    vector<int> array;

    int total = 0;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        array.push_back(a);
        total += a;
    }

    bool check = false;
    for (int i = 0; i < N; i++) {
        if ((total - array[i]) == M) {
            check = true;
            cout << "Yes" << endl;
            return 0;
        }
    }
    if (check == false) {
        cout << "No" << endl;
    }
}