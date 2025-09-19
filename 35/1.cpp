#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string name)
{
    int i = 0;
    int j = name.size()-1;
    while (i < j)
    {
        if (name[i] != name[j])
            return false;

        i++;
        j--;
    }
    return true;
}

int main()
{

    string name ;
    getline(cin,name);

    cout << isPalindrome(name);
    return 0;
}