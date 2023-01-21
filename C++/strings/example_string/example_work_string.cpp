#include <iostream>
#include <vector>
#include <string>


using namespace std;


struct Person
{
	string name;
	int age;
};

// ostream& operator << (ostream out, Person& one)
// {
// 	out << "[" << one.name << "]";
// 	return out;
// }



void get_max_student()
{
	int N;
	cin >> N;
	vector<Person> crowd;

	for (int i = 0; i < N; i++)
	{
		Person p;
		cin >> p.name >> p.age;
		crowd.push_back(p); //добавить в конец
	}
	int max_age = -1;
	for (int i = 0; i < N; i++)
	{
		if (crowd[i].age > max_age)
		{
			max_age = crowd[i].age;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (crowd[i].age == max_age)
		{
		    cout << "[" << crowd[i].name << "]" << endl;
		}
	}
}
int main()
{
	get_max_student();
}