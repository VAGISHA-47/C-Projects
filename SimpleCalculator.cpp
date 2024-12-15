//Simple Calculator 
#include<iostream>
using namespace std;
int main(){
    char operation;
    double num1 , num2;
    cout<<"Welcome to the simple calculator!"<<endl;
    cout<<"Enter an operation(+,-,*,/):";
    cin>>operation;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    switch(operation){
        case '+':
        cout<<"Result:"<<num1 + num2<<endl;
        break;
        case '-':
        cout<<"Result:"<<num1 - num2<<endl;
        break;
        case '*':
        cout<<"Result:"<<num1 * num2<<endl;
        break;
        case '/':
        if(num2!=0)
        cout<<"Result: "<<num1 / num2<<endl;
        break; 
        default:
        cout<<"Error:Invalid operation "<<endl;
        break;
       }
       return 0;
}