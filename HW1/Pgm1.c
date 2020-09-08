/****************************************************************************
 * Project number: 1
 *
 * Programmer: Luis Barquero
 *
 * Due Date: 09/16/2016
 *
 * EGRE 246 Fall 2016
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Program takes input file and outputs a file name with "_out"
 *
 * Inputs: File name		
 *
 * Output: Output File name
 *
 ***************************************************************************/

// the descriptive comment block should use C style comments
// other comments can use either C or C++ stypes comments like this comment


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *input_file = NULL; // character for the string the user will enter.
	char *output_file = NULL; // character for the string that will be outputed.
	char *dot = NULL; // character to find the last dot.
	char *zero = NULL; // character to find the last zero
	char *copy = NULL; // character that will copy part of the original inout file.
	char *swap = NULL; // character that will swap
	char last_dot = '.'; // character set for the last dot.
	char end = '\0'; // character set for the last binary zero.
	int i; // iterative integer. 
	int dot_shifted; // this will find the last dot on the user's input file and subtract 4 spaces to input the "_out" part of the output file.
	int dot_shift; // location where the last dot is from the user's input file.
	int binary_zero; // location where the last binary zero from the user's input file.
	int differnce_binary_to_last_dot; // differenc in the location of the last binary zero to the last dot.
	int size = 65; // set the size to 65. 
	input_file = (char *) malloc(size *sizeof(char)); // dynamically allocated fill the size of the array with the size of the string of the input file.
	copy = (char *) malloc(size *sizeof(char)); // copy will also be dynamically allocated.
    printf("Enter a filename:\n"); // prompts the user to enter an input file. 
    scanf("%s", input_file); // scans the user's input and places in the character input_file.
	output_file = input_file; // we set the output_file = the input_file so we can perform the required steps.
	
	dot = strrchr(output_file, last_dot); // procedure that finds the last dot in the user's input.
	zero = strrchr(output_file, end); // procedure that finds the binary_zero in the user's input.
	dot_shift = dot-output_file+1; // location of the last dot.
	dot_shifted = dot_shift - 4; // the location of the last dot subtracted four spaces to input "_out".
	binary_zero = zero-output_file+1; // location of the binary zero.
	differnce_binary_to_last_dot = binary_zero - dot_shift; // procedure that will find the difference between the last dot and the binary zero.
	
	if((output_file) != dot) 
	{
		printf("%s%s%s", "Output file name: ", output_file, "_out"); // will output the user's file with the "_out" as long as there is no extension/dot.
	}
	
	if(strrchr(output_file, last_dot)) 
	{
		
	    swap = strcpy(copy, dot); // copy the extension part of the user's input file.
	   printf("\n%s%s%s%s", "Output File: " , output_file, "_out", copy); // output the user's input file with the "_out".
		
		
	}
	
}
	

  