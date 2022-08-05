#include <iostream>
#include <string>
using namespace std;

int main() {
    string town;
    cin >> town;
    string date;
    cin >> date;
    int days;
    cin  >> days;
    double price = 0;
    
    if(town == "France"){
        cout.setf(ios::fixed);
          cout.precision(2);
        if (date == "21-23") price = days * 30;
        if (date == "24-27") price = days * 35;
        if (date == "28-31") price = days * 40;
        cout << "Easter trip to " << town << " : " << price << " leva."<< endl;
       
    }
    if(town == "Germany"){
        cout.setf(ios::fixed);
          cout.precision(2);
        if (date == "21-23") price = days * 32;
        if (date == "24-27") price = days * 37;
        if (date == "28-31") price = days * 43;
        cout << "Easter trip to " << town << " : " << price << " leva."<< endl;
     
    }
    if(town == "Italy"){
           cout.setf(ios::fixed);
             cout.precision(2);
           if (date == "21-23") price = days * 28;
           if (date == "24-27") price = days * 32;
           if (date == "28-31") price = days * 39;
           cout << "Easter trip to " << town << " : " << price << " leva."<< endl;
        
       }
        
    return 0;
}


