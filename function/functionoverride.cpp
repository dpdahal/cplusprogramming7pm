#include<iostream>
using namespace std;

void hello(){
    cout<<"Hello"<<endl;
}

void hello(string name){
    cout<<"Hello "<<name <<endl;
}

int main(){
    hello();
    hello("Sophia");
    return 0;
}