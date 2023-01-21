#include<iostream>
#include<string>
#include<vector>

using namespace std;

void is_valid_braces_sequence_not_stack() 
{
    string s;
    cout << "Enter braces sequence: ";
    cin >> s;
    int n = 0;
    for (auto symbol: s) { //Конструкция по пробеганию по итерируемому объекту
        // cout << symbol << " ";
        if (symbol == '(') 
        {
            n += 1;
        }
        else if (symbol == ')')
        {
            n -= 1;
            if (n < 0) break;
        }
        
    }
    if (n == 0)
        cout << "It's correct!\n";
    else
        cout << "Is's wrong!!!\n";
}

bool is_valid_braces_sequence_for_stack()
{
    string s = "";
    vector <char> S;
    for (auto symbol: s)
    {
        if (symbol == '(' || symbol == '[' || symbol == '{') {
            S.push_back(symbol);
        }
        else {
            if (S.size() == 0)
            {
                return false;
            }
            char c = S[S.size() - 1];
            S.pop_back();
            if (((symbol == ')') && (c != '(')) || ((symbol == ']') && (c != '[')) || ((symbol == '}') && (c != '{')))
            {
                return false;
            }
        }
    }
    return (S.size() == 0);
}


int main()
{
    // is_valid_braces_sequence_not_stack();

    //Stack vector <char> S;
    //push S.push_back(symbol1);
    //pop char s1 = S[S.size() - 1]; S.pop_back();
    auto s = is_valid_braces_sequence_for_stack();
    if (s)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}