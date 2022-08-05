#include <iostream>
using namespace std;

int main() {
    string password = "c";
     cin >> password;
    if (password == "s3cr3t!P@ssw0rd")
    {
        cout <<  "Welcome"  << endl;
    }
else if (password != "s3cr3t!P@ssw0rd")
      {
    cout << "Wrong password!" << endl;
    }

    return 0;
}
