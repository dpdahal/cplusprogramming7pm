/*
What is function?
Function is a block of code that is reusable.
Types of function
1. Built-in function
2. User-defined function

*/

#include <iostream>
using namespace std;

void printOneToTen(){
    for(int i = 1; i <= 10; i++){
        cout <<"Hello World" << endl;
    }
}

int main(){
    printOneToTen();
    return 0;
}