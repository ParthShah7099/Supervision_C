#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*

Q2. Structures and percentage calculation.
Develop a program to generate a mark sheet for a student. Enter the marks of
5 student in Chemistry, Mathematics, and Physics (each out of 100) using a
Structure having attributes: roll_no, name, chem_marks, maths_marks and phy_marks.
Display the percentage and total of each student.

*/

struct Student
{
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    int total;
    float percentage;
};

void main()
{
    struct Student students[5];
    int i;

    clrscr();

    for (i = 0; i < 5; i++)
    {
	printf("\nEnter details for Student %d:\n", i + 1);

	printf("Roll Number: ");
	scanf("%d", &students[i].roll_no);

 while (getchar() != '\n');

	printf("Name: ");
	scanf("%99[^\n]", students[i].name);

 while (getchar() != '\n');

	do
	{
	    printf("Chemistry Marks (out of 100): ");
	    scanf("%d", &students[i].chem_marks);
	    if (students[i].chem_marks < 0 || students[i].chem_marks > 100)
	    {
		printf("Invalid marks! Marks must be between 0 and 100.\n");
	    }
	} while (students[i].chem_marks < 0 || students[i].chem_marks > 100);

	do
	{
	    printf("Mathematics Marks (out of 100): ");

	    scanf("%d", &students[i].maths_marks);
	    if (students[i].maths_marks < 0 || students[i].maths_marks > 100)
	    {
		printf("Invalid marks! Marks must be between 0 and 100.\n");
	    }
	} while (students[i].maths_marks < 0 || students[i].maths_marks > 100);


	do
	{
	    printf("Physics Marks (out of 100): ");
	    scanf("%d", &students[i].phy_marks);
	    if (students[i].phy_marks < 0 || students[i].phy_marks > 100)
	    {
		printf("Invalid marks! Marks must be between 0 and 100.\n");
	    }
	} while (students[i].phy_marks < 0 || students[i].phy_marks > 100);


	students[i].total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
	students[i].percentage = (float)students[i].total / 3;
    }

    printf("\nMark Sheet:\n");
    for (i = 0; i < 5; i++)
    {
	printf("\nStudent %d:\n", i + 1);
	printf("Roll Number: %d\n", students[i].roll_no);
	printf("Name: %s\n", students[i].name);
	printf("Chemistry Marks: %d\n", students[i].chem_marks);
	printf("Mathematics Marks: %d\n", students[i].maths_marks);
	printf("Physics Marks: %d\n", students[i].phy_marks);
	printf("Total Marks: %d\n", students[i].total);
	printf("Percentage: %.2f%%\n", students[i].percentage);
    }

    getch();
}