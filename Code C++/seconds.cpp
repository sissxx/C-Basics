#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    int totalTime = a+b+c;
    
    int minutes = totalTime / 60;
    int seconds =  totalTime % 60;
    
    if (seconds <= 9){
        cout << minutes << ":0" << seconds <<  endl;
    } else {
        cout << minutes << ":" << seconds << endl;
    }
    
    return 0;
}
