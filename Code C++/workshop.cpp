#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main (){
    
    int  n;
    cin >> n;
    double lenght;
    cin >> lenght;
    double width;
    cin >> width;
    
    double area = n * (lenght + 2 * 0.30)*(width+2*0.30);
    double area2 = n  * (lenght/2) * (lenght/2);
    
    double usd = area * 7 + area2 * 9;
    double bgn = usd * 1.85;
    
    
    
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << usd << " USD" << endl;
    cout << bgn << " BGN" << endl;
       
    return 0;
    
}
