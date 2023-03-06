#include <iostream>
using namespace std;
 /*int main(){
    int x=5;
    bool res = (x==4) and (x++);
    cout<< res << " "<<x;
    return 0;

    }
    */
   /*int main(){
    int x =5;
    bool res = (x==4) or (x++);
    cout<<res<<" "<<x;
    return 0;

   }
   */
  /*int main(){
    int x=5;
    bool res = (x==5) or (x++);
    cout<<res<<" "<<x;
    return 0;

    }
    */
   /*int main(){
    int x=1,y=2,z=3,a;
    a=(x,y,z);  
    
    //in comma operator it has least precedence and LtoR and it is used for 2 variables only
    // and a gets 2nd value as answer
    //first a=x,y a=y
    //second a=y,z a=z=3
    // [(>=]
    cout<<a;
    return 0;

   }
   */
  /*int main(){
    int x=1,y=2,z=3,a;
    a=x,y,z;
    //here assignment precedence is more than , so a=x=1
    cout<<a;
    return 0;

  }
  */
 int main(){
    int a=10,b=20,c=30;
    if(c>b>a)   //associativity left to right 
        cout<<"Y";
    else 
        cout<<"N";
    return 0;

 }