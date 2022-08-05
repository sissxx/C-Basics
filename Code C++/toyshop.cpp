#include <iostream>

using namespace std;

int main() {
    
    double excursionPrice; // trip
    int puzzelsCnt; // пъзели
    int talkingDollsCnt; //кукли
    int teddyBearCnt; //мечета
    int minionsCnt; //миниони
    int trucksCnt; //камиони
    cin >> excursionPrice;
    cin >> puzzelsCnt;
    cin >> talkingDollsCnt;
    cin >> teddyBearCnt;
    cin >> minionsCnt;
    cin >> trucksCnt;
    
    double puzzlePrice  = (puzzelsCnt*2.60);
    double talkingDollsPrice = (talkingDollsCnt*3);
    double teddyBearPrice = (teddyBearCnt*4.10);
    double minionsPrice = (minionsCnt*8.20);
    double trucksPrice = (trucksCnt*2);
    
    double totalPrice = puzzlePrice + talkingDollsPrice + teddyBearPrice + minionsPrice + trucksPrice;
    int toysCnt = puzzelsCnt + puzzelsCnt + teddyBearCnt + minionsCnt + trucksCnt;
    
    if (toysCnt > 50){
        
      totalPrice = totalPrice* 0.75;
    }
    
  double finalPrice = totalPrice * 0.9;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    

    
    if (finalPrice >= excursionPrice){
        double moneyLeft  = finalPrice  - excursionPrice;
        
        cout << "Yes! " << moneyLeft << " lv left." << endl;
    }
    else  {
       double  moneyNeed = excursionPrice - finalPrice;
        cout << "Not enough money! " << moneyNeed << " lv needed." << endl;
    }
 

    return 0;
}

