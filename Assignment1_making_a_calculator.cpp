#include<iostream>
using namespace std;
int main() {
    int num1,num2;
    char operation;
    cout << "Enter the first number:";
    cin >> num1;

    cout << "Enter an operator";
    cin >> operation;

    cout << "Enter the second number";
    cin >> num2;

    switch(operation) {
        case  '+':
        cout << "Result=" << num1 +num2;
        break;
        
        case '-':
        cout << "Result=" << num1-num2;
        
        break;
        
        case '*':
        cout << "Result=" << num1*num2;
        break;

        case '/':
        if(num2 !=0){ 
        cout << "Result=" << num1/num2;
        }
         else {
            cout << "Cannot be divisble by zero";
            break;
        default:
         cout << "Invalid operation"; 
        }
         
        }
return 0;
}


