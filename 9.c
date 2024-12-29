// Write a program (WAP) that will find the grade of N students. For each student, it will take the marks of his/her the attendance (on 5 marks), assignment (on 10 marks), class test (on 15 marks), midterm (on 50 marks), term final (on 100 marks). Then based on the tables shown below, the program will output his grade.

#include <stdio.h>

int main(){
    int n;
    char grade, sign;
    float attendance, assignment, classtest, midterm, finalexam, total;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%f %f %f %f %f", &attendance, &assignment, &classtest, &midterm, &finalexam);
        total = attendance + assignment + classtest + (midterm / 50) * 30 + (finalexam / 100) * 40;
        if (total >= 90)
        {
            grade = 'A';
            sign = ' ';
        }
        else if (total >= 86)
        {
            grade = 'A';
            sign = '-';
        }
        else if (total >= 82)
        {
            grade = 'B';
            sign = '+';
        }
        else if (total >= 78)
        {
            grade = 'B';
            sign = ' ';
        }
        else if (total >= 74)
        {
            grade = 'B';
            sign = '-';
        }
        else if (total >= 70)
        {
            grade = 'C';
            sign = '+';
        }
        else if (total >= 66)
        {
            grade = 'C';
            sign = ' ';
        }
        else if (total >= 62)
        {
            grade = 'C';
            sign = '-';
        }
        else if (total >= 58)
        {
            grade = 'D';
            sign = '+';
        }
        else if (total >= 55)
        {
            grade = 'D';
            sign = ' ';
        }
        else
        {
            grade = 'F';
            sign = ' ';
        }
        printf("Student %d: %c%c\n", i, grade, sign);
    }
    
    return 0;
}