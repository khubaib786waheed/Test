#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter the first  number :";
    cin>>a;
    cout<<"enter the first  number :";
    cin>>b;
    cout<<"enter the first  number :";
    cin>>c;
     if(cin.fail()){
        cout<<"the input is invalid plaease enter the number ";
    }
    else{
   if(a>b && a>c || a>c && a>b ){
    cout<<"the largest number is:"<<a;
   }
     else if(b>a && b>c || b>c && b>a){
    cout<<"the largest number is :"<<b;
   }
     else if(c>a && c>b || c>b && c>a){
    cout<<"the largest number is :"<<c;
   }
}
}