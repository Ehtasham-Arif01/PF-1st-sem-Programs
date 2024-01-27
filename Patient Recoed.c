#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void add_patient_record(char age[][100], char gender[][100], char name[][100], char disease[][100], char phone_no[][100], int no_of_patients);

void list_patient_record(char age[][100], char gender[][100], char name[][100], char disease[][100], char phone_no[][100], int no_of_patients);

int main(void)
{
    int no_of_patients;

    printf("-----------Welcome to Hospital Management System-----------\n");

    int try = 3;
    do
    {
        char email[100];
        char password[100];
        char password1[100] = "fast123";

        printf("\nEnter Id:");
        scanf("%s", email);
        printf("Enter Password:");
        scanf("%s", password);

        if (strcmp(password, password1) == 0)
        {
            printf("\n----------Welcome to Hospital Management System-------------\n");

            int choice;
            printf("\n-------Please Select One------\n");
            printf("\n1:Admit Patient: \n2:Patient List: \n3:Discharge Patient: \n4:Add Doctor: \n5:Doctor List: \n0:Exit---\n");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
            {
                printf("---Enter the Number of Records You want to Add---:");
                scanf("%d", &no_of_patients);
                add_patient_record(age, gender, name, disease, phone_no, no_of_patients);
                break;
            }
            case 2:
            {
                list_patient_record(age, gender, name, disease, phone_no, no_of_patients);
                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                break;
            }
            case 5:
            {
                break;
            }
            default:
            {
                break;
            }
            }
        }
        else
        {
            try--;
            printf("----Wrong Password! %d tries left----", try);
        }
    } while (try != 0);
    return 0;
}

void add_patient_record(char age[][100], char gender[][100], char name[][100], char disease[][100], char phone_no[][100], int no_of_patients)
{
    getchar();
    int exit = 0;
    do
    {
        // using for loop for patient record of user specified...
        for (int i = 0; i < no_of_patients; i++)
        {
            printf("***Enter Patient Record***\n");

            printf("Enter Name of the patient %d:", i + 1);
            scanf("%s", name[i]);
            printf("Processing");
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            printf("\nRecord of patient #%d Added Successfully!\n", i);
            exit++;
        }
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        printf("\n\n");
        if (exit == no_of_patients)
        {
            break;
        }
    } while (exit < no_of_patients);
}

