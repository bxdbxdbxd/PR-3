#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Создаем векторы для хранения элементов списков p и q
    vector<int> p;
    vector<int> q;

    // Считываем элементы списка p и удаляем первый элемент (пустой)
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i != 0) {
            p.push_back(x);
        }
    }

    // Считываем элементы списка q и удаляем первый элемент (пустой)
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i != 0) {
            q.push_back(x);
        }
    }

    // Объединяем элементы списков p и q в один набор
    set<int> all_elements;
    for (int x : p) {
        all_elements.insert(x);
    }
    for (int x : q) {
        all_elements.insert(x);
    }

    // Проверяем, содержит ли набор all_elements n элементов
    if (all_elements.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}