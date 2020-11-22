#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>

#define CARD_NUM 13
#define MAX_PATH_LEN 100
#define LINE_SIZE 256
#define MAX_LINES 32
#define MAX_HAND_SIZE 12
#define DECK_SIZE 52
#define BUFFSIZE 64
#define BAR "____________________________________________________________\n"

void error(char* msg, int exit_code)
{
    printf("%s\n", msg);
    exit(exit_code);
}

int main() {
    return 0;
}