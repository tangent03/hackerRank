//QUESTION 1 ;- IF THERE ARE N CUPS ,YOU STARTED PICKING CUP AND THEN YOUR OPPONET PICKED,LAST ONE PICKED WON
//ANS IF EVEN OPPONENT WON IFFF ODD YOU WON


/*
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if (a%2==0)
    {
        cout<<"Opponent Won";
    
    }
    else
    {
        cout<<"You Won";

    }
}*/

//QUESTION 2 :- LARGEST OF THREE NUMBERS
/*


#include <iostream>
using namespace std;
int main(){
    int a , b , c;
    cin>>a>>b>>c;
    if (a>=b and a>=c)
    {
        cout<<a;

    }
    else if (b>=a and b>=c)
    {
        cout<<b;

    }
    else
    {
        cout<<c;
    }
    return 0;
}
*/

//QUESTION 3 :- LEAP YEAR
/*
CONDITIONS:-
1.
IT SHOULD BE DIVISIBLE BY 4 AND NOT BY 100
2.
IT SHOULD BE DIVISIBLE BY 400
*/
/*
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Year to be checked : ";
    cin>>year;
    if (year%4==0 and year%100 != 0)
    {
        cout<<"leap year";

    }
    else if (year%400==0)
    {
        cout<<"Leap year";

    }
    else
    {
        cout<<"Not leap year";

    }
    return 0;
    
}
*/

/*QUESTION :- SIMPLE CALCULATOR
*/
#include <iostream>
using namespace std;
int main(){
    int op , x , y;
    cin>>op>>x>>y;
    if (op==1)
    {
        cout<<x+y;
    }
    else if (op==2)
    {
        cout<<x-y;

    }
    else if (op==3)
    {
        cout<<x*y;

    }
    else 
    {
        cout<<"Invalid inpput";

    }
    return 0;
    
}