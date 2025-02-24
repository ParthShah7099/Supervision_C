#include<stdio.h>
#include<conio.h>

/*

Q1. File Handling
Develop a program that writes even and odd numbers from 50 to 70 into two
seperate files.

*/

void main()
{
	int i;
	FILE *fptr;
	clrscr();
	fptr = fopen("Even_file.txt","w");
	fprintf(fptr,"Even numbers from even_file.txt:\n");
	for(i=50; i<=70; i++)
	{
		if(i %2 == 0)
		{
			fprintf(fptr,"%d\n",i);
		}
	}
	fclose(fptr);

	fptr = fopen("Odd_file.txt","w");
	fprintf(fptr,"Odd numbers from even_file.txt:\n");
	for(i=50; i<=70; i++)
	{
		if(i %2 != 0)
		{
			fprintf(fptr,"%d\n",i);
		}
	}
	fclose(fptr);
	printf("Successfully File is created and data is inserted:).");
	getch();


}