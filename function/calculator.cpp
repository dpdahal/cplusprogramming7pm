#include<iostream>
using namespace std;

void add(int x,int y){
    cout<<x+y<<endl;
}

void sub(int x,int y){
    cout<<x-y<<endl;
}

void mul(int x,int y){
    cout<<x*y<<endl;
}

void divison(int x,int y){
    cout<<x/y<<endl;
}

int main(){
    cout<<"============My Calculator=========" <<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice == 1){
        int x,y;
        cout<<"First number: ";
        cin>>x;
        cout<<"Second number: ";
        cin>>y;
        add(x,y);

    }else if(choice == 2){
        int x,y;
        cout<<"First number: ";
        cin>>x;
        cout<<"Second number: ";
        cin>>y;
        sub(x,y);
    }
    else if(choice == 3){
        int x,y;
        cout<<"First number: ";
        cin>>x;
        cout<<"Second number: ";
        cin>>y;
        mul(x,y);
    }else if (choice == 4){
        int x,y;
        cout<<"First number: ";
        cin>>x;
        cout<<"Second number: ";
        cin>>y;
        divison(x,y);
    }else{
        cout<<"Invalid choice"<<endl;
    }
    return 0;
}