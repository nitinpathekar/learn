#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int st, int ed)
{

    if (st > ed)
        return;

    swap(s[st], s[ed]);

    reverse(s, st + 1, ed - 1);
}

int main()
{
    int arr[] = {1, 12, 45, 78, 123, 456, 789};
    string s = "the thing";
    reverse(s, 0, s.size() - 1);
    cout << s;

    return 0;
}