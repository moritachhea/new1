//exp()
#include <stdio.h>      
#include <math.h>
#include <iostream>
using namespace std;   

double morita_exp(double x)
{
    double sum = 1.0 + x;
    double term = x;                 
    for (int k = 2; k < 50; k++)
    {
        term = term * x / (double)k; 
        sum = sum + term;
    }
    return sum;
}

int main ()
{
  double num, result;
  cin>>num;
  result = morita_exp(num);
  cout<<"The exponential value is"<< result;
  return 0;
}
