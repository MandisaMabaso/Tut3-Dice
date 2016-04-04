#include"Dice.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int Dice::roll(){
	int LastRoll;
	LastRoll = (rand() % 6) + 1;
	return LastRoll;
}

float average(Dice myDice, int numberOfRolls){
	int i;
	float avg;
	int totalScore = 0;
	cout << "The generated numbers between 1 and 6 are:\n" << endl;
	for (i = 0; i < numberOfRolls; i++)
	{
		int temp = myDice.roll();
		cout << temp << endl;
		totalScore += temp;
	}
	avg = (float)totalScore / numberOfRolls;
	return avg;
}

float average(int integerArray[], int numberOfIntegersInArray)
{
	int i;
	float avg;
	int sum = 0;
	for (i = 0; i < numberOfIntegersInArray; i++)
	{
		sum += integerArray[i];
	}
	avg = (float)sum / numberOfIntegersInArray;
	return avg;
}