#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operator (+ - * /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
      result = num1+num2;
      break;
    case '-':
      result = num1-num2;
      break;
    case '*':
      result = num1*num2;
      break;
    case '/':
      result = num1/num2;
      break;
    
    default:
      break;
    }

  cout << "Num1 " << op << " Num2 = " << result << endl; 
  return 0;
}
