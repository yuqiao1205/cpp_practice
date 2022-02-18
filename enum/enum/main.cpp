//
//  main.cpp
//  enum
//
//  Created by Yan Peng on 1/31/22.
//

#include <iostream>

using namespace std;

enum Parity {EVEN,ODD};

// String constants for the values of parity
const string ODD_STR("ODD");
const string EVEN_STR("EVEN");

bool isEven(int n) {
    return n % 2 == 0;
}

Parity parityOf(int n) {
    return isEven(n) ? EVEN : ODD; //Ternary三元
}

// Function has side effect of printing and returns no result
void printParity(Parity p) {
    switch (p) {
        case EVEN:
            cout << "even";
            return;
        case ODD:
            cout << "odd";
            return;
    }
}

// Pure functional approach, turn parity into string
string parityToString(Parity p) {
    switch (p) {
        case EVEN:
            return EVEN_STR;
        default:
            return ODD_STR;
    }
}

ostream& operator<<(ostream& os, const Parity& p)
{
    os << parityToString(p);
    return os;
}

int main(int argc, const char * argv[]) {
    int number;
    cout << "enter number:";
    cin >> number;
    
    for(int i=0; i<number; i++){
        cout << i << " is " ;
        printParity(parityOf(i));
        cout<< endl;
        
        // Functional approach makes this a one-liner
        // Also can change where the output goes (to file, etc)
        // Also improve testability
        cout << i << " is " << parityToString(parityOf(i)) << endl;
        
        //
        cout << i << " is " << parityOf(i) << endl;
        
        // cout << i;
        // <<(cout, i);
    }
    return 0;
}
