#include <iostream>

using namespace std;

void fizzbuzz(int number){
    
    for(int i = 1; i <= number; i++){
        // number divided by 3 and 5 will always be division by 15,
        // print "FizzBuzz" in place of the number
        if (i % 15 == 0){
            cout << "FizzBuzz" << endl;
        }else if (i % 3 == 0){
            // number divided by 3, print "Fizz"
            cout << "Fizz" << endl;
        }else if (i % 5 == 0){
            // number divided by 5, print "Buzz"
            cout << "Buzz" << endl;
        }else{
            cout << i << endl;
        }
    }
    
}

int main(int argc, const char * argv[]) {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    fizzbuzz(number);
    return 0;
}
