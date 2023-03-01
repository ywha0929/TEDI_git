#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[100];
    char gender;
    int codingScore;
    int koreanScore;
    int mathScore;
}student;

void printStudentInfo(struct student Student);

int main(void)
{
    int numStudent = 3;
    student Student[3];
    strcpy((Student[0].name), "Yeong Woo Ha");
    Student[0].gender='F';
    Student[0].codingScore = 100;
    Student[0].koreanScore = 95;
    Student[0].mathScore = 80;

    strcpy((Student[1].name), "Jung Min Cho");
    Student[1].gender='M';
    Student[1].codingScore = 100;
    Student[1].koreanScore = 100;
    Student[1].mathScore = 100;
    
    strcpy((Student[2].name), "Ji Hoon Park");
    Student[2].gender='M';
    Student[2].codingScore = 100;
    Student[2].koreanScore = 100;
    Student[2].mathScore = 100;

    for(int i = 0; i< numStudent; i++)
    {
        printStudentInfo(Student[i]);
    }
    // printStudentInfo(Student);
    return 0;
}

void printStudentInfo(student Student)
{
    printf("Name : %s\n",Student.name);
    printf("Gender : %c\n",Student.gender);
    printf("codingScore : %d\n",Student.codingScore);
    printf("koreanScore : %d\n",Student.koreanScore);
    printf("mathScore : %d\n\n",Student.mathScore);
    return;
}