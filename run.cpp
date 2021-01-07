#include <bits/stdc++.h>

using namespace std;

/// run taskName (inputFile) (outputFile)
int main(int argc, char *argv[]) {
    string cmd = "./" + string(argv[1]);
    if (argc > 2) cmd += " < " + string(argv[2]);
    if (argc > 3) cmd += " > " + string(argv[3]);
    system(cmd.data());
    system("echo; echo");
}