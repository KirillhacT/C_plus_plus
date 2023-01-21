#include<iostream>
#include<string>
#include<vector>

using namespace std;


struct Student //Класс студент
{
	string name;
	int age;
};

void get_struct() //Пример работы со строками
{
	Student a;
	//Student group[10];
	a.name = "Ваня";
	a.age = 13;
	cout << a.name << endl;
	string d;
	//cin >> d; //так считается только первая часть (до пробела)
	getline(cin, d); //считывает всю строчку
	cout << d << endl;
	cout << "Lenght = " << d.length() << endl;
}

int main()
{
    get_struct();
}