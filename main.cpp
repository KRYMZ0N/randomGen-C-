#include <iostream>
#include "lists.cpp"
#include "functions.cpp"
using namespace std;
using namespace list;
using namespace functions;

int main() {
    bool loop = true;
    string s;


    cout << "hello From randGen!\n";

    while(loop) {
        
        cin >> s;

        if (s == "rand") {
            cout << random(color);
        } else {
            cout << "not what it needs to be\n";
        }
    }

    return 0;
}
