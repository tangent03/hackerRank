#include <bits/stdc++.h>
using namespace std;
int first_digit_of_number(int n){
    while(n>10){
        n = n / 10;
    }
    return n;
}
int main(){
    
    cout<<first_digit_of_number(6969);
    return 0;
}