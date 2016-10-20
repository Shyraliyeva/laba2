#pragma once

#include "string.h"
#include "stdafx.h"
#include <string>

using namespace std;

class Airline
{
	string point;
	int number;
	string type;
	double time;
	string day;


public:
	Airline();
	Airline(const Airline &);
	Airline(string, int, string, double, string);
	void setPointTo(string);
    void setNumber(int);
	void setType(string);
	void setTime(double);
	void setDay(string); //метод - установить день
	~Airline(void);
	void print();
	string getPointTo(void);
	int getNumber(void); //метод - получить номер
	string getType(void);
	double getTime(void);
	string getDay(void);
};