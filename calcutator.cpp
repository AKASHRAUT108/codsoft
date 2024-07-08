#include<iostream>
using namespace std;

int main(){
    char op;
    float a,b;
    cout<<"enter the operator:+,-,*,/";
    cin>>op;
    cout<<"enter two number:";
    cin>>a>>b;
    switch(op){
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    default:
        cout<<"not valid";
        break;
    }
    return 0;
}
