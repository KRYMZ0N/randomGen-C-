#include <iostream>
#include <ctime>

using namespace std;
namespace functions {
    string random(string d[]) {
        std::time_t t = std::time(0);

        int newTime = t / 10000000;

        for (int i = 5; i > 0; i--) { //TODO does not work
            if (t > sizeof(d)) {
                t>2;
            }
        }

        return d[t];
    }
}