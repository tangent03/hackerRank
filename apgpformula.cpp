#include <iostream>
using namespace std;

// SUM OF N MATURAL NUMBER
 /*int main(){
    int n = 3;
    int ans = n*(n+1)/2;
    cout<<ans;
    return 0;

}
*/


// ARITHMATIC PROGRESSION
 /*int main(){
     
    // starting number
    int a = 2;

    // difference
    int d = 1;

    //Nth term to find
    int n = 5;

    //ans
    int ans = (a+(n-1)*d);
    cout<<ans;
    return 0;

} */


// GEOMETRIC PROGRESSION
#include <bits/stdc++.h>
int main(){

    int a = 2;

    int r =3;

    int n = 3;

    int ans = a*(int)(pow(r,n-1));
    cout<<ans;
    
    return 0;
}