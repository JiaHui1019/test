#include<iostream>
#include<iomanip>
using namespace std;

void sumArea(double * radius, int &n)
{
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += 3.14 * radius[i] * radius[i];
    }
    cout << fixed << setprecision(5) << sum << endl;
}

int main(void)
{
    int n;
    cin >> n;
    double * radius = new double[n];
    for(int i = 0; i < n; i++)
    {
        cin >> radius[i];
    }
    sumArea(radius, n);
    delete[] radius;
    return 0;
}