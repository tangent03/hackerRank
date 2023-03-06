//1.Binary operators : (+, -, *, /)works for obth integer and floating point integers, % only works for integer values
//sign of a%b is same as a 
// 2. Unary operators
// x++ , x-- are post fix operators 
/*#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int y = x++;     //In postfix operators 
                    // first x is assigned to y ( y=x) then (x=x+1)
                    // like here y=10 and then x=x+1 == x=10+1=11. 
                    // hence x=11 y=10
    int z = x--;      // here z=x and then x=x-1
                       // so z=11 and x=11-1=10
                       //hence z=11 and x=10
                       //x=10 y=10 z=11
                    
    cout<<x<<"\n"<<y<<"\n"<<z;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int x = 20 , a = 25;
    int y = ++x;  // x=x+1 y=x 
    int z = --a;  //a=a-1 z=a
    // hence x = 21 y = 21 z = 24 a =24
    cout<<x<<"\n"<<y<<"\n"<<z<<"\n"<<a;
    return 0;

}
*/
/*#include <iostream>
using namespace std;
int main(){
    int a = 5 , b = 9 , c = 10 , x=20;
    double d = 9.21 , e=21.9 , f=49.004;
    float g=4.2,h=5.9;
    cout << "product of a and b is : "<<(a*b)<<"\n";
    cout << "product of d and h is : "<<(d*h)<<"\n";
    cout << "product of e and c is : "<<(e*c)<<"\n";
    cout << "f-e= "<<(f-e)<<"\n";
    cout << "f+d= "<<(f+d)<<"\n";
    cout << "c/a= "<<(c/a)<<"\n";
    cout << "b/a= "<<(b/a)<<"\n";
    cout << "percent "<<(x%a);
    return 0;
    
}

*/

// Compaarison Operators
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main (){
    int x=10 ,y=20;
    cout<<(x<y)<<endl<<

    (x>y)<<endl<<
    (x==y)<<endl<<
    (x!=y)<<endl<<
    (x>=y)<<endl<<
    (x<=y)<<" ";
    return 0;
} */
/*#include <iostream>
using namespace std;
int main(){
    int x=10, y=20;
    auto res = x<=>y;                //not clear
    if(res<0)
        cout<<"x is less";
    else if (res>0)
        cout<<"x is more";
    else 
    cout<<"x is same";
    return 0;

} */

//Logical Operators
//$$ AND
//  OR
//! NOT

/*#include <iostream>
using namespace std;
int main(){
int x=10 ,y=20;
bool res=(x>0 and x<100);
cout<<res<<"\n";
res=(x>0 or x>y);
cout<<res<<"\n";
res=!res;
cout<<res;
return 0;

}*/

//Short Circuiting In Logical opearators

/*#include <iostream>
using namespace std;
int main(){
int x =5 , y=10;
bool res=(x>10) and (x++);
cout <<res<<"\n";
cout<<x<<"\n";
bool res1 = (y>x) or (y++);
cout<<res1<<"\n";
cout<<y;
return 0;

}*/

//Assignment Operators
//x+=10 = x=x+10
/*#include <iostream>
using namespace std;
int main(){
int x=10 ,y;
y=x;
cout<<y<<"\n";
x+=10;
cout<<x<<"\n";
x-=10;
cout<<x<<"\n";
x*=2;
cout<<x;

return 0;

}
*/


//Operators Presedence and Associativity
/*
1. ++,-- (suffix)
2.!,++,-- (prefix) R To L
3.*,/,%  (left to right)
4. +,- (left to right)
5. <=> (left to right)
6. <,>,<=,>=*(LtoR)
7. ==,!= (LtoR)
8.&&(LtoR)
9.or
10.+=,-=,*=,/=,%=,>>=,<<=,&=,(Right to left)
*/
#include <iostream>
using namespace std;
int main(){
    int x=10,y=20;
    int z=x+x*y;
    cout<<z<<"\n";
    z=y/x*x;  //associativity LtoR so first division then multiplication
    // so 20/10=2 2*10=20
    cout<<z<<"\n";
    z=y=x;
    cout<<y<<"\n";
    cout<<z<<"\n";
    return 0;


}
