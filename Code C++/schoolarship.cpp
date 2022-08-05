#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double FamilyEarnings, AverageSuccess, MinSalary;
 
    cin >> FamilyEarnings;
    cin >> AverageSuccess;
    cin >> MinSalary;
 
    double SocialScholarship = 0.35 * MinSalary;
    double ExcellentScholarship = AverageSuccess * 25;
 
    if (AverageSuccess >= 5.50)
    {
        if ((ExcellentScholarship >= SocialScholarship)||(FamilyEarnings>MinSalary))
        {
            cout << "You get a scholarship for excellent results " << floor(ExcellentScholarship) << " BGN" << endl;
        }
        else
        {
            cout << "You get a Social scholarship " << floor(SocialScholarship) << " BGN" << endl;
        }
    }
 
    else if ((FamilyEarnings < MinSalary) && (AverageSuccess > 4.50))
    {
        cout << "You get a Social scholarship " << floor(SocialScholarship) << " BGN" << endl;
    }
    else
    {
        cout << "You cannot get a scholarship!" << endl;
    }
    
    return 0;
}
