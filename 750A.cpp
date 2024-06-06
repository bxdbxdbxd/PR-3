#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a = 240 - k;
    int c = 0;

    // Создаем вектор со значениями от 1 до n
    vector<int> tasks;
    for (int i = 1; i <= n; i++) {
        tasks.push_back(i);
    }

    // Используем итератор для перебора задач в векторе
    for (vector<int>::iterator it = tasks.begin(); it != tasks.end(); it++) {
        int task = *it;
        a -= task * 5;
        if (a >= 0) {
            c++;
        } else {
            break;
        }
    }
    cout << c << endl;
    return 0;
}
