#include "stdafx.h" 
#include <iostream>
#include "Airline.h"
#include <string>

using namespace std;

Airline::Airline() //����������� ��� �����������
{
	this->point = point; // ��������� �� ����� ������� ������
	this->number = number;
	this->type = type;
	this->time = time;
	this->day = day;
}

Airline::Airline(string point, int number, string type, double time, string day) //����������� � �����������
{
	this->point = point;
	this->number = number;
	this->type = type;
	this->time = time;
	this->day = day;
}

Airline::Airline(const Airline &r) //����������� �����������
{
	this->point = r.point;
	this->number = r.number;
	this->type = r.type;
	this->time = r.time;
	this->day = r.day;
}

Airline::~Airline()  //���������� - ����������� ���������� ������������ ������
{

}


void Airline::setNumber(int NUMBER) { //�������� ������
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
	cout << "����� ���������� - " << Airline::point << endl;
	cout << "����� ����� - " << Airline::number << endl;
	cout << "��� �������� - " << Airline::type << endl;
	cout << "����� ������ - " << Airline::time << endl;
	cout << "���� ������ - " << Airline::day << endl;
}
string Airline::getPointTo(void) { //����������� ������
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