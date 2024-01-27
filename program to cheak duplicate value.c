#include <stdio.h>
int main() {
 int num;
 int i;
 int j;
 int d;
 int numbers[25];
 int value = 0;
 printf("Enter 25 numbers b/w (10-100) :\n");

 for (i = 1; i <= 25; i++)
 {
 printf("Enter a %d number :",i);
 scanf("%d", &num);
 if (num < 10 || num > 100)
 {
 printf("Enter a number b/w (10-100) : %d\n", i++);
 i--;
 }

 else{
 for (j = 1; j < value; j++) {
 if (numbers[j] == num) {
 printf("You entered a duplicate value of %d number: \n", j++);
 j--;
 break;
 }
 }

 if (!d) {
 numbers[value] = num;
 value++;
 }
 }
 }
 printf("The unique values you entered are:\n");
 for (i = 0; i< value; i++) {
 printf("%d ", numbers[i]);
 }
 printf("\n");
 return 0;
}
