#include <stdio.h>

#define MAX_STUDENTS 50
#define MAX_COURSES 3

void inputGrades(float grades[][MAX_COURSES], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        printf("Enter Math grade for student %d: ", i + 1);
        scanf("%f", &grades[i][0]);

        printf("Enter English grade for student %d: ", i + 1);
        scanf("%f", &grades[i][1]);

        printf("Enter Computer Science grade for student %d: ", i + 1);
        scanf("%f", &grades[i][2]);
    }
}

void findTopPerformers(float grades[][MAX_COURSES], int numStudents) {
    for (int i = 0; i < MAX_COURSES; ++i) {
        int topStudentIndex = 0;
        float topGrade = grades[0][i];

        for (int j = 1; j < numStudents; ++j) {
            if (grades[j][i] > topGrade) {
                topGrade = grades[j][i];
                topStudentIndex = j;
            }
        }

        printf("Top performer in %s: Student %d with a grade of %.2f\n",
               (i == 0) ? "Math" : (i == 1) ? "English" : "Computer Science",
               topStudentIndex + 1,
               topGrade);
    }
}

int main() {
    int numStudents;

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    if (numStudents <= 0 || numStudents > MAX_STUDENTS) {
        printf("Invalid number of students. Exiting program.\n");
        return 1;
    }

    float studentGrades[MAX_STUDENTS][MAX_COURSES];

    // Input grades for each student
    inputGrades(studentGrades, numStudents);

    // Find and display top performers in each subject
    findTopPerformers(studentGrades, numStudents);

    return 0;
}

