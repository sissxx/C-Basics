#include <iostream>
#include <string>
using  namespace std;

int  main (){
    int hours, minutes;
    cin >> hours;
    cin >>  minutes;
    
    int totalMinutes  = minutes+ (hours*60);
    totalMinutes +=15;
    
    int hoursRes = totalMinutes/60;
    int minutesRes  = totalMinutes % 60;
    
    if (hoursRes >= 24){
        hoursRes -= 24;
    }
    if (minutesRes <= 9){
        cout << hoursRes << ":0"  << minutesRes;
        
    }
    else {
        cout << hoursRes << ":" << minutesRes;
    }
    

    
 
    
    return 0;
}
