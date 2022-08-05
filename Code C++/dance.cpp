#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main (){
    
    double lenght;
    cin >> lenght;
    double width;
    cin >> width;
    double wardrobe;
    cin >> wardrobe;
    
    double hallArea = (lenght * width * 10000);
    double wardrobeArea = wardrobe * wardrobe  * 10000;
    double benchArea = hallArea/10;
    double freeSpace = hallArea - wardrobeArea  - benchArea;
    int dancers = freeSpace/ 7040;
    

    cout << dancers << endl;
       
    return 0;
    
}
