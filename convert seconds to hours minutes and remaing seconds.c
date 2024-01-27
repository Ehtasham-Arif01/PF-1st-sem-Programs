#include<stdio.h>
int sec, min, hour,rmsec;
int converter()
{
printf("ENTER THE SECONDS  = " );
scanf("%d",&sec);
min=sec/60;
hour=min/60;
min=min-(hour*60);
rmsec=sec-((hour*3600)+(min*60));
printf("TIME IS %02d : %02d : %02d",hour,min,rmsec);
return 0;
}
int main()
{
converter();
return 0;
}


