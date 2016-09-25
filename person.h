#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
public:
	void personInFo(char* name, int age, char* gender);
	void printfInFo();

private:
	char _name[40];
	int _age;
	char _gender[40];


};