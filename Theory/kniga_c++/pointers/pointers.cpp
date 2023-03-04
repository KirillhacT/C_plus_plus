#include <iostream>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

void Swap2(int* const pX, int* const pY) {
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
}

string* VecConst(vector<string>* const pVec, int i) {
    return &((*pVec)[i]);
}


int main() {
        // Указатели
    //Инициализируем указатель типа int
    int* pScore = 0;
    int score = 1000;
    //* - оператор разыменованият
    //Присваиваем указателю адресс переменной
    pScore = &score;
    cout << &score << endl; //адрес переменной score
    cout << pScore << endl; //адрес, сохраненый в указателе
    cout << *pScore << endl; //значение, на которое направлен указатель
    *pScore = 10; //Изменяем значение переменной через указатель
    cout << score << endl;

    string hello = "Hello world!";
    string* const pHello = &hello; //адрес константного указателя нельзя менять
    cout << *pHello << endl;
    
    //Swap указателей
    int x = 10;
    int y = 20;
    cout << x << " " << y << endl;
    int* pX = &x;
    int* pY = &y;
    Swap2(pX, pY);
    cout << x << " " << y << endl;

    vector<string> invent;
    invent.push_back("Salam");
    invent.push_back("Aleukym");
    string* first = VecConst(&invent, 0);
    cout << *first << endl;

}