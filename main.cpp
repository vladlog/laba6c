#include <iostream>
#include <cmath>
using namespace std;
int factorial(int i);
double g1_function(double x);

int main() {
    int y;
    cout << "Enter natural y: "; cin >> y;
    cout <<   (1.7 * g1_function(0.25)+ 2 * g1_function(1 + y))/(6 - g1_function(pow(y,2) - 1)) << endl;
    system("pause");
    return 0;
}

int factorial(int i)
{
    if (i == 0) return 1;
    else return i * factorial(i - 1);
}
double g1_function(double x){
    double Sum1 = 0,Sum2 = 0;
    for(int k = 0; k<=10 ;k++){
        Sum1 += (pow(x, 2*k+1) /(factorial(2*k+1)));
        Sum2 += (pow(x, 3*k) /(factorial(3*k)));
    }
    double g = Sum1/Sum2;
    return g;
}