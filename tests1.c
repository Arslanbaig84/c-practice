#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int *scores;
}
student;

int tests;
int student_no;

void sort_ascending(student *students, int n, int t);
float *averaging(student *students, int n, int t);

int main(void)
{
    printf("How many students are in class.\n");
    scanf("%i", &student_no);

    printf("How many tests were taken by each student.\n");
    scanf("%i", &tests);

    student *students = malloc(student_no * sizeof(student));
    for (int i = 0; i < student_no; i++)
    {
        printf("Type in Name of Student %i: ", i + 1);
        scanf("%s", students[i].name);

        students[i].scores = malloc(student_no * tests * sizeof(int));

        for (int j = 0; j < tests; j++)
        {
            printf("Type score of student %i for test %i: ", i + 1, j + 1);
            scanf("%i", &students[i].scores[j]);
        }
    }

    sort_ascending(students, student_no, tests);
    float *averages = averaging(students, student_no, tests);

    for (int i = 0; i < student_no; i++)
    {
        printf("%s\n", students[i].name);
        for (int j = 0; j < tests;  j++)
        {
            printf("%i, ", students[i].scores[j]);
        }
        printf("\n");
        printf("Average: %.2f", averages[i]);
        printf("\n");
    }

    for (int i = 0; i < student_no; i++)
    {
        free(students[i].scores);
    }
    free(averages);
}

void sort_ascending(student *students, int n, int t)
{
    for (int k = 0 ; k < n; k++)
    {
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < t - 1; j++)
            {
                if (students[k].scores[j] > students[k].scores[j + 1])
                {
                    int tmp = students[k].scores[j];
                    students[k].scores[j] = students[k].scores[j + 1];
                    students[k].scores[j + 1] = tmp;
                }
            }
        }
    }
}

float *averaging(student *students, int n, int t)
{
    float *averages = malloc(n * sizeof(int));
    int *total = malloc(n * sizeof(int));

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < t; i++)
        {
            total[k] += students[k].scores[i];
        }
        averages[k] = (float)total[k] / t;
    }

    free(total);
    return averages;
}