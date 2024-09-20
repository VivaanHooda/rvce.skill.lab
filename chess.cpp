#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        string position;
        cin >> position;  

        char clm = position[0];  
        char row = position[1];  

        
        for (char c = 'a'; c <= 'h'; c++) {
            if (c != clm) {
                cout << c << row << " ";  
            }
        }

        for (char r = '1'; r <= '8'; r++) {
            if (r != row) {
                cout << clm << r << " ";  
            }
        }

        cout << endl;  
    }

    return 0;
}

