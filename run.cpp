#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    char cmd[1000] = "./"; strcat(cmd, argv[1]);
    if (argc > 3) {
        if (string(argv[2]) == "-i")
            strcat(cmd, " < ");
        else if (string(argv[2]) == "-o")
            strcat(cmd, " > ");
        strcat(cmd, argv[3]);
    }
    if (argc > 5) {
        if (string(argv[4]) == "-i")
            strcat(cmd, " < ");
        else if (string(argv[4]) == "-o")
            strcat(cmd, " > ");
        strcat(cmd, argv[5]);

    }
    system(cmd); system("echo; echo");
}
