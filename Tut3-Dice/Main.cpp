#include"Dice.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

float average(Dice myDice, int numberOfRolls);
float average(int[], int);

int main(){
	Dice MyDice;
	int  integerArray[] = { 9, 2, 13, 4, 5 , 8, 0, 33};
	int rollTrials;
	srand(time(0));
	cout << "Roll dice for how many trials?\n\n" << endl;
	cin >> rollTrials;

	cout << "The average is:" << average(MyDice, rollTrials) << "\n" << endl;
	cout << "The average is:" <<average(integerArray, 8) << "\n" << endl;
	system("pause");
	return 0;
}



