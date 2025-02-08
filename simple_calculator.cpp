#include <iostream>
#include <sstream>

using namespace std;

//globle variables
double num1, num2, result;
char op;

// functions
void get_valid_num1();
void get_valid_num2();
void get_valid_op();
void get_valid_yn_to_continue();

int main()
{
  get_valid_num1();
  get_valid_op();
  get_valid_num2();

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
        cout << "Division by zero is undefined" << endl; 
        goto exitloop;
      }
      else
      {
        result = num1/num2;
      }
      break;
  }
  
  cout << num1 << " " << op << " " << num2 << " = " << result << endl; 

  exitloop:
  
  get_valid_yn_to_continue();

  return 0;
}


void get_valid_num1()
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

void get_valid_num2()
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

void get_valid_op()
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

void get_valid_yn_to_continue()
{
  string str;
  cout << "Do you want to perform another calculation? (y/n): ";
  getline(cin, str);

  while (true)
  {
    if(str.length() == 1 && (str[0] == 'Y' || str[0] == 'N' || str[0] == 'y' || str[0] == 'n'))
    {
      if(str[0] == 'Y' || str[0] == 'y')
      {
        main();
      }
      else
      {
        cout << "Exiting the Simple Calculator..." << endl;
        exit(0);
      }
      break;
    }
    else
    {
      cout << "Invalid input.\nDo you want to perform another calculation? (y/n): ";
      getline(cin, str);
    }
  }
}