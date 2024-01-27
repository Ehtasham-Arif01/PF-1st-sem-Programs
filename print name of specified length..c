#include <stdio.h>
//function to print name of specified length.
void print_name(int x) {
    FILE *ptr;
    ptr = fopen("test.txt", "r");
    if (ptr == NULL) {
        printf("Error\n");
        return;
    }
    char name[100];
    while (fscanf(ptr, "%s", name) != EOF) {
        // Check if the name is long enough
        if (x <= 0 || x > 100) {
            printf("Invalid length parameter for print_name\n");
            fclose(ptr);
            return;
        }

        // Print the first x characters of the name
        if(name[3]=='\0')
        {
        for (int i = 0; i < x && name[i] != '\0'; i++) {
            printf("%c", name[i]);
        }
        }
        printf("\n");
    }

    fclose(ptr);
}
//function to calculate the length
void length() {
    FILE *ptr;
    ptr = fopen("test.txt", "r");
    if (ptr == NULL) {
        printf("Error\n");
        return;
    }
    char name[100];
    int sum = 0;
    while (fscanf(ptr, "%s", name) != EOF) {
        for (int i = 0; name[i] != '\0'; i++) {
            sum += 1;
        }
    }
    printf("Sum of length of names is %d\n", sum);
    fclose(ptr);
}
//function to add names.
void adding() {
    FILE *ptr;
    ptr = fopen("test.txt", "a");
    if (ptr == NULL) {
        printf("Error\n");
        return;
    }
    char name[100];
    printf("Enter name: ");
    scanf("%s", name);

    fprintf(ptr, "%s", name);

    fclose(ptr);
}
//function to dispaly names.
void display() {
    FILE *ptr;
    ptr = fopen("test.txt", "r");
    if (ptr == NULL) {
        printf("Error\n");
        return;
    }
    char name[100];

    while (fscanf(ptr, "%s", name) != EOF) {
        for (int i = 0; i < 4 && name[i] != '\0'; ++i) {
            printf("%c", name[i]);
        }
        printf("\n");
    }

    fclose(ptr);
}
//main function.
int main(void) {
    int choice;
    printf("Enter 1 to add a name, 2 to display, 3 to get the length, 4 to print names: ");
    scanf("%d", &choice);

    if (choice == 1) {
        adding();
    } else if (choice == 2) {
        display();
    } else if (choice == 3) {
        length();
    } else if (choice == 4) {
        print_name(3); // You can change the parameter to the desired length
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}

