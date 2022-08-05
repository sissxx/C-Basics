#include <iostream>
#include <string>
#include <cmath>
using  namespace std;

int  main (){

    double recordTime, distanceInMeters, secondPerMeter;
    cin >> recordTime;
    cin >>  distanceInMeters;
    cin >> secondPerMeter;
    
    double secondsRes  =  distanceInMeters  * secondPerMeter;
    double delayTime =  floor(distanceInMeters / 15) * 12.5;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    double totalTime  = secondsRes + delayTime;
    if (totalTime < recordTime){
        cout  << "Yes, he succeeded! The new world record is "  << totalTime << " seconds." << endl;
    }
    
    else {
        cout  << "No, he failed! He was "  << totalTime- recordTime << " seconds slower." << endl;
    }
    return 0;
}
