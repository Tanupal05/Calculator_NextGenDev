#include <iostream>
using namespace std;

int main()
{
  double num1, num2;
  char oper;
  cout << "Enter the operator ( +, -, *, /) : ";
  cin >> oper;

  cout << "Enter the two numbers one by one : ";
  cin >> num1 >> num2;

  switch (oper)
  {
  case '+':
    cout << num1 << " " << oper << " " << num2 << " = " << num1 + num2 << endl;
    break;
  case '-':
    cout << num1 << " " << oper << " " << num2 << " = " << num1 - num2 << endl;
    break;
  case '*':
    cout << num1 << " " << oper << " " << num2 << " = " << num1 * num2 << endl;
    break;
  case '/':
    if (num2 == 0.0)
    {
      cout << "Divided by Zero situation " << endl;
    }
    else
    {
      cout << num1 << " " << oper << " " << num2 << " = " << num1 / num2 << endl;
    }
    break;
  default:
    cout << "Invalid operator" << endl;
    break;
  }
}