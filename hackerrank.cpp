//SIimple array sum
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
        
    }
    cout<<sum;
    return 0;
    
}
//alice 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr1[3];
    int arr2[3];
    int alice_score=0;
    int bob_score=0;
    int i,j;
    
    for(int i=0;i<3;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<3;j++){
        cin>>arr2[j];
    }
    
    for(int k=0;k<3;k++){
        
    
    if(arr1[k]>arr2[k]){
        alice_score+=1;
    }
    else if(arr2[k]>arr1[k]){
        bob_score+=1;
    }
    else{
        alice_score=alice_score+0;
        bob_score=bob_score+0;
    }
    
    }
    cout<<alice_score<<" "<<bob_score;
    return 0;  
}

// sum
#include <bits/stdc++.h>

using namespace std;

int main(){
   long sum =0;
   int n;
   cin>>n;
   int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }
    cout<<sum;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int sum1=0;
    int sum2=0;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(i==j){
                sum1=sum1+arr[i][j];
            }
            if(i+j==n-1){
                sum2=sum2+arr[i][j];
            }
        }
    }
    int diff=abs(sum1-sum2);
    cout<<diff;
}


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int positive_count=0;
    int negetive_count=0;
    int zero_count=0;
    int arr[n];
    double positive_ratio;
    double negetive_ratio;
    double zero_ratio;
    int s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s=sizeof(arr)/sizeof(arr[0]);
        if(arr[i]>0){
            positive_count++;
            positive_ratio=(double)positive_count/s;
        }
        else if(arr[i]<0){
            negetive_count++;
            negetive_ratio=(double)negetive_count/s;
        }
        else{
            zero_count++;
            zero_ratio=(double)zero_count/s;
        }
    }
    cout<<fixed<<setprecision(6)<<positive_ratio<<"\n"<<negetive_ratio<<"\n"<<zero_ratio;
    return 0;
    
}


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        for(int j= 1;j<=n;j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
                
            }
            else {
            cout<<"#";
            }
            
        }
        cout<<"\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    int l;
    long min_sum=0;
    long max_sum=0;
    
    for (int i=0;i<5;i++){
        cin>>arr[i];
                   
        
    }
    l=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+l);
    for(int i=0;i<l-1;i++){
        min_sum=min_sum+arr[i];
    }
    for(int i=1;i<=l;i++){
        max_sum=max_sum+arr[i];
    }
    cout<<min_sum<<" "<<max_sum;
    return 0;
}



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int n,temp=0,count=0,i;
    cin>>n;
    vector<int> array(n);
    for(i=0; i<n;i++)
    {
     cin>>array[i];
}
    sort(array.begin(),array.end());
temp=array[n-1];
/*for(int i=0; i<n;i++)
        cout<<c[i];
*/
    for(i=0; i<n; i++)
{
        if(temp==array[i])
            count++;
    }
cout<<count;
return 0;
} 


#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int x ,y;
int grades[n];
for(int i=0;i<n;i++){
    cin>>grades[i];
    y=grades[i];
    x=y%5;
    if(grades[i]>=38){
        
    
        if(x==3){
            grades[i]+=2;
        
    }
        else if(x==4){
            grades[i]+=1;
    }
}
cout<<grades[i]<<endl;
}

return 0;
            }
            

            #include <bits/stdc++.h>

using namespace std;

int main(){
    int s,t;
    cin>>s>>t;
    int a, b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    int apples[m];
    int oranges[n];
    int count_apples=0;
    int count_oranges=0;
    int x[m];
    
    for(int i=0;i<m;i++){
        cin>>apples[i];
        apples[i]=apples[i]+a;
        if(apples[i]>=s and apples[i]<=t){
            count_apples++;
        }
        
    }
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    

int x1,v1,x2,v2;
cin>>x1>>v1>>x2>>v2;

if(x1<x2 and v2>v1){
    cout<<"NO";
}
else {
    while(x1>x2){
        x1+=v1;
        x2+=v2;
    }
    while(x1<x2){
        x1+=v1;
        x2+=v2;
    }
    if(x1==x2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
    
    
    
    return 0;



}
