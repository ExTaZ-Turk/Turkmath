#include <iostream>
#include "Turkmath.h"
using namespace std;

int main() {
    cout << "5 + 3 = " << topla(5, 3) << endl;
    cout << "8 - 2 = " << çıkar(8, 2) << endl;
    cout << "3 * 4 = " << çarp(3, 4) << endl;
    cout << "12 / 4 = " << böl(12, 4) << endl;
    cout << "Üs(2, 5) = " << üs(2, 5) << endl;
    cout << "Faktoriyel(5) = " << faktor(5) << endl;
    cout << "Karekök(81) = " << karekok(81) << endl;
    cout << "EBOB(24, 36) = " << ebob(24, 36) << endl;
    cout << "EKOK(6, 8) = " << ekok(6, 8) << endl;
    cout << "Fibonacci(10) = " << fibonacci(10) << endl;
    return 0;
}
