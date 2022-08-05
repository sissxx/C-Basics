
#include <iostream>
using namespace std;

int main(){
    
    int n, leftSum=0, rightSum= 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int num;
        cin >>  num;
        leftSum += num;
    }
    for (int i = 0; i < n; i++){
          int num;
          cin >>  num;
          rightSum += num;
      }
    if (leftSum == rightSum){
        cout << "Yes, sum = " << leftSum << endl;
    }
    else {
        int diff = abs(leftSum -  rightSum);
        cout << "No, diff = " << diff << endl;
    }
}


