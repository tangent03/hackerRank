/*APPLICATIONS OF LOOPS
1.DOING SOME WORK REPEATEDLY
2.RUNNING SOME SERIVES IN SYSTEMS
3.TRAVERSING THROUGH NUMBERS LIKE ARRAYS...*/

/*WHILE LOOP
while(conditions)
{
    statement 1;
    statement 2;
}
example program*/
/*#include <iostream>
using namespace std;
int main()
{
    int i=0;
    while(i<5)
    {
        cout<<"Aman"<<"\n";
        i++;
    }
    return 0;

*/

//program 2
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Value Of n : ";
    cin>>n;
    int i=0;
    while(i<n)
    {
        cout<<"Aman"<<"\n";
        i++;
    
    }
    cout<<"Bye";
    return 0;
}
*/
/*FOR LOOP
for(initialise;condition;change-loop-variable) //for( ; ; )--infinite loop
{
    statements ;
    loop
}*/
/*#include <iostream>
using namespace std;
int main()
{
    for(int i=0; i<4; i++)
    {
        cout<<"Aman"<<"\n";

    }
    //cout<<i;  compiler error
    return 0;
} */
/*DO-WHILE LOOP :-ATLEAST ONCE THE STATEMENT WILL BE PRINTED*/
/*#include <iostream>
using namespace std;
int main()
{
    int i=3;
    do{
        cout<<"Aman \n";
        i++;

    }while(i<3);
    return 0;

}
*/

/*BREAK USED WITH IF CONDITION*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int x=2 ; x<=n ;x++)
    {
        if(n%x==0)
        {
            cout<<"smallest dvisior of the number n "<<n<<"is "<<x;
            break;

        }
    }
    return 0;
}
*/
/*COUNTINUE LOOP:- USED FOR SKIPPING SOME PART
-PRINTING ALL NUMBERS SMALLER OR EQUAL THAN N AND NOT MULTIPLE OF X*/
/*#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter the value of n : \n";
    cin>>n;
    int x;
    cout<<"Enter the value of x : \n";
    cin>>x;
    for(int i=1;i<=n;i++)
    {
        if(i%x==0)
        continue;
        cout<<i;
    }
    return 0;

}
*/
/*
NESTED LOOPS
PRINT TABLES OF FIRST N INTEGERS
*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The value of n : ";
    cin>>n;
    for(int x=1; x<=n; x++)
    {
        for(int i=1;i<=10;i++)
        {
            cout<<(i*x)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    for(int x=1;x<5;x++)
    {
        int i=1;
        while(i<5)
        {
            cout<<x<<" "<<i<<"\n";
            i++;

        }
        cout<<"Aman \n";

    }
    return 0;
}