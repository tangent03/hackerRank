//ARRAYS IS A COLLECTION OF SAME DATA TYPE
//INITIALISING AN ARRAY
//IN AN ARRAY OF SIZE N VALID INDEXS ARE FROM 0 TO N-1
/*
#include <iostream>
using namespace std;
int main()
{
    int arr[5] ={50, 30, 44, 21, 10};
    //int arr[]= [0  ,1  ,2  ,3   ,4] indexes
    cout<<arr[2]<<" "<<arr[4]<<"\n";
    //we can modify an array by
    arr[2] = 40;
    cout<<arr[2]<<endl;
    cout<<arr; //first value
    return 0;
    
}
*/
//SIZE OF AN ARRAY
/*
1. SIZE OF AN INT IS 4 BYTES
2.
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int arr[5]= {10, 20, 30, 40, 50};  
    cout<<sizeof(arr)<<endl;                  //size of each index is 4 so 4*5=20
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<n;  //5

    return 0;
}

//TRAVERSING THROGH AN ARRAY  


//BY NORMAL LOOP


#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    

    }
    return 0;
}

//BY RANGE METHOD
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {20, 30, 40, 50};
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    return 0;

}
*/
/*
DIFFERENT TYPES OF ARRAY
1.FIXED SIZE ARRAY
A.ALLOCATED IN FUCTION CALL STACK
INT ARR[100] ;
INT ARR[N];
INT ARR[] = {100, 200,3000}

B.ALLOCATED ON HEAP
INT *ARR[] =NEW INT[N];*/


//SUM OF AN ARRAY
/*
#include <iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int sum = add(arr[n,])
}*/

//sorting
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,30,20,50,40};
    int l=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+l);
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
}