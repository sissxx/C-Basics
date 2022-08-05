#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
 
int main(){
    
    int days;
    cin >>  days;
    int sweets;
    cin >> sweets;
    int cake;
    cin >> cake;
    int waffels;
    cin >>  waffels;
    int pancakes;
    cin >> pancakes;
    
    double cakePrice = cake * 45;
    double waffelsPrice = waffels  * 5.80;
    double pancakesPrice = pancakes * 3.20;
    
    double perDay = (cakePrice +  waffelsPrice + pancakesPrice) *  sweets;
    double allSum = (perDay * days);
    allSum = allSum - (allSum * 1/8);
  
    

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << allSum << endl;
    
  
    
    return 0;
    
}
