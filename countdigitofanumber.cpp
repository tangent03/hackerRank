//DIVIDE BY 10
//NUMBER OF DIGIT IN A NUMBER

#include <iostream>
using namespace std;
int main()
{
    int n=23496;
    int i;
    for(i=0; n>0 ;i++)
    {
        n = n/10;
        
    }
    cout<<i;
    return 0;
}