#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    if (string(argv[1]) == "--help") {
        puts("buildnrun [taskName]\nOptions:\n    -i [inputFile]\t\tread input from [inputFile]\n    -o [outputFile]\t\twrite output to [outputFile]\n"); return 0;
    }
    char cmd[1000] = "build "; strcat(cmd, argv[1]);
    strcat(cmd, "; run "); strcat(cmd, argv[1]);
    if (argc > 3) {
        strcat(cmd, " "); strcat(cmd, argv[2]);
        strcat(cmd, " "); strcat(cmd, argv[3]);
    }
    if (argc > 5) {
        strcat(cmd, " "); strcat(cmd, argv[4]);
        strcat(cmd, " "); strcat(cmd, argv[5]);
    }
    system(cmd); return 0;
}
