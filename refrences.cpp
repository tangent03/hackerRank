/*WE USE APHRENDHEND OR(& BRFORE REFRENCE VARIABLE DECLARATION)

MUST BE INITIALIZED
CANNOT BE NULLED
CANNOT BE CHNAGED*/
/*
#include <iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;
    cout<<y<<" ";
    x=x+10;
    cout<<y<<" ";
    y=y+10;
    cout<<x<<" ";
    return 0;

}
*/
/*
#include <iostream>
using namespace std;
void fun(int x)
{
    x=x+10;
}
int main()
{
    int x=10;
    fun(x);
    cout<<x;
    return 0;

}

*/

/*
#include <iostream>
using namespace std;
void fun(int &x)
{
    x=x+10;

}
int main()

{
    int x =10;
    fun(x);
    cout<<x;
    return 0;
}
*/


//RANGE BASED FOR LOOPS
/*
#include <iostream>
using namespace std;
int main()
{
    int arr[]={10, 20, 30, 40, 50};
    for(int &x : arr)
    {
        x=x*2;
    }
    for(int x: arr)
    {
        cout<<x<<" ";
    }
}
*/

//CONST AND R VALUE REFRENCES
/*

the above refrences cannot be used for R value example : literals and result of expression

&& is used for r refrences
*/

#include <bits/stdc++.h>
using namespace std;
void fun(string &&s)
{
    s="HI " + s;
    cout<<s<<" ";
}
int main()
{
    fun("Aman");
    return 0;

}