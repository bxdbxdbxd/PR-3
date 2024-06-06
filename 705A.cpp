#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string result;

    // Создаем вектор, чтобы хранить повторения фразы
    vector<string> repetitions;

    // Добавляем фразы в вектор столько раз, сколько необходимо
    for (int i = 0; i < (n - 2) / 2; i++) {
        repetitions.push_back("I hate that I love that ");
    }

    // Добавляем последнюю часть фразы
    if (n % 2 == 0) {
        repetitions.push_back("I hate that I love it");
    } else {
        repetitions.push_back("I hate it");
    }

    // Итерируемся по вектору и объединяем фразы в строку
    for (vector<string>::iterator it = repetitions.begin(); it != repetitions.end(); it++) {
        result += *it;
    }

    cout << result << endl;

    return 0;
}