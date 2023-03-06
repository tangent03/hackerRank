#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 12 , b = 69;
    cout<<std::setw(5);
    cout<<std::setfill('*');
    cout<<a<<"\n";
    cout<<setw(6);
    cout<<std::left;
    cout<<std::setfill('*'); // std::left std::right
    cout<<b<<"\n";
    return 0;
}