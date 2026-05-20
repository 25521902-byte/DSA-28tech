#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

void input_vector(int n)
{
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
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

vector<int> prime_list()
{
    vector<int> result;
    for (const auto &x : v)
    {
        if (isPrime(x))
            result.push_back(x);
    }
    return result;
}

void traverse_vector(vector<int> result)
{
    for (const auto &x : result)
        cout << x << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    input_vector(n);
    vector<int> result = prime_list();
    traverse_vector(result);
    return 0;
}