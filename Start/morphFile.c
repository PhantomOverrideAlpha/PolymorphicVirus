#include "start.h"

/*********************************************************************************
* Author: Laine Rumreich								       				 				   *
*																				 							*
*																				 							*
* Called from: main.c										 					 					*
*																				 							*
* Function to morph the file xichigan (.o)									            *
**********************************************************************************/

void morphFile() {
	FILE *fp;

	// Open the file MtoX.c to morph
	fp = fopen("xichigan","rb+");

	// Read in the file 1 character at a time and print the value changed by key
	if (fp == NULL){
		//printf("Cannot open file \n");
		exit(0); // Exit with no error to target
	}

	// Prepend assembly code

	// Append assembly code

	fclose(fp);
}
