//TOTAL NUMBER OF DIVISORS 

/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Value Of N ; ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
*/
//FACTORIAL OF A NUMBER
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Value Of n : ";
    cin>>n;
    int ans=1;
    while(n>0)
    {
        ans=ans*n;
        n--;
    }
    cout<<ans;
    return 0;
}
*/

//GCD OF A NUMBER ;-PHELE DONO NUMBERS KA MINIMUM LENA HAI FIR UNKA GCD

/*
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter value of a ";
    cin>>a;
    cout<<"Enter value of b ";
    cin>>b;
    int x = min(a,b);
    int ans = 1;
    for (int i=1;i<=x;i++)
    {
        if(a%i==0 and b%i==0)
        ans=i;
    }
    cout<<ans;
    return 0;
}
*/
//LCM OF A NUMBER
/*
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    int start = max(a,b);
    int end = a*b;
    int ans=start;
    for(int i=start;i<=end;i++)
    {
        if(a%i==0 and b%i==0)
        {
        ans = i;
        break;
        }
    }
    cout<<ans;
    return 0;
}
*/

//CHECKING IF PRIME
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0 or n==1)
    {
        cout<<"NEITHER PRIME NOR COMPOSITE";
        return 0;
    }
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        
        {
            cout<<"NO";
            return 0;
        }
    i++;
    }
    cout<<"YES";
    return 0;
}
*/

//TABLE OF A NUMBER

/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{


int m ,n;
cout<<"Enter the value of table : ";
cin>>m;
cout<<"Upto which number : ";
cin>>n;

for(int i=1; i<=n; i++)
{
    cout<<m*i<<endl;
}

return 0;


}
*/
//FIBONACCI SERIES


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1;
    int b=1;
    int c=0;
    cout<<" 1 1 ";
    for(int i=2;i<n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

    return 0;

}

//TO BE SOLVED AFTERWARDS
//1.NEXT PRIME NUMBER
//2.BINARY TO DECIMAN
//3.DECIMAL TO BINARY
//4.NEXT RPIME NUMBER
//5.
