//D'Avino Dario 10/12/2025
//Versione 1.0.0
#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

float conversione (int gradi_c);
int main () 
{
for (int i=0; i<=20; i++)
	{
		cout <<i<<" gradi celsius sono equivalenti a : "<< conversione (i) <<" gradi fareneith"<< endl;
	}
}
float conversione (int gradi_c)
{
	const int valore1=32;
	const int valore2=9/5;
	return valore1+(valore2)*gradi_c;
}
