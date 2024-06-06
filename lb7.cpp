#include <iostream>
#define LEN 5

using namespace std;

void step(int step_num, int city_num, int lnt);

int R[LEN][LEN] = {
    {0, 4, 2, 0, 0},
    {4, 0, 2, 1, 3},
    {2, 2, 0, 0, 6},
    {0, 1, 0, 0, 1},
    {0, 3, 6, 1, 0} };

int cities_mark[LEN] = {0, 0, 0, 0, 0};  // Пройденные города
int sequeOfcities[LEN];  // Текущая последовательность городов
int minSequeOfcities[LEN];  // Оптимальная последовательность городов
int minlen = -1;  // Длина минимального пути

int main() {
    step(0, 0, 0);
    cout << "\nMin path length = " << minlen << "   Sequence of cities: ";
    for (int i = 0; i < LEN; i++) {
        cout << minSequeOfcities[i] << "-";}
    return 0;
}

void step(int step_num, int city_num, int lnt) {  
    if (step_num == LEN) {
        if (minlen == -1 || lnt < minlen) {
            minlen = lnt;
            for (int i = 0; i < LEN; i++)
                minSequeOfcities[i] = sequeOfcities[i];
        }
        return;
    }

    if (cities_mark[city_num] == 1) return;

    sequeOfcities[step_num] = city_num;
    cities_mark[city_num] = 1;

    for (int i = 0; i < LEN; i++) {
        if (R[city_num][i] == 0) continue;
            step(step_num + 1, i, lnt + R[city_num][i]);
    }
    cities_mark[city_num] = 0;
} 