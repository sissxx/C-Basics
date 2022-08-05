#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int a, b, h;
    cin >> a;
    cin >> b;
    cin >> h;
    double p;
    cin >> p;

    int TotalVolume = a * b * h;
    
    double RealLiters = TotalVolume * 0.001;
    double procent = p * 0.01;
    double liters = RealLiters * (1 - procent);
    cout.setf(ios::fixed);
    cout.precision(3);
    
    
    cout << liters << endl;
    
    
    
    return 0;
}
