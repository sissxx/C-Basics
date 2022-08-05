#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double s;
    cin >> s;
    double g;
    cin >> g;
    
    double r = 384400;
    
    
    double sum = r*2;
    double GoTime = ceil(sum/s);
    double time = round(GoTime + 3);
    double diesel = (g*sum)/100;
    cout << time << endl;
    cout << diesel  <<  endl;
  

    return 0;
}
