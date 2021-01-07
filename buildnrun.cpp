/// Usage: buildnrun taskName (inputFile) (outputFile)
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    char cmd[1000] = "g++ -std=c++14 -Wall -Wextra -Wfloat-equal -Wshadow ";
    strcat(cmd, argv[1]); strcat(cmd, ".cpp -o "); strcat(cmd, argv[1]);
    strcat(cmd, "; ./"); strcat(cmd, argv[1]);
    if (argc > 2) {
        strcat(cmd, " < "); strcat(cmd, argv[2]);
    }
    if (argc > 3) {
        strcat(cmd, " > "); strcat(cmd, argv[3]);
    }
    system(cmd); system("echo; echo");
}
