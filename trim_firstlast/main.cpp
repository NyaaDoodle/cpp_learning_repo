#include <iostream>
using namespace std;

string trim_firstlast(string str) {
    str.erase(str.begin());
    str.pop_back();
    return str;
}

int main() {
    string s = "hewwo wowwd owo";
    s = trim_firstlast(s);
    cout << s << endl;
    return 0;
}
