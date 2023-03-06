/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
    for(int i=1;i<=n;++i){
        if(n%i==0){
            count++;
        }

    }
    if(count==2){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
int i=2;
int n;
cin>>n;
while (i<=n)
{
if(n%i==0){
    cout<<i<<" ";
    n=n/i;
    i--;
}
    i++;
}
return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int fac=1;
    for(int i=1;i<=n;++i){

        fac=fac*i;
    }
    cout<<fac;
    return 0;
}