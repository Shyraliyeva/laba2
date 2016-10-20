// Main_mod.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Airline.h"
#include <iostream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[]){
	system ("chcp 1251");
	Airline a1, a2, a3, a4, a5;
	a1.setPointTo("Moscow");
	a1.setNumber(1057);
	a1.setType("Boing");
	a1.setTime(10.35);
	a1.setDay("Monday\n"); 

	a2.setPointTo("Paris");
	a2.setNumber(1034);
	a2.setType("Boing");
	a2.setTime(14.45);
	a2.setDay("Monday\n");

	a3.setPointTo("Sochi");
	a3.setNumber(1057);
	a3.setType("tu134");
	a3.setTime(17.17);
	a3.setDay("Friday\n");

	a4.setPointTo("Milan");
	a4.setNumber(2034);
	a4.setType("tu134");
	a4.setTime(18.29);
	a4.setDay("Monday\n");

	a5.setPointTo("Moscow");
	a5.setNumber(104);
	a5.setType("Mig29");
	a5.setTime(00.55);
	a5.setDay("Tuesday\n");


	cout << "Все рейсы понедельника" << endl;
	if (a1.getDay() == "Monday\n") a1.print();
	if (a2.getDay() == "Monday\n") a2.print();
	if (a3.getDay() == "Monday\n") a3.print();
	if (a4.getDay() == "Monday\n") a4.print();
	if (a5.getDay() == "Monday\n") a5.print();

	cout << "Все рейсы на Москву" << endl;
	if (a1.getPointTo() == "Moscow") a1.print();
	if (a2.getPointTo() == "Moscow") a2.print();
	if (a3.getPointTo() == "Moscow") a3.print();
	if (a4.getPointTo() == "Moscow") a4.print();
	if (a5.getPointTo() == "Moscow") a5.print();

	return 0;
}

