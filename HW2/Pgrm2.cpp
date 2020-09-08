/****************************************************************************
 * Project number: 2
 *
 * Programmer: Luis Barquero
 *
 * Due Date: 09/23/2016
 *
 * EGRE 246 Fall 2016
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Program takes input file and outputs a file name with "_out". Program is written in C++
 *
 * Inputs: File name		
 *
 * Output: Output File name
 *
 ***************************************************************************/
 
#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;


int main(void)
{
	char *input_file = NULL; // Character pointer for the input file.
	char *output_file = NULL; // Character pointer for the ouput file.
	char *last_dot = NULL; // Character pointer that will be used to find the last occurrence of a dot in the string.
	char *binary_zero = NULL; // Character pointer that will be used to find the binary zero in the string.
	input_file = new char; // Process that will dynamically allocate the required memory space for the input file.
	output_file = input_file; // By setting the input file = outputfile, we can modify the output file, but keep the input file.
	int dot_position = 0; // Integer that will find the position of the last dot in the string.
	int zero_position = 0; // Integer that fill find the position of the binary zero in the string.
	int difference = 0; // Integer that will be used in the shifting of the output file. 

	
	cout << "Enter file name: " << endl; // Asks the user to enter a file name.
	cin >> output_file; // Allows the user to enter a file name.
	
	last_dot = strrchr(output_file, '.'); // Process that will find the dot last occurence.
	binary_zero = strrchr(output_file, '\0'); // Process that will find the last member of the array, of binary zero, "\0".
	dot_position = last_dot-output_file+1; // This will find the position of the last dot.
	zero_position = binary_zero-output_file+1; // This will find the position of the binary zero.
	difference = zero_position - dot_position; // This will get the difference between the binary zero and the last dot, which will be used in the shifting of the output of the string.
	
	
	if(((dot_position != zero_position-1))&&(last_dot !=0)) //Loop condition that will go through the loop when the position of the last dot != position of binary zero - 1. and the occurrence of the last dot is not = 0.
	{
		cout << "\nOutput file name: " << endl;
		printf("%.*s_out",dot_position-1,output_file); //By using printf("%.*s_out"), you can set how many letters out of the output file you want displayed. So in this case, it will output however many letters before the dot, subtract one position, and add the "_out" part.
		printf("%.*s\n",difference,output_file+dot_position-1); //After the "_out" has been added, we use the same printf function to output everything after the "_out" part has been added. We then tell it to add the extension part of the program.
	}
	
	else if(dot_position == zero_position-1) //Loop condition that will go through the string when the position of the last dot = position of binary zero - 1.
	{
		cout << "\nOutput file name: " << endl; 
		printf("%.*s_out",dot_position-1,output_file); //By using printf("%.*s_out"), you can set how many letters out of the output file you want displayed. So in this case, it will output however many letters before the dot, subtract one position, and add the "_out" part.
		printf("%.*s\n",difference,output_file+dot_position); //After the "_out" has been added, we use the same printf function to output everything after the "_out" part has been added. But now, since the output only has a dot, it will delete the dot.
	}
	
	else //If the last dot is a zero, meaning there is not zero, then the program will just add "_out" to the output file the user enters.
		cout << "\nOutputfile name: " <<  output_file << "_out" << endl; // Outputs the file and the "_out" part as long as the string contains no dot.
}
	

 