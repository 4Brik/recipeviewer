static int system();
static int fn(line);
static const char * fpm(line);
static const char * fi(line);
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char filename[100], cat[100],sed[100];
	strcpy(filename, "coqauvin");
	strcpy(cat, "cat -b ");
	strcpy(sed, "sed -n 1p ");
	strcat(cat, filename);
	strcat(sed, filename);
	int i = 1; //Ask for line
	system(cat);
	system(sed);
	//Read the line in C, find out the current measurement
	FILE *fp;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;

	fp = fopen(filename, "r"); // read mode
	if (fp == NULL)
	{
		perror("Error while opening the file.\n");
		exit(EXIT_FAILURE);
	}
	int j = 0;
	while ((read = getline(&line, &len, fp)) != -1) {
		j++;
		if(j==i){
		break;
	}
	}
	printf("%s", line);

	int numerals;
	char *prevm;
	char *ingredient;

	char *measurements[] = {
		"g",
		"kg",
		"oz",
		"lb",
		"ml",
		"l",
		"fl.oz",
		"cup",
		"tsp",
		"tbsp"
	};
	numerals = fn(line);
	//strcpy(prevm,fpm(line,measurements));
	printf("%s",prevm);
	//strcpy(ingredient,fi(line));

	//Extract numerals, measurement and ingredient
	//First remove words like "of, knob, slice"
	/*
	Measurements to search for:
	g,Kg
	Oz,Lb
	Ml,L
	Fl.Oz
	Cup
	Tsp, Tbsp
	*/
	fclose(fp);
	//Ask for new measurement
	//Convert
	//Display
	//Write?
	//Loop back to filepath
	return 0;
}
int fn(line){}
const char * fpm(haystack,needle){
	for(int i=0;i<10;i++){
		char *ret;
   		ret = strstr(haystack, needle[i]);
	}
	return ret;

}
const char * fi(line){
	char str[25]="Testing";
	return str;
}
