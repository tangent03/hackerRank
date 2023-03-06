// IF ELSE IN C++
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// EVEN ODD PROGRAM

/*int main (){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    if (n%2==0)
        cout<<"Even";
    else 
        cout<<"Odd";
    
    return 0;

} */

//ELSE IF IN C++
//POSITIVE NEGETIVE ZERO PROGRAM
/*int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    if (n>0)
        cout<<"positive";
    else if (n<0)
        cout << "negetive";

    else 
        cout<<"zero";

    return 0;
} 
*/

//NESTED IF ELSE
// NUMBER SIGN AND EVEN ODD PROGRAM

int main(){
    int n;
    cout<<"Enter The Value Of N : ";
    cin>>n;

    if (n>0)
    {
        cout<<"Positive"<<endl;
        if (n%2==0)
        {
            cout<<"Even";

        }
        else 
        {
            cout<<"Odd";

        }
    }
    else if (n<0)
    {
        cout<<"Negetive"<<endl;
        if (n%2==0)
        {
            cout<<"Even";
        

        }
        else{
            cout<<"Odd";
        }
    }
    else{
        cout<<"Zero";

    }
    return 0;

}
