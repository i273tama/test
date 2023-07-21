
#include <stdio.h>
#include <stdlib.h> //exit関数を使うために必要
#include <math.h> //sqrt関数を使うために必要

// x の平方根を返す関数。x >= 0 ではないとき exit(1) とする。 
double myRoot(double x) //型が違っていたためintからdoubleに変更
{
  double y; //intからdoubleに変更
  if( !( x >= 0 ) ){ //判定式をx <= 0 から !( x >= 0 )に変更した。
    exit(1);
  }
  y = sqrt(x);
  return y;
}

int main(void)
{
  int i = 0; //変数iを0で初期化
  double *x = (double *)malloc(sizeof(double) * 100);

  while( i <= 100 ){
    x[i] = myRoot((double)i);
    i++;
  }

  //以下は確認用(このままで良い)
  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);

  free(x);
  return 0;
}