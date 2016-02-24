#include <iostream>
#include <windows.h>
#include <string>
#include <stdio.h>
#include <conio.h>
using namespace std;

int lockjew ()
{
	cout << "That was TERRRRRRIBLEEEE, I'm NEVER Coming here AGAAAAIIINNNN!!!!\n\n";
	return 0;
}

int doge ()
{
	char ans;
	cout << "Give me the CIGARETTE!!!\n\n";
	cout << "Press 'B' to give him a Beet , 'C' to give Pumpkin the Cigarette, 'M' to give him Moonshine, or 'F' to give him Fish Sticks.\n";
	cin >> ans;
	if (ans !='C') {

	do
	{
	cout << "NO!, I Dont Want That!\n\n" ;
	cout << "Give me the CIGARHETTTTTTTEEEE!!!!!!\n\n";
	cin >> ans;
	} while ((ans !='C')&&(ans !='c'));
	}

	cout << "*Deep Inhale*	*Long Exhale*\n\n";
		lockjew ();
	return 0;
}

int pumpkin ()
{
	char ans;
	cout << "Give me the HOT DOGEEEEEEEEEE!!!!!!!!\n\n";
	cout << "Press 'L' to give Pumpkin a Lozenge, 'F' to give him FUSH, 'H' to give him the Hot Dog, or 'J' to give him Jelly Beans .\n";
	cin >> ans;
	if (ans !='H') {

	do
	{
	cout << "NO!, I Dont Want That!\n\n" ;
	cout << "Give me the Hott Doge!!!!\n\n";
	cin >> ans;
	} while ((ans !='H')&&(ans !='h'));
	}

	cout << "*Pumpkin then proceeds to put the doge in his mouth.*\n\n";
		doge ();
	return 0;
}

int duke ()
{
	char ans;
	cout << "Give me the BUTTERRRRR!!!\n\n";
	cout << "Press 'Y' to give him a Yam, 'B' to give Pumpkin the Butter, 'M' to give him Mcdonalds, or 'L' to give him Lemonade .\n";
	cin >> ans;
	if (ans !='B') {

	do
	{
	cout << "NO!, I Dont Want That!\n\n" ;
	cout << "Give me the BUUUUUTTTTEEEEERRR!!!!\n\n";
	cin >> ans;
	} while ((ans !='B')&&(ans !='b'));
	}

	cout << "*Wet Lip Smacking*\n\n";
		pumpkin ();
	return 0;
}

int pleb ()
{
	char ans;
	cout << "Give... Me... THAAAAAAAAA.. PIZZZZZAAAAAA!!!!\n\n";
	cout << "Press 'C' to give Pumpkin the Cigarette, 'B' to give him a Bologna, 'J' to give him Juice, or 'P' to give him PIZZA.\n";
	cin >> ans;
	if (ans !='P') {

	do
	{
	cout << "NO!, I Dont Want That!\n\n" ;
	cout << "Give... Me... THAAAAAAAAA.. PIZZZZZAAAAAA!!!!\n\n";
	cin >> ans;
	} while ((ans !='P')&&(ans !='p'));
	}

	cout << "Nom Nom Nom Nom Nom!\n\n";
		duke ();
	return 0;
}


int main ()
{
	char ans;
	cout << "Let's Go to the Restaurant. I am Veeeery Hungry!!\n\n";
	cout << "Give me the French Friiiiieeees!!!\n\n";
	cout << "Press 'F' to give Pumpkin French Fries, 'B' to give him a Banana, 'H' to give him a Hot Dog, or 'C' to give him Cheeeeeese.\n";
	cin >> ans;
	if(ans !='F') {

	do
	{

	cout << "NO!, I Dont Want That!\n\n" ;
	cout << "Give me the French Friiiiieeees!!!\n\n";	
		cin >> ans;
	} while ((ans !='F')&&(ans !='f'));
	}

	cout << "*Wet Lip Smacking Sound*\n\n";
		pleb ();
	return 0;
}
