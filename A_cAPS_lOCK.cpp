#include <iostream>
#include <string>

using namespace std;

bool shouldChangeCase(const string &str) {
    bool change = true;
    for (int i = 1; i < str.size(); i++) {
        if (islower(str[i])) {
            change = false;
            break;
        }
    }
    return change;
}

string toggleCase(const string &str) {
    string res = str;
    for (char &c : res) {
        if (islower(c)) {
            c = toupper(c);
        } else {
            c = tolower(c);
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;

    if (shouldChangeCase(s)) {
        cout << toggleCase(s) << endl;
    } else {
        cout << s << endl;
    }

    return 0;
}