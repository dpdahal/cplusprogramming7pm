#include<iostream>

using namespace std;

int main(){
    cout<<"================Computer Bazar================"<<endl;
    cout<<"1.Dell(Rs: 30000)  2. Toshiba(Rs: 40000)  3. HP(Rs: 50000)"<<endl;
    int option;
    int quantity=0;
    int dell_price=0;
    int toshiba_price=0;
    int  hp_price=0;
    string product_name="";
    cout<<"Enter your option: ";
    cin>>option;
    if(option==1){
        cout<<"Enter quantity: ";
        cin>>quantity;
        dell_price=30000*quantity;
        product_name="Dell";
    }else if(option==2){
        cout<<"Enter quantity: ";
        cin>>quantity;
        toshiba_price=40000*quantity;
        product_name="Toshiba";
    }else if(option==3){
        cout<<"Enter quantity: ";
        cin>>quantity;
        hp_price=50000*quantity;
        product_name="HP";
    }else{
        cout<<"Invalid option";
    }

    int delivery_price=0;
    int delivery_option;
    cout<<"1. Home delivery(Rs:1000)  2. Pickup(Free)"<<endl;
    cout<<"Enter your delivery option: "<<endl;
    cin>>delivery_option;
    if(delivery_option==1){
        delivery_price=1000;
    }

    int package_price=0;
    int package_option;
    cout<<"1. Gift(Rs:5000)  2. Normal(Rs:2000)"<<endl;
    cout<<"Enter your package option: "<<endl;
    cin>>package_option;
    if(package_option==1){
        package_price=5000;
    }else{
        package_price=2000;
    }

    int total = dell_price+toshiba_price+hp_price;
    int tax_price=0;
    int tax_option;
    cout<<"1. Nepal(Rs: 0)  2. China(Rs:13% tax) 3. India(Rs:13%)"<<endl;
    cout<<"Enter your tax option: "<<endl;
    cin>>tax_option;
    if(tax_option==2){
        tax_price=total*13/100;
    }else if(tax_option==3){
        tax_price=total*13/100;
    }

    int grand_total=total+tax_price+delivery_price+package_price;
    cout<<"================Invoice================"<<endl;
    cout<<"Product Name: "<<product_name<<endl;
    cout<<"Quantity: "<<quantity<<endl;
    cout<<"Total: "<<total<<endl;
    cout<<"Tax: "<<tax_price<<endl;
    cout<<"Delivery: "<<delivery_price<<endl;
    cout<<"Package: "<<package_price<<endl;
    cout<<"Grand Total: "<<grand_total<<endl;
    cout<<"================Thank You================"<<endl;
    
}