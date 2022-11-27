static int system();
#include <stdio.h>
#include <string.h>

int main(){
	char filename[100];
	printf("Enter file path: ");
	scanf("%s",filename);
	char cat[] = "cat -b ";
	strcat(cat,filename);
	system(cat);
	
	printf( "Enter a line number: ");
	int i;
	
	scanf("%d", &i);
	char greetings[] = "sed -n 1p coqauvin";
	system(greetings);
	//Read the line in C, find out the current measurement 
	//Ask for new measurement
	//Convert
	//Display
	//Write?
	//Loop back to filepath
	return 0;
}
