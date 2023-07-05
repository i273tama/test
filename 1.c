#include <stdio.h>

int main(void){
  int n;

  printf("n = ");
  scanf("%d", &n);

  if ( ( n & 1 ) == 0 ){
    printf("%d は偶数です\n", n);
  }
  /*( n & 1 == 0 )から( ( n & 1 ) == 0 )に変更した
    この理由は、演算の優先順位が(==)の方が(&)より高いため、()を付けなければ、先に( 1 == 0 )の演算を行ってしまうためである。*/

  return 0;
}