#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "windows.h"
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int m[8];
    int y;
    int product = 1;
    int maxIndex = 0;
    srand(time(NULL));
    for (y = 0; y < 8; y++) {
        m[y] = rand() % 101 - 50;
        cout << setw(10) << m[y];
    }
    cout << endl;
    for (y = 0; y < 8; y += 2) {
        product *= m[y];
    }
    cout << "Добуток елементів з парними індексами: " << product << endl;
    for (y = 1; y < 8; y++) {
        if (m[y] > m[maxIndex]) {
            maxIndex = y;
        }
    }
    cout << "Індекс максимального елементу: " << maxIndex << endl;

    return 0;
}