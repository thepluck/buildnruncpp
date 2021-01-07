/// Usage: build taskName
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    string cmd = "g++ -std=c++14 -Wall -Wextra -Wfloat-equal -Wshadow " + string(argv[1]) + ".cpp -o " + string(argv[1]);
    system(cmd.data());
}
