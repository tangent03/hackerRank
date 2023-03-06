

/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int i=1;
    int n;
    cin>>n;
    
    while(i<=n){
        sum=sum+i;
        ++i;
    }
    cout<<sum;
return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(i==1 or j==1 or i==n or j==n){
                cout<<"*"<<" ";
            }
            else {
                cout<<" "<<" ";
            }
        
        
    }
    cout<<endl;
}
}