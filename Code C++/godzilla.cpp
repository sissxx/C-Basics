#include <iostream>
#include <string>
using  namespace std;

int  main (){

    double budget,  suitPrice;
    int people;
    
    cin >> budget;
    cin >> people;
    cin >> suitPrice;
    
    double  decorPrice = budget * 0.1;
    double suitTotalPrice = people *  suitPrice;
    
    if (people > 150){
        suitTotalPrice *= 0.9;
    }
    
    double totalPrice = decorPrice + suitTotalPrice;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget >= totalPrice){
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << budget-totalPrice << " leva left." <<  endl;
    }
    else{
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << totalPrice-budget<< " leva more."<< endl;
    }
 
    
    return 0;
}
