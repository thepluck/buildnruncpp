#include <bits/stdc++.h>

using namespace std;

/// buildnrun taskName (inputFile) (outputFile)
int main(int argc, char *argv[]) {
    string cmd = "g++ -std=c++14 -Wall -Wextra -Wfloat-equal -Wshadow "
    + string(argv[1]) + ".cpp -o " + string(argv[1]);
    system(cmd.data());
    cmd = "./" + string(argv[1]);
    if (argc > 2) cmd += " < " + string(argv[2]);
    if (argc > 3) cmd += " > " + string(argv[3]);
    system(cmd.data());
    system("echo; echo");
}