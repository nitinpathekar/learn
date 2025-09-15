#include <iostream>
#include <algorithm> // for sort
using namespace std;

int main() {
    string s = "dcba";

    sort(s.begin(), s.end());  // ascending

    cout << s << endl; // "abcd"
    return 0;
}
