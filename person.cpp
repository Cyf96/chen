#include"person.h"
void Person::personInFo(char *name, int age, char *gender)
{
	strcpy_s(_name, name);
	_age = age;
	strcpy_s(_gender, gender);
}
void Person::printfInFo()
{
	cout << "name is :" << _name << endl;
	cout << "age is :" << _age << endl;
	cout << "gender is" << _gender << endl;
}

void funtest()
{
	Person p;
	p.personInFo("chen", 18," nan");
	p.printfInFo();


}
int main()
{
	funtest();
	return 0;
}