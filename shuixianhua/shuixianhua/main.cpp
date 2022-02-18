//
//  main.cpp
//  shuixianhua
//
//  Created by Yan Peng on 12/25/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int number = 100;
    
    do
    {
        
        int a = 0;
        int b = 0;
        int c = 0;
        
        a = number % 10;
        b = number / 10 % 10;
        c = number / 100;
        
        if (a*a*a + b*b*b + c*c*c == number)
        {
            std::cout << number << endl;
           
        }
        number++;
    } while (number < 1000);
    return 0;
}
