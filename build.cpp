/// Usage: build taskName
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    char cmd[1000] = "g++ -std=c++14 -Wall -Wextra -Wfloat-equal -Wshadow ";
    strcat(cmd, argv[1]); strcat(cmd, ".cpp -o "); strcat(cmd, argv[1]);
    system(cmd); return 0;
}
