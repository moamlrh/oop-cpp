#include <iostream>

using namespace std;

enum symboles
{
  SUM,
  SUB,
  DIV,
  MUL
};

class Calcuator
{
private:
  int n1;
  int n2;
  symboles symbole;

public:
  int sum();
  int sub();
  int mul();
  int div();
  Calcuator();
  Calcuator(int num1, int num2, symboles s);
};

int Calcuator::div(){};
int Calcuator::mul(){};
int Calcuator::sum()
{
  return this->n1 + this->n2;
}

int Calcuator::sub()
{
  return this->n1 - this->n2;
}

Calcuator::Calcuator(int num1, int num2, symboles s)
{
  this->n1 = num1;
  this->n2 = num2;
  this->symbole = s;
  switch (s)
  {
  case SUM:
    this->sum();
    break;
  case SUB:
    this->sub();
    break;
  case DIV:
    this->div();
    break;
  case MUL:
    this->mul();
    break;
  default:
    break;
  }
}

int main()
{
  Calcuator cal(2,4,SUM);
  cout << cal.sum() << endl;
}