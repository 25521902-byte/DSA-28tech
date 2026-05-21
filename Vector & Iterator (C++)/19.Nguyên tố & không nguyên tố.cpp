#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

void input_vector()
{
    int value;
    while (cin >> value)
    {
        v.push_back(value);
    }
}

bool isPrime(int value)
{
    for (long long i = 2; i * i <= value; i++)
    {
        if (value % i == 0)
            return false;
    }
    return value > 1;
}

void traverse_vector()
{
    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        if (isPrime(*it))
            cout << *it << " ";
    }
    cout << endl;
    for (const auto &x : v)
    {
        if (!isPrime(x))
            cout << x << " ";
    }
    cout << endl;
}

int main()
{
    input_vector();
    traverse_vector();
    return 0;
}
