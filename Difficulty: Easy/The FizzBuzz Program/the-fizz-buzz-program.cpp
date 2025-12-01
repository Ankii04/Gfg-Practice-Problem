#include <iostream>
using namespace std;

void fizzBuzz(int number) {
    if(number%3==0 && number%5==0) cout<<"FizzBuzz\n";
    else if(number%3==0) cout<<"Fizz\n";
    else if(number%5==0) cout<<"Buzz\n";
    else cout<<number<<"\n";
}
