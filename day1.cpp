#include <iostream>
#include <string>
using namespace std;
int main(void){
  char buf[3000];
  cin >> buf;
  uint sum = 0;
  uint i;
  for( i = 0; buf[i] != '\0'; i++ ){
    if(buf[i] == buf[i+1])
      sum += (uint)buf[i] - 48;
  } 
  if( buf[0] == buf[i-1] )
    sum += (uint)buf[i-1] - 48;
  cout << sum << endl;
  return 0;
}
