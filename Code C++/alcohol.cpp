#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double price, a , b , c , d ;
    cin >> price ;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    cin >> d ;
    
    
    double c1 = price / 2.0;
    double b1 = c1 -(0.4 * c1);
    double a1 = c1 -(0.8 * c1);

    
    double c3 = c * c1 ;
    double b3 = b * b1 ;
    double a3 = a * a1 ;
    double d3 = d * price ;
   
    
    double total = c3+ b3 + a3 + d3 ;
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << total << endl;
    


    return  0;
}
