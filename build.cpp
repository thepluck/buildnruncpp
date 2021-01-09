#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    if (string(argv[1]) == "--help") {
        puts("Usage: build [taskName]"); return 0;
    }
    char cmd[1000] = "g++ -std=c++14 -Wall -Wextra -Wfloat-equal -Wshadow ";
    strcat(cmd, argv[1]); strcat(cmd, ".cpp -o "); strcat(cmd, argv[1]);
    system(cmd); return 0;
}
