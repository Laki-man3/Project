#include <stdio.h>
int main() {
  int i;
  double sum1=0, sum2=0, sum3=0, sum4=0, sump1=0, sumn1=0, sump2=0, sumn2=0;
  //1. Cлева - направо:
  for(i = 1; i <= 1000; i++) {
    if(i % 2 == 0) {sum1 -= 1.0 / i;} 
    else {sum1 += 1.0 / i;}}
  printf("1. Сумма ряда = %20.18lf\n", sum1);

  //2. Слева - направо, сначала все положительные, затем все отрицательные и вычесть из положительных отрицательные
  for(i = 1; i <= 1000; i++) {
    if(i % 2 == 0) {sumn1 += 1.0 / i;} 
    else {sump1 += 1.0 / i;}}
  sum2 = sump1 - sumn1;
  printf("2. Сумма ряда = %20.18lf\n", sum2);

  //3. Справа - налево:
  for(i = 1000; i >= 1; i--) {
    if(i % 2 == 0) {sum3 -= 1.0 / i;} 
    else {sum3 += 1.0 / i;}}
  printf("3. Сумма ряда = %20.18lf\n", sum3);

  //4. Справа - налево, сначала все положительные, затем все отрицательные и вычесть из положительных отрицательные:
  for(i = 1000; i >= 1; i--) {
    if(i % 2 == 0) {sumn2 += 1.0 / i;} 
    else {sump2 += 1.0 / i;}}
  sum4 = sump2 - sumn2;
  printf("4. Сумма ряда = %20.18lf\n", sum4);

  return 0;
}
