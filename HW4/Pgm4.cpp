/****************************************************************************
* Project 4: pgm4.cpp - <Program 4 will arrange from smallest to largest a group of numbers, and output: the sum, the smallest numbers, the largest number, the average, the median, and the standard deviation from the mean>
*
* Programmer: Luis Barquero
*
* Due Date: 09/21/2016
*
* EGRE 246 Fall 2016
*
* Pledge: I have neither given nor received unauthorized aid on the program.
*
* Description: information that you must provide
*
* Inputs: The user will enter a group of numbers
*
* Output: Program will arrange the numbers from smallest to largest, and output: their sum, smallest/largest value, average, median, and standard deviation from mean.
*
***************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int number_of_entries = 0; // Integer for the number of numbers the user will enter.
	float sum = 0; // float that will add up all the positive floats the user enters.
	float sum_neg = 0; // this will equal the negative sum of all negative numbers, or -(sum).
	float average = 0; // float that will calculate the average for the group of numbers.
	float smallest_value = 0; // float that will be used to locate the smallest value in the group of numbers.
	float largest_value = 0; // float that will be used to locate the largest value in the group of numbers.
	float ascending_order = 0; // float used in the process of arranging the numbers from smallest to largest. 
	float positive = 0; // this will be equal to the positive sum.
	float negative = 0; // this will be equal to the negative (-sum).
	float sum2 = 0; // float that will add up all the negative numbers.
	float sum3 = 0; // float that will be used in findind the total sum of (numbers - mean)^2 for every number, in the process of finding the standard deviation.
	float total = 0; // float that will take the sum of all positive and negative numbers and add them together(if such a case exists). 
	float median = 0; // If the user enters an odd number, this will determine which position the median is in.
	float median1 = 0; // If the user enters an even set of numbers, we have to find the two most middle terms, and this is for the first middle term.
	float median2 = 0; // float that represents the second middle term, or (median1 + 1).
	float median3 = 0; // this adds the median1 and median2, and divides their sum by 2 to find the median if the user enters an even set of numbers.
	float stnd_dev = 0; //after finding the average, this float will subract every number in the group of numbers from the average, and will square the result.
	float stnd_dev2 = 0; // this will divide sum3 by the number of numbers in the group - 1.
	float stnd_dev3 = 0; // finally, this will take the square root of stnd_dev2 to finally acquire the standard deviation for the group of numbers.
	cout << "Program 4 to determine staristics for floating point numbers" << endl; 
	cout << "Enter the number > 0 of floats you wish to enter:" << endl; // Prompts the user to enter the number of floats for to be used in the program.
	cin >> number_of_entries; // user enters the number of floats.
	vector<float> numbers(number_of_entries); //program creates a vector type float of size number_of_entries.
	while (number_of_entries <= 0) // if the user enters a zero, the program will ask the user to enter another number greater than 0.
	{
		cout << "Invalid entry. Enter the number > 0 of floats you wish to enter: " << endl; 
		cin >> number_of_entries;
	}
	
	
	cout << "Enter the " << number_of_entries << " numbers: " << endl; //prompts the user to fill the vector with number of floats the user entered previously.
	
	for (int i = 0; i < number_of_entries; i = i + 1) // for loop that will allow the user to enter the amount of floats corresponding to the number entered previously.
	{
		cin >> numbers[i]; //fills the vector according to size.
	}
	
	sort(numbers.begin(), numbers.end()); //Using a vector function to sort the numbers from smallest to largest.
	cout << "\n" << number_of_entries << " floating point numbers entered." << endl;
	for (int o = 0; o < number_of_entries; o = o + 1) // this will output the numbers from smallest to largest, and add a + if the number is positive and a - if the number is negative as it outputs the number.
	{
		if(numbers[o] >0 ) // case for if the number is positive.
		{
			cout << "+"<< fixed << setprecision(3) << numbers[o] << endl; // sets the number of decimal places to 3 and adds + before the number.
		}
		if(numbers[o] < 0) //case for if the number is negative.
		{
			cout << fixed << setprecision(3) << numbers[0] << endl; // sets the number of decimal places to 3 and adds a - before the number.
		}
	}	
	
	cout << number_of_entries << " numbers stored in vector" << endl;
	cout << "\nData set contains " << number_of_entries << " values" << endl;
	
	for (int j = 0; j < number_of_entries; j = j + 1) // for loop that calculates the sum of the all the numbers in the vector.
	{
		if(numbers[j] > 0) // case for if the numbers are positive.
		{
			sum+= numbers[j]; //sums all the numbers.
		}
		positive = sum; // then sets the float positive to the sum of all positive numbers.
		
		if (numbers[j] < 0) // case for if the numbers are negative.
		{
			sum2-= numbers[j]; // similar to sum, it will negatively sum all the numbers (by summing backwards).
			sum_neg = -(sum2); // then we set sum_neg to represent the sum * -1, since the compiler outputs the sum as positive.
		}
		negative = sum_neg; // similar to positive, negative will be equal to the sum of all the positive numbers.
		total = positive + negative; // float total will then add positive and negative to reach a final sum of the numbers in the vector.
	}
	
	if(total > 0) // case for if the total is positive.
	{
		cout << "  +" << fixed << setprecision(3) << total << " sum of all values" << endl; // sets decimal place to 3, and adds + before the total to denote it.
	}
	else // case for if total is negative.
	{
		cout << "  " << fixed << setprecision(3) << total << " sum of all values" << endl; // sets decimal place to 3, and adds a - before the total to denote it.
	}
	
	smallest_value= *min_element(numbers.begin(), numbers.end()); // vector function that will find the smallest number with the vector.
	if(smallest_value > 0) //case for if the smallest number is negative.
	{
		cout << "  +" << fixed << setprecision(3) << smallest_value << "  smallest value" << endl; // sets decimal place to 3 and adds a + before the number.
	}
	else //case for if the total is negative.
	{
		cout << "  " << fixed << setprecision(3) << smallest_value << "  smallest value" << endl; // sets decimal place to 3 and adds a - before the number.
	}
	
	largest_value = *max_element(numbers.begin(), numbers.end()); // vector function to find the largest number within the vector.
	if(largest_value > 0) // case for if the largest number is positive.
	{
		cout << "  +" << fixed << setprecision(3) << largest_value << "  largest value" << endl; //sets decimal place to 3 and adds a + before number to denote it.
	}
	else // case for if the the largest number is negative.
	{
		cout << "  " << fixed << setprecision(3) << largest_value << "  largest value" << endl; // sets decimal place to 3 and adds a - before number to denote it.
	}
	
	if(number_of_entries%2 != 0) // case for finding the median if the number of entries is odd.
	{
		median = ((number_of_entries)/2); // this is to find the middle position. since the number_of_entries is +, when you divide it by 2, it will give an integer that is the exact middle position.
		if(median > 0) // case for if the median is positive.
		{
			cout << "  +" << fixed << setprecision(3) << numbers[median] << "  median" << endl; //the median will then be in the position the float median is, within the vector. sets decimal place to 3, and adds a + before number.
		}
		else // case for if the median is negative.
		{
			cout << "  " << fixed << setprecision(3) << numbers[median] << "  median" << endl; // median is in the position float median is, within the vector. sets decimal place to 3, and adds a - before number.
		}
		
	}
	
	if(number_of_entries%2 == 0) //case for finding the median if the number of entries is even.
	{
		median1 = numbers[(number_of_entries/2)-1]; // this finds the first middle position.
		median2 = numbers[(number_of_entries/2)]; // this finds the second middle position.
		median3 = (median1 + median2)/2; // this will add the two numbers found in the middle positions and divide it by two.
		if (median3 > 0) // case for if the median is positive.
		{
			cout << "  +" << fixed << setprecision(3) << median3 << "  median" << endl; //outputs the average of the two middlemost numbers with decimal place set to 3, and a + before number.
		}
		else // case for if the median is negative.
		{
			cout << "  " << fixed << setprecision(3) << median3 << "  median" << endl; //sets the decimal to place to 3 and outputs the median, adding a - before the number.
		}
		
	}
	
	average = total/number_of_entries; // this will calculate the average by dividing total by the number_of_entries.
	if (average > 0) // case for if average is positive.
	{
		cout << "  +" << fixed << setprecision(3) << average << "  average" << endl; // sets decimal place to 3 and adds a + before output.
	}
	else // case for if average is negative.
	{
		cout << "  " << fixed << setprecision(3) << average << "  average" << endl; // sets decimal place to 3 and adds a - before output.
	}
	
	for (int d = 0; d < number_of_entries ; d = d + 1) // for loop to find the standard deviation.
	{
		stnd_dev = (numbers[d] - average) * (numbers[d] - average); //stnd_dev is set to subtract the mean from every number in the vector and square the result.
		sum3+= stnd_dev; // sum3 will add all the results acquired from stnd_dev.
		stnd_dev2 = (sum3)/(number_of_entries - 1); // stnd_dev2 will now divide the sum by the number_of_entries - 1.
		stnd_dev3 = sqrt(stnd_dev2); // stnd_dev3 will then square root the result acquired from stnd_dev3.
	}
	if (stnd_dev3 > 0) // case for if the standard deviation is positive.
	{
		cout << "  +" << fixed << setprecision(3) << stnd_dev3 << "  standard deviation from the mean" << endl; // sets decimal place to 3 and adds a + before number.
	}
	else // case for if standard deviation is negative. 
	{
		cout << "  " <<  fixed << setprecision(3) << stnd_dev3 << "  standard deviation from the mean" << endl; // sets decimal place to 3 and adds a - before number.
	}
	
}