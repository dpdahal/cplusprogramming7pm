#include<iostream>
using namespace std;

int main(){

   for(int i=10;i>=1;i--){
         for(int j=1;j<=i;j++){
              cout<<"*";
         }
         cout<<endl;        
   }

  for(int a=1;a<=10;a++){
      for(int b=1;b<=a;b++){
          cout<<"*";
      }
      cout<<endl;
  }

}