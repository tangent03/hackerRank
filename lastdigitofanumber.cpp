/*#include <iostream>

using namespace std;
int main(){
    int a = 235;
    int ans = a%10;
    cout<<ans;
    return 0;

}

//FOR NEGETIVE NUMBER WE USE ABSOLUTE VALUE
*/
#include <iostream>
using namespace std;
int main(){
    int a =-235;
    int ans = a%10;
    int correctans = abs(a)%10;

    cout<<ans<<endl;
    cout<<correctans;
    
    return 0;

}