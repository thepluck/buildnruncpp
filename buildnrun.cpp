#include <bits/stdc++.h>

using namespace std;

/// buildnrun taskName (inputFile) (outputFile)
int main(int argc, char *argv[]) {
    if (string(argv[1]) == "--help") {
        puts("buildnrun [taskName]\nOptions:\n    -i [inputFile]\t\tread input from [inputFile]\n    -o [outputFile]\t\twrite output to [outputFile]\n"); return 0;
    }
    char cmd[1000] = "build "; strcat(cmd, argv[1]);
    strcat(cmd, " run "); strcat(cmd, argv[1]);
    system(cmd); return 0;
}
