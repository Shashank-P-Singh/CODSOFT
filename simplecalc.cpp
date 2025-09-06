#include<iostream>
using namespace std;

int main()
{
    double num1,num2,result;
    char op;

    cout<<"------  CALCULATOR  ------"<<endl;
    cout<<"Enter the First Number: ";
    cin>>num1;

    cout<<"Enter an operator(+,-,*,/): ";
    cin>>op;

    cout<<"Enter the Second Number: ";
    cin>>num2;

    switch(op) {
        case '+':
        result = num1 + num2;
        cout<<"Result: "<< result<< endl;
        break;

        case '-':
        result = num1 - num2;
        cout<<"Result: "<< result<< endl;
        break;

        case '*':
        result = num1 * num2;
        cout<<"Result: "<< result<< endl;
        break;

        case '/':
        if(num2!=0)
              result = num1 / num2;
            else{
                cout<< "Error! Division by zero is not allowed"<< endl;
                return 0;
            }
            cout<< "Result: "<< result<< endl;
            break;
            default:
            cout<< "Invalid operator!"<< endl;
            break;
    }
    
    return 0;
    
}