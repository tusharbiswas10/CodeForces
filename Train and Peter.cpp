#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s, a, b;

bool find(string s, string a, string b) {
    return s.find(a) != string::npos && s.find(b, s.find(a) + a.size()) != string::npos;
}

void solve(string s, string a, string b) {
    bool forward, backward;

    forward = find(s, a, b);
    reverse(s.begin(), s.end());
    backward = find(s, a, b);
    if (backward && forward)
        cout << "both\n";
    else if (forward)
        cout << "forward\n";
    else if (backward)
        cout << "backward\n";
    else
        cout << "fantasy\n";
}

int main() {
    cin >> s >> a >> b;
    solve(s, a, b);
    return 0;
}
