#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> lst;

    // Считываем элементы списка lst
    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        lst.push_back(x);
    }

    int d;
    cin >> d;

    // Создаем вектор lst_1 из нулей длиной d
    vector<int> lst_1(d, 0);

    // Итерируемся по элементам списка lst
    for (vector<int>::iterator it = lst.begin(); it != lst.end(); it++) {
        int i = *it;

        // Итерируемся по индексам, начиная с i-1 и увеличивая на i каждый раз
        for (int j = i - 1; j < d; j += i) {
            lst_1[j] = 1;
        }
    }

    // Вычисляем и выводим сумму элементов в lst_1
    int sum = 0;
    for (vector<int>::iterator it = lst_1.begin(); it != lst_1.end(); it++) {
        sum += *it;
    }
    cout << sum << endl;

    return 0;
}