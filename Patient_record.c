#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
void add_patient_record(char age[],char gender[],char name[],char disease[],char phone_no[],int no_of_patients)
{
int exit;
do
{


//using for loop for paterint record of user sprecified...
for(int i=1;i<=no_of_patients;i++)
{

printf("ENTER THE NAME of ptient - #%d:",i);
fgets(name[i],sizeof(name[i]),stdin);
name[i][strcspn(name[i],"\n")]='\0';
printf("ENTER THE Disease :");
fgets(disease[i],sizeof(disease[i]),stdin);
disease[i][strcspn(disease[i],"\n")]='\0';
printf("ENTER THE Age :");
fgets(age[i],sizeof(age[i]),stdin);
age[i][strcspn(age[i],"\n")]='\0';
printf("ENTER THE Gender:");
fgets(gender[i],sizeof(gender[i]),stdin);
gender[i][strcspn(gender[i],"\n")]='\0';

printf("ENTER THE Phone no :");
fgets(phone_no[i],sizeof(phone_no[i]),stdin);
phone_no[i][strcspn(phone_no[i],"\n")]='\0';
printf("Processing");
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf("\nRecord of patient #%d Added Successfully!\n\nExiting the Program",i);

}
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
printf("\n\n");
}
while(exit==no_of_patients);
}

//list Recors...
void list_patient_records(char age[],char gender[],char name[],char disease[],char phone_no[])
{



}


int main(void)
{

int no_of_patients;
printf("Enter the nO of Recors you want to Add :");
scanf("%d",&no_of_patients);
char age[no_of_patients][20];
char gender[no_of_patients][20];
char name[no_of_patients][20];
char disease[no_of_patients][20];
char phone_no[no_of_patients][20];
add_patient_record(age,gender,name,disease,phone_no,no_of_patients);
return 0;
}
