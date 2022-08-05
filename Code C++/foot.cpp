#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main (){

            int win = 0;
            int loss = 0;
            int drawn = 0;
    
            for (int game = 1; game <= 3; game++)
            {
                string result = getline();
                char score1 = result[0];
                char score2 = result[2];
                if (score1 > score2)
                {
                    win++;
                }
                else if (score1 < score2)
                {
                    loss++;
                }
                else if (score1 == score2)
                {
                    drawn++;
               
                }
            }
    cout << "Team won " << win << " games." << endl ;
    cout << "Team lost " <<  loss <<" games." <<  endl;
    cout << "Drawn games: " << drawn << "." <<  endl;
           
    return 0;
}
