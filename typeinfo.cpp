#include<typeinfo>
#include<iostream>
using namespace std;
int main(){
auto a = 10;
auto b = 20.7;
cout<<a<<"\n"<<b<<endl;
cout<<typeid(a).name()<<"\n"<<typeid(b).name();
return 0;

}
