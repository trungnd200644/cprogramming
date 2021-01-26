#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct student {
    char id[6];
    char name[31];
    float grade;
    char classment;
}student;

void printStudent(student s) {
    printf("%s | %s | %1.1f | %c\n", s.id, s.name, s.grade, s.classment);
}

int main() {
    int i, j, n;
    student std[MAX], tmp;
    printf("Enter the number of student (>0):");
    scanf("%d", & n);
    for (i = 0; i < n; i++) {
        printf("ID:");
        scanf("%s", std[i].id);
        printf("name:");
        scanf(" %[^\n]", std[i].name);
        printf("Grade:");
        scanf("%f", & std[i].grade);
        if (std[i].grade >= 9 && std[i].grade <= 10)

            std[i].classment = 'A';

        else if (std[i].grade >= 8 && std[i].grade < 9)

            std[i].classment = 'B';

        else if (std[i].grade >= 6.5 && std[i].grade < 8)

            std[i].classment = 'C';

        else std[i].classment = 'D';
    }

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)

            if (std[i].grade < std[j].grade) {

                tmp = std[i];
                std[i] = std[j];
                std[j] = tmp;

            }
    printf("ID | Name | Grade | Classment\n");
    for (i = 0; i < n; i++) printStudent(std[i]);
    return 0;

}