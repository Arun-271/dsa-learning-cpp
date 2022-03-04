#include <iostream>
using namespace std;
void tower(int n ,char from_rod ,char to_rod , char aux_rod){
  if(n == 1 ){
    cout << "Move the disk 1 from  " << from_rod  << " to the " << to_rod << endl;
    return;
  }
  tower(n-1,from_rod ,aux_rod,to_rod);
  cout << "Move the disk " << n << " from " << from_rod << " to the " << to_rod << endl;
  tower(n-1,aux_rod , to_rod, from_rod);
}
int main() {
  // std::cout << "Hello World!\n";
  tower(4 , 'A','C','B');
}