#include <iostream>
#include <iomanip>
#include <cmath>  

using namespace std;

int main() {
    double a, b, c, X_s, X_e, dX;


    cout << " a, b, c: ";
    cin >> a >> b >> c;
    cout << " X_s: ";
    cin >> X_s;
    cout << " X_e: ";
    cin >> X_e;
    cout << " dX: ";
    cin >> dX;


    cout << setw(10) << "X" << setw(15) << "F(X)" << endl;
    cout << "----------------------------" << endl;


    for (double x = X_s; x <= X_e; x += dX) {
        double F;

        if (x + c < 0 && a != 0) {

            F = -a * pow(x, 2) - b;
        }
        else if (x + c > 0 && a == 0) {

            F = (x - a) / (x - c);
        }
        else {

            F = (x + c) / x;
        }


        cout << setw(10) << x << setw(15) << F << endl;
    }

    return 0;
}
