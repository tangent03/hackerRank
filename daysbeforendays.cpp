
    /*QUESTION - DAY BEFORE N DAYS
    HERE IN THE PROBLEM WE NEED TO FIND WHAT WAS THE DAY BEFORE N DAYS
    
    0 SUNDAY
    1 MONDAY
    2 TUESDAY
    3 WEDNESDAY
    4 THURSDAY
    5 FRIDAY
    6 SATURDAY
    
    
    N= NUMBER OF DAYS
    D = CURRENT DAY
    
    STEPS ; CONVERT THE N IN RANGE OF 0 TO 6 
            then subtract it from 7
            if -ve then subtract by 7 else ans
            
             */

#include <iostream>
using namespace std;
int main(){
    //int n = 9;   // n= number of days
    //int d = 0;  //d= current day
    int n , d;
    cout<<"CURRENT DAY : ";
    cin>>d;
    cout<<"BEFORE N DAYS : ";
    cin>>n;
    int x = n%7;
    int ans = d-x;

    if (ans>0)
        cout<<ans;
    else 
        cout<<ans+7;
    
    return 0;

}
