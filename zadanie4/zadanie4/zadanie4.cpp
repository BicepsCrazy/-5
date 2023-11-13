#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    
    double a = 3, b = -4, c = 9;

    
    double d = b * b - 4 * a * c;

    
    if (d >= 0) {
        
        double root1 = (-b - sqrt(d)) / (2 * a);
        double root2 = (-b + sqrt(d)) / (2 * a);

        cout << "Корни уравнения " << a << "x^2 + " << b << "x + " << c << " = 0:" << endl;
        cout << "Корень 1: " << root1 << endl;
        cout << "Корень 2: " << root2 << endl;
    }
    else {
        
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-d) / (2 * a);

        cout << "Корни уравнения " << a << "x^2 + " << b << "x + " << c << " = 0:" << endl;
        cout << "Корень 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Корень 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}