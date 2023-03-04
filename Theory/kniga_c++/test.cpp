#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <ctime>
#include<cstdlib>

//Указываем функцию и ее перегрузки
void triangle(int bruhe);
void Swap(int& x, int& y);
using namespace std;

//функции
// inline делает функцию предназначенную для подстановки
inline int example(int num) { 
    return (num * 5);
}
void test(string str="str") {
    cout << "My name is " << str << "\n";
}
void triangle(string bruhe) {
    cout << "String is " << bruhe << endl;
} 
void triangle(int bruhe) {
    cout << "Number is " << bruhe << endl;
}


void Swap(int& x, int& y) {
    auto temp = x;
    x = y;
    y = temp;
}


void print_vector(const vector<int>& vec) {
    for (vector<int>::const_iterator iter = vec.begin();
        iter < vec.end(); iter++)
    {
        cout << *iter << endl;
    }
}
int& refTo(vector<int>& vec, int i) {
    return vec[i];
}


int main()
{
    //Константы и for
    // const int N = 500;
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cout << i << " "; 
    //         cout << j << "\n"; 
    //     }
    // }


    // Строки
    // string word1 = "Hello";
    // string word2("World");
    // string summi = word1 + " " + word2;
    // cout << "Current string is: "<< summi << "\n";
    // cout << "Size string is: " << summi.size() << endl;
    // cout << "The first element is: " << summi[0] << endl;
    // int isFind_llo = summi.find("sllo");
    // if (isFind_llo == string::npos) //string::npos - специальная константа, если find() не нашел подстроку
    //     cout << "NO" << '\n';
    // else
    //     cout << isFind_llo << "\n";


    //Массивы
    // int mas[] = {1, 2, 3, 4};
    // for (auto i: mas)
    // {
    //     cout << i << endl;
    // }


    //vector и итераторы
    // vector<string> inventory;
    // inventory.push_back("sword");
    // inventory.push_back("shield");
    // inventory.push_back("armor");
    // //итератор - указывает на конкретный элемент в последовательности
    // vector<string>::iterator MyIterator;
    // //константный итератор - итератор, который не не может изменять элементы, на которые ссылается
    // vector<string>::const_iterator iter;    
    // for (iter = inventory.begin(); iter != inventory.end(); iter++)
    // //begin() - указывает на первый элемент в последовательности
    // //end() - указывает на следующий после последнего элемента в последовательности
    // {
    //     //•Здесь упоминается элемент, на который указывает итератор, а не сам итератор>).
    //     cout << *iter << endl;
    // }
    // MyIterator = inventory.begin();
    // *MyIterator = "battleaxe";
    // cout << *MyIterator << " ";
    // // cout << (*MyIterator).size() << endl;
    // // Альтернативная запись (удобна для читателя)
    // cout << MyIterator->size() << endl;
    // //Добавление элемента в любую часть последовательности (в данном случае в начало)
    // inventory.insert(inventory.begin(), "crossbow");
    // //Удаление произвольного элемента в 
    // inventory.erase((inventory.begin() + 2));


    //Сортировка вектора, поиск, рандом
    // vector<int> mas;
    // mas.push_back(1);
    // mas.push_back(2);
    // mas.push_back(3);
    // vector<int>::const_iterator iter;
    // int score = 2;
    // iter = find(mas.begin(), mas.end(), score);
    // //если элемент будет не найдет, то он примет последнее значение
    // if (iter != mas.end())
    // {
    //     cout << "Score is found" << endl;
    // }
    // //посев генератора случайных чисел
    // srand(static_cast<unsigned int>(time(0)));
    // //сортировка массива
    // sort(mas.begin(), mas.end());

    //Функции
    //параметр в test() задан по умолчанию
    // test();
    // string l1 = "Salam";
    // int l2 = 5;
    // //пример перегрузки функции triangle
    // triangle(l1);
    // triangle(l2);
    // cout << example(25) << endl;

    //Ссылки
    // int myScore = 1000;
    // int& rMikesScore = myScore; //создаем ссылку
    // cout << rMikesScore << endl;
    // myScore += 100;
    // cout << rMikesScore << endl;

    // int x, y;
    // x = 10;
    // y = 20;
    // cout << x << " " << y << endl;
    // Swap(x, y);
    // cout << x << " " << y << "\n\n";

    // vector<int> Params = {1, 2, 3};
    // // print_vector(Params);
    // int& ssg = refTo(Params, 0);
    // cout << ssg << endl;
    // Params[0] = 23;
    //  cout << ssg << endl;
}

