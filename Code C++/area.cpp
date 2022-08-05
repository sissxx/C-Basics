    #include <iostream>
    #include <cmath>
    #include <math.h>
    using namespace std;

    int main (){
        
        double x1, y1, x2,y2;
        cin >> x1;
        cin >> y1;
        cin >> x2;
        cin >> y2;
        
        double lenght = abs(x1-x2);
        double width = abs(y1-y2);
        
        double area = lenght* width;
        double perimeter = 2 * (width +lenght);
        
        cout.setf(ios::fixed);
        cout.precision(2);
        
        cout <<  area << endl;
        cout <<  perimeter << endl;
           
        return 0;
        
    }
