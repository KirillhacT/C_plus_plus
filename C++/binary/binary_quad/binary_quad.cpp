#include<iostream>
#include<vector>
#include<string>
#include<iomanip>

using namespace std;

double f(double x)
{
    return (x - 12.3456789) * (x - 0.123456789);
}


int main() 
{
    double a, b;
    cout << "Enter boundaries [a, b]: ";
    cin >> a >> b;
    double error;
    cin >> error;

    if (f(a) * f(b) < 0)
    {
        while ((b - a) / 2. > error)
        {
            double c = (a + b) / 2.;
            if (f(c) == 0)
                break;
            if (f(c) * f(a) < 0)
                b = c;
            else
                a = c;

        }
        cout << "Answer: " << setprecision(17) << (a + b)/2. << "\n";
    }
    else
        cout << "No wrong";
    

}