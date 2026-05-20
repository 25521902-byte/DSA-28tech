#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

vector<char> v;

void input_vector()
{
    char c;
    while (cin >> c)
    {
        v.push_back(c);
    }
}

void change()
{
    for (auto &x : v)
    {
        if (isupper(x))
            x = (char)tolower(x);
        else if (islower(x))
            x = (char)toupper(x);
        else
            continue;
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
    input_vector();
    change();
    traverse_vector();
    return 0;
}