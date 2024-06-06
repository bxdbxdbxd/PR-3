#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<pair<int, int>> test_cases;

    // Считываем тестовые случаи и сохраняем их в вектор
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        test_cases.push_back({a, b});
    }

    // Перебираем тестовые случаи с использованием итераторов
    for (vector<pair<int, int>>::iterator it = test_cases.begin(); it != test_cases.end(); it++) {
        int a = it->first;
        int b = it->second;

        if (a % b != 0) {
            int s = ((a / b + 1) * b) - a;
            cout << s << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}