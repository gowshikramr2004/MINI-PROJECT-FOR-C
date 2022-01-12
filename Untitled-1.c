#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
#define DAT 10000
FILE *ptr;


struct library
{
char bk_name[30];
char publisher[30];
int  price;
}l;

int main()
{


char pb_nm[30],bk_nm[30];
int i,j, keepcount;
i=j=keepcount = 0;

while(j!=5)
{
printf("\n\n########################## Library Management ##########################\n");
printf("\n1. Add book information\n");
printf("2. Display All Books Available \n");
printf("3. Display list of Publishers\n");
printf("4. Display size of all book records\n");
printf("5. Exit");
printf("\n\n########################## by GOWSHIK RAM R ##########################\n");
printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{
/* Add book */
case 1:


ptr=fopen("record1.txt","ab+");
	printf ("Enter book name\n = ");
	scanf ("%s",l.bk_name);
	printf ("Enter publisher name\n = ");
	scanf ("%s",l.publisher);
	printf ("Enter price\n = ");
	scanf ("%d",&l.price);
		
	fwrite (&l, sizeof(l), 1, ptr);
fclose(ptr);
printf("\n\n##########################           ##########################\n");
break;

case 2:

	printf("Display All Books Available\n");
ptr = fopen("record1.txt", "rb");
if(ptr==NULL){
      printf("\nFile not opened for reading");
}
else{
       while (fread (&l, sizeof(l), 1, ptr)==1)
	{
printf("\n\n##########################   RECORDS OF BOOK HERE  ##########################\n");
printf ("\n BOOK name = %s\n", l.bk_name);
	  
 
printf ("\n PUBLISHER NAME = %s\n", l.publisher);
	  
 
printf ("\n price = %d\n", l.price);
	  


}}

fclose(ptr);
printf("\n\n##########################                  ##########################\n");
	break;

case 3:

ptr = fopen("record1.txt", "rb");
if(ptr==NULL){
      printf("\nFile not opened for reading");
}
else{
       while (fread (&l, sizeof(l), 1, ptr)==1)
	{
printf("\n\n##########################    PUBLISHER RECORD         ##########################\n");
	printf ("\n PUBLISHER NAME = %s", l.publisher);
	  
printf("\n\n##########################                            ##########################\n");
}}
fclose(ptr);
printf("\n\n##########################           ##########################\n");
	break;

case 4:

ptr = fopen("record1.txt", "rb");
if(ptr==NULL){
      printf("\nFile not opened for reading");
}
else{
       while (fread (&l, sizeof(l), 1, ptr)==1)
	{
		printf("\n\n##########################       SIZE OF RECORD          ##########################\n");

	printf ("\n SIZE OF  = %d\\n", sizeof(l));
	break;
	  

}}
fclose(ptr);
printf("\n\n##########################                                      ##########################\n");
	break;


case 5:
printf("\nHOPE YOUR USER EXPERIENCE IS GOOD ");
	exit (0); 
}
}
return 0;
}