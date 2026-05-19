#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

void push_and_pop(int manipulation)
{
    if (manipulation == 1)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    else if (manipulation == 2)
    {
        if (!v.empty())
            v.pop_back();
    }
}

void traverse_vector()
{
    for (const auto &x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int manipulation;
        cin >> manipulation;
        push_and_pop(manipulation);
    }
    if (v.empty())
        cout << "EMPTY" << endl;
    else
        traverse_vector();
    return 0;
}