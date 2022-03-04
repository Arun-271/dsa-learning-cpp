#include <iostream>
using namespace std;
int fact(int n){
  int result = 1;
  for(int i = 2 ; i <= n ; i++){
     result = result * i;
    // return result;
    }
  return result;
}

int combination(int n , int r){
  return (fact(n) / (fact(r) * fact(n-r)));
}
int main(){
  int n , r;
  cout << "Enter the Total number: " ;
  cin >> n;
  cout << "Enter the number of comibination you required: ";
  cin >> r;
  cout <<"The total combination that is possible is : " << combination(n ,r);
  return 0;
}