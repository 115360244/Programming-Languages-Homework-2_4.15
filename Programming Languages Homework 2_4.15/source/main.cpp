#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double principal = 5000.0;
    double amount;
    int years = 15;

    cout << fixed << setprecision(2);

    cout << "Interest Rate     Amount" << endl;

    for (int i = 100; i <= 120; i += 5) {
        double rate = i / 1000.0;
        amount = principal * pow(1.0 + rate, years);

        cout << rate * 100 << "%             $"
            << amount << endl;
    }
	system("pause");
    return 0;
}