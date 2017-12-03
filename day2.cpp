#include <iostream>
#include <string.h>
#include <limits.h>
using namespace std;
#define uint unsigned int
int main(void){
  char * tok;
  char buf[100];
  uint min = UINT_MAX;
  uint max = 0;
  uint n;
  uint sum = 0;
  while( gets(buf) ){
    min = UINT_MAX;
    max = 0;
    tok = strtok(buf," ");
    while( tok != NULL ) {
      n = atoi(tok);
      tok = strtok( NULL, " " );
      if ( n > max )
        max = n;
      if ( n < min )
        min = n;
    }
    sum += (max-min);
  }
  cout << sum << endl;
  return 0;
}
