#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    //1.BOOLEAN VALUE
    bool a = true;
    cout<<"BOOLEAN VALUE \n";
    cout << a << "\n";
    cout<<std::boolalpha;
    cout<<a<<"\n";
    cout<<std::noboolalpha;
    cout<<a<<"\n";
    cout<<"-----";
    //2.INTEGER VALUES
    int b = 26 , c = 20;
    cout<<"INTEGER VALUES \n";
    cout<<b<<" "<<c<<"\n";
    cout<<std::hex;
    cout<<b<<" "<<c<<"\n";
    cout<<std::oct;
    cout<<b<<" "<<c<<"\n";
    cout<<std::dec;
    cout<<b<<" "<<c<<"\n";

    return 0;

}