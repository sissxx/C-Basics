#include <iostream>
#include <cmath>

using namespace std;
 int main(){
 
     double yards ;
     cin>> yards ;
     double totalPrice = yards * 7.61;
     double discount = 0.18 * totalPrice ;
     double finalPrice = totalPrice - discount;
     
     cout.setf(ios::fixed);
     cout.precision(2);
     
     
     cout << "The final price is: " << finalPrice << " lv."  << endl;
     cout << "The discount is: " << discount << " lv." << endl ;
     
     return 0;
     

  }
