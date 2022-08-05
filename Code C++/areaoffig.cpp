#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string  figure;
    cin >> figure;
    double pi = 3.14159265359;
    double area = 0.0;
    
    if (figure == "square"){

    double a;

    cin >> a;

    area = a * a;

    }
    else if (figure == "rectangle"){

    double a, b;

        cin >> a;
        cin >> b;

        area = a* b ;

    }
    else if (figure == "circle" ){

        double r;
        cin >> r;
        area = r * r * pi;

    }
    else if (figure == "triangle" ){

        double a,h;
        cin >> a;
        cin >> h;
        area = (a*h) /2;

       }
    
    
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << area << endl;
    

    return 0;
}
