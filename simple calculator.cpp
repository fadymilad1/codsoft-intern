#include <iostream>
using namespace std;

int main(){
    int num1, num2, result;
    char op;

    cout<<"enter the first number: ";
    cin>>num1;
    cout<<"enter operator (+, -, *, /): ";
    cin>>op;
    cout<<"enter the second number: ";
    cin>>num2;

    switch(op){
        case'+':
            result= num1+num2;
            break;
        case'-':
            result= num1-num2;
            break;
        case'*':
            result= num1*num2;
            break;
        case'/':
            if(num2!=0){
                result=num1/num2;
            }else{
            cout<<"error";
            return 0 ;
            }
            break;
        default:
            cout<< "error operator, please select one of these only (+, -, *, /)"<<endl;
            return 0;
            }
            cout<< num1 << op << num2 << " = " <<result;
            return 0;

}
