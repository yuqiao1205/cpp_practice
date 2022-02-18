//
//  main.cpp
//  week3
//
//  Created by Yan Peng on 2/7/22.
//

#include <iostream>

using namespace std;




int main(int argc, const char * argv[]) {
    cout << "Enter a number: ";
    int number;
    cin >> number;
    for(int i = 1; i <= number; i++){
        if (i % 15 == 0){
            cout << "FizzBuzz" << endl;
        }else if (i % 3 == 0){
            cout << "Fizz" << endl;
        }else if (i % 5 == 0){
            cout << "Buzz" << endl;
        }else{
            cout << i << endl;
        }
    }
    return 0;
}
