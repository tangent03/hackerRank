//FUNCTIONS

/*#include <iostream>
using namespace std;

void greetmsg()
{
    cout<<"Hi"<<"\n";
    cout<<"Welcome To The Code"<<"\n";
}
void exitmsg()
{
    cout<<"Thank you"<<"\n";
    cout<<"BYE"<<"\n";
}
int main()
{
    greetmsg();
    cout<<"Hope Yor Are Enjoying"<<"\n";
    exitmsg();
    return 0;

}
*/
/*#include <iostream>
using namespace std;

int getmax(int x, int y)
{
    if (x>y)
    {
        return x;
    }
    else 
    {
        return y;
    }
}
int main()
{
    int a = 10 , b = 20;
    cout<<getmax(a,b);
    return 0;

}
*/
 /*#include <iostream>
using namespace std;
void fun2()
{
    cout<<"Inside fun2()"<<"\n";

}
void fun1()
{
    cout<<"Before fun2()"<<endl;
    fun2();
    cout<<"after fun2()"<<endl;

}
int main()
{
    cout<<"Before fun1()"<<"\n";
    fun1();
    cout<<"after fun1()"<<"\n";
    return 0;
} */

//APPLICATIONS OF FUNCTIONS
/*
1.AVOID CODE REDUNDANCY AND EASE OF MAINTAINENCE
2.MAKE CODE MODULAR
3.ABSTRACTION
4.AVOID VARIABLE NAME COLLISION*/

/*
WE NEED TO FIRST DECLARE AND THEN DEFINE 
LIKE FOR MATHS WE DEFINE HEADER FILE AS
INCLUDE <CMATH>*/



/*DEFAULT ARGUMENTS*/
/*#include <iostream>
using namespace std;
void printdetails(int id , string name ="NA" , string address = "NA") 
{
    cout<<"id is "<<id<<"\n";
    cout<<"Name is "<<name<<"\n";
    cout<<"Address is"<<address<<"\n";
}
int main()
{
    printdetails(304,"Aman","Hyderabad");
    cout<<"\n";     //ALL DEFAULT ARGUMENTS SHOULD APPEAR AT LAST
    printdetails(305,"Pratham","Dehradun");
    cout<<"\n";     //
    printdetails(306,"Devesh","Mathura");
    return 0;


}

*/
//FUNCTION OVERLOADING
/*
#include <iostream>
using namespace std;
int mymax(int x , int y)
{
    return(x>y)?x:y;
}
int mymax(int x , int y , int z)
{
    return (mymax(x,y),z);
}
int main()
{
    int a=120, b=20, c=50;
    cout<<mymax(a,b)<<"\n";
    //cout<<mymax(a,b,c)<<"\n";
    return 0;

}
*/
#include <bits/stdc++.h>
using namespace std;
void fun(int x)
{
    if(x==0){
        return;
    }
    else{
        fun(x-1);
    }
}

int main(){
    fun(3);
    return 0;
    


}


