#include <iostream>
#include <cmath>  
#include <iomanip>  

using namespace std;

int main() {
    double P, S;

    P = 0;
    int k = 1;
    while (k <= 20) {
        double S = 0;
        int i = 1;
        while (i <= k) {
            S += cos(i + k);
            i++;
        }
        P += sqrt(sin(k) * sin(k) + abs(S));
        k++;
    }
    cout << P << endl;
    P = 0;
    k = 1;
    do {
        double S = 0;
        int i = 1;
        do {
            S += cos(i + k);
            i++;
        } while (i <= k);
        P += sqrt(sin(k) * sin(k) + abs(S));
        k++;
    } while (k <= 20);
    cout << P << endl;

    P = 0;
    for (k = 1; k <= 20; k++) {
        double S = 0;
        for (int i = 1; i <= k; i++) {
            S += cos(i + k);
        }
        P += sqrt(sin(k) * sin(k) + abs(S));
    }
    cout << P << endl;

    P = 0;
    for (k = 20; k >= 1; k--) {
        double S = 0;
        for (int i = k; i >= 1; i--) {
            S += cos(i + k);
        }
        P += sqrt(sin(k) * sin(k) + abs(S));
    }

    cout << fixed << setprecision(4);  
    cout << P << endl;

    return 0;
}
