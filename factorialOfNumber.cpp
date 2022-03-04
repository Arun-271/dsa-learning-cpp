#include <iostream>
// Factorial works good.
int factorialOfNumber(int n){
  if(n <= 1){
    return 1;
  }
  return n * factorialOfNumber(n-1);
}
// Another way to calculate the factorial of the number.

int factorial(int n){
  int res = 1;
  for(int i = 2;i<= n;i++){
    res = res * i;
  }
  return res;
}
int main() {
  std::cout << factorialOfNumber(4) << std::endl;
  std::cout << factorial(4) << std::endl;
  return 0;
}