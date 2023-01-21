#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
//& означает, что мы работаем с текущим вектором, а не с копией
void print_vector(const vector<int> &A) //Ссылка на неизменяемый вектор
{
    for (auto &x: A)
    {
        cout << x << " ";
    }
    cout << "\n";
}

void fool_sort(vector <int> &A) //Сортировка дурака
{
    int i = 0;
    while (i < int(A.size()) - 1)
    {
        if (A[i] > A[i + 1]) {
            swap(A[i], A[i + 1]);
            i = 0;
        }
        else 
            i += 1;
    }
}

void bubble_sort(vector <int> &A)
{
    int bypass_counter = 0;
    bool sorted_flag = false;
    while (!sorted_flag)
    {
        sorted_flag = true;
        //Сортирующий проход
        for (size_t i = 0; i < int(A.size()) - 1 - bypass_counter; i++)
            if (A[i] > A[i + 1]) {
                swap(A[i], A[i + 1]);
                sorted_flag = false;
            }
        bypass_counter++;
    }  
}

void simplified_bubble_sort(vector <int> &A)
{
    int N = A.size();
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1 - i; j++)
            if (A[j] > A[j + 1])
                swap(A[j], A[j + 1]);
}

vector<int> input_vector()
{
    //split на C++
    vector<int> A;
    string line;
    getline(cin, line);
    stringstream line_stream(line);

    while (!line_stream.eof())
    {
        int x;
        line_stream >> x;
        A.push_back(x);
    }
    return A;
}

int main()
{
    // vector<int> A;
    // A = input_vector();
    // fool_sort(A);
    // print_vector(A);
}