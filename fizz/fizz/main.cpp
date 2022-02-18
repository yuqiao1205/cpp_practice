//  CPP program to print Fizz Buzz
//  main.cpp
//  Created by Yan Peng on 2/7/22.

#include <iostream>
using namespace std;

void fizzbuzz(int number){
    
    for(int i = 1; i <= number; i++){
        
        // number divided by 3 and 5 will always be division by 15 with print "FizzBuzz"
        if (i % 15 == 0){
            cout << "FizzBuzz" << endl;
            // number divided by 3 print "Fizz" to replace the number
        }else if (i % 3 == 0){
            cout << "Fizz" << endl;
            // number divided by 5 print "Buzz" to replace the number
        }else if (i % 5 == 0){
            cout << "Buzz" << endl;
        }else{
            cout << i << endl;
        }
    }
}

int main(int argc, const char * argv[]) {
    
    int number;
    do{
        cout << "Enter a number: ";
        cin >> number;
        if (number <= 0 || number >= 100){
            cout << "Enter a number from 1-99 \n";
        }else{
            fizzbuzz(number);
            
            break;
        }
    }while (true);
    return 0;
}
