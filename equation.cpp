#include <iostream>
using namespace std;
int main(){
int a,b,c,x;
cout<<"Enter the value of a :"<<endl;
cin>>a;
cout<<"Enter the value of b :"<<endl;
cin>>b;
cout<<"Enter the value of c :"<<endl;
cin>>c;
cout<<"Enter the value of x :"<<endl;
cin>>x;
int lhs=a*x*x+b*x+c;
int rhs=0;
if(lhs==rhs){
    cout<<"This quadratic equation is true .";
}else{
    cout<<"This quadratic equation is not true .";
} 
    return 0;}