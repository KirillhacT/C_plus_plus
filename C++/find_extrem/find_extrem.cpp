#include<iostream>
#include<string>
#include<vector>

using namespace std;

void num_of_maximals()
{
    int max_value;
    int N;
    int count = 0;
    cin >> N;

    max_value = x;
    for (size_t i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        // if (x > max_value || count == 0)
        if (x > max_value || count == 0)
        {
            max_value = x;
            count = 1;
        }
        else if (x == max_value)
            count++;
    }
    cout << max_value << " - "<< count << "\n";
    
}

void extremum_of_students() 
{
vector<string> max_names;
    int max_value;
    int N = 3;

    for (int i = 0; i < N; i++)
    {
        string name;
        int height;
        cin >> name >> height;
        if (max_names.empty() || height > max_value)
        {
            max_value = height;
            max_names.clear();
            max_names.push_back(name);
        }
        else if (height == max_value) {
            max_names.push_back(name);
        }
    }
    cout << "Tallest students height= "<< max_value << endl;
    for (auto name: max_names)
    {
        cout << name << "\n";
    }
}

int main()
{
    num_of_maximals();
}