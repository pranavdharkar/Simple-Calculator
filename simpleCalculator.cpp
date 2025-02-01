#include <iostream>
#include <sstream>

using namespace std;

//globle variables
double num1, num2, result;
char op;

// functions
void isNum1Valid ();
void isNum2Valid();
void isOpValid();

int main()
{
    isNum1Valid();
    isOpValid();
    isNum2Valid();

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
        if (num2 == 0)
        {
          cout << num1 << " " << op << " " << num2 << " = undifined" << endl; 
          return 0;
        }
        else
        {
          result = num1/num2;
        }
        break;
    }

  cout << num1 << " " << op << " " << num2 << " = " << result << endl; 
  return 0;
}


void isNum1Valid()
{
  string str;
  cout << "Enter a first number: ";
  getline(cin,str); // Use getline to read the whole line

  while (true)
  {
    stringstream ss(str); // Use stringstream for parsing

    if (ss >> num1 && ss.eof()) // Check if parsing is successful AND nothing is left
    {
      break;
    } 
    else 
    {
      cerr << "Invalid input. Please enter a valid first number: ";
      getline(cin,str);
    }
  }
}

void isNum2Valid()
{
  string str;
  cout << "Enter a second number: ";
  getline(cin,str); // Use getline to read the whole line

  while (true)
  {
    stringstream ss(str); // Use stringstream for parsing

    if (ss >> num2 && ss.eof()) // Check if parsing is successful AND nothing is left
    {
      break;
    } 
    else 
    {
      cerr << "Invalid input. Please enter a valid second number: ";
      getline(cin,str);
    }
  }
}

void isOpValid()
{
    string str;
    cout << "Enter an operator (+ - * /): ";
    getline(cin, str);

    while (true)
    {
        if(str.length() == 1 && (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/'))
        {
            op = str[0];
            break;
        }
        else
        {
            cerr << "Invalid Operator. Please enter a valid operator (+ - * /): ";
            getline(cin, str);
        }
    }
}
