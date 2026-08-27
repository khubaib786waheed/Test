#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter the input : ";
    cin>>n;
    if(n>='a' && n<='z'){
        cout<<"the input is a lowercase letter";
    }
    else if(n>='A' && n<='Z'){
        cout<<"the input is an uppercase letter";
    }
    else if(n>='0' && n<='9'){
        cout<<"the input is a digit";
    }
    else{
        cout<<"the input is a special character";
    }
}

