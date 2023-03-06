
/*Conversion Sequence
bool < char < short int < int <unsigned int < long < long long < float < double < long double*/


/*#include <iostream>
using namespace std;
int main() {

    int a=10;       // char int me convert hojaega to 
    char b='A';   //A ki ASCII value maani jaegi
    cout<<(a+b)<<"\n";
    float z =5.5;    //Loss of information
    cout<<(a+z);
    return 0;
} */

// C Style explicit conversion
/*#include <iostream>
using namespace std;
int main() {
    int a = 15 , b =2;
    double z = double (a)/b;        // sirf a/b krne se 7 aaega bina coversion ke
    cout<<z;
    return 0 ;

}
*/
//C++ style explicit conversion
#include <iostream>
using namespace std;
int main() {  // automatic conversion takes place
    int a = 15 , b = 2;
    double z = static_cast<double>(a)/b;
    cout<<z;
    return 0;

}

/*1. CONVERTING BY EXPRESSION
Syntax :
(type)expression
example;
*/
/*#include <iostream>
using namespace std;
int main(){
    double x = 1.2;
    int sum = (int)x+1;
    cout<<"sum="<<sum;
    return 0;
}
*/

// Static cast syntax
//static_cast<new_type>(expression)