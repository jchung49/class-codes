#include <iostream>
using namespace std;
int main() { 
    int x; 
    cin >> x; 
    if (x > 0) { 
        cout << "positive" << endl; 
    } else if (x < 0) { 
        cout << "negative\n";
    } else { 
        cout << "zero\n";
    }
}