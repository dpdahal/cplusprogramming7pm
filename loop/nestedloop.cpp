#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    
    for(int row=1;row<=n;row++){
        cout<<"===================="<<row <<"===================="<<endl;
        for(int col=1;col<=10;col++){
           cout<<col; 
        }
        cout<<endl;
    }

}