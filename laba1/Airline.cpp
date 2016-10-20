#include "stdafx.h" 
#include <iostream>
#include "Airline.h"
#include <string>

using namespace std;

Airline::Airline() //конструктор без панраметров
{
	this->point = point; // указатель на адрес объекта класса
	this->number = number;
	this->type = type;
	this->time = time;
	this->day = day;
}

Airline::Airline(string point, int number, string type, double time, string day) //конструктор с параметрами
{
	this->point = point;
	this->number = number;
	this->type = type;
	this->time = time;
	this->day = day;
}

Airline::Airline(const Airline &r) //конструктор копирования
{
	this->point = r.point;
	this->number = r.number;
	this->type = r.type;
	this->time = r.time;
	this->day = r.day;
}

Airline::~Airline()  //деструктор - освобождние выделенной динамической памяти
{

}


void Airline::setNumber(int NUMBER) { //принятие данных
	number = NUMBER;
}
void Airline::setPointTo(string POINTTO) {
	point = POINTTO;
}
void Airline::setType(string TYPE) {
	type = TYPE;
}
void Airline::setTime(double TIME) {
	time = TIME;
}
void Airline::setDay(string DAY) {
	day = DAY;
}


void Airline::print() {
	cout << "Пункт назначения - " << Airline::point << endl;
	cout << "Номер рейса - " << Airline::number << endl;
	cout << "Тип самолета - " << Airline::type << endl;
	cout << "Время вылета - " << Airline::time << endl;
	cout << "День недели - " << Airline::day << endl;
}
string Airline::getPointTo(void) { //отображение данных
	return point;
}
int Airline::getNumber(void) {
	return number;
}
string Airline::getType(void) {
	return type;
}
double Airline::getTime(void) {
	return time;
}
string Airline::getDay(void) {
	return day;
}