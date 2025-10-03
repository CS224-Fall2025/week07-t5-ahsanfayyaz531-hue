#include <iostream>
using namespace std;

int FindHappiness(int i) {
    int rem;
    int add = 0;
    if (i == 1) {
        cout << "Happy number!";
        return 0;
    } else {
        while (true) {
            if (i < 10) {
                cout << "Sad Number!";
                return 0;
                }
            else {
                while(rem > 0 && i > 0) {
                    rem = i % 10;
                    i = i / 10;
                    add = add + (rem*rem);
                }
                if (i == 0) {
                    break;
                }
                else if(add > 9) {
                    FindHappiness(add);
                }

            } 
        }

    }
}
            
            
int main() {
    int n;
    cout << "Write an integer: ";
    cin >> n;
    bool status = true;
   // FindHappiness(n);
    while(status) {
        if (n < 1) {
            cout << "Invalid input! Try again!";
            cout << "Write an integer: ";
            cin >> n;
        } else {
            FindHappiness(n);
            status = false;
        }
    }
    

    
    return 0;
}
