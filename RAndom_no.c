#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int ran_no()
{
sleep(3);
srand(time(NULL));
return rand()%6+1;

}
int main(void)
{
printf("\t\t%d\n\n",ran_no());
printf("\t\t%d\n\n",ran_no());
printf("\t\t%d\n\n",ran_no());

return 0;
}
