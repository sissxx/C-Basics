#include <iostream>
#include <string>
using  namespace std;

int  main (){
  
    double number;
    string  inputType, outputType;
    
    cin >>number;
    cin >> inputType;
    cin >> outputType;
    double tempCm = 0;
    
    if (inputType == "mm"){
        tempCm = number/10;
    }
    else if (inputType == "cm"){
        tempCm =  number;
    }
    else if (inputType == "m"){
        tempCm = number * 100;
    }
    double result = 0;
    if (outputType== "mm"){
        result = tempCm * 10;
    }
    else if (outputType == "cm"){
        result = tempCm;
    }
    else if (outputType == "m"){
        result = tempCm / 100;
    }
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << result << endl;
    
    return 0;
}
