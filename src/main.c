/*
** The vee-em runtime system
*/

#include "stupid.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv)
{
    enum StartupMode mode;
    mode = S_NORMAL;

    int c;

    while ((c = getopt(argc, argv, ":vdh")) != -1) {
        switch (c) {
        case 'v':
            mode = S_VERSION;
            break;
        case 'd':
            mode = S_DEBUG;
            break;
        case 'h':
            mode = S_HELP;
            break;
        case '?':
            fprintf(stderr, "Unknown option... "
                            "Use -h to print a help menu.\n");
            break;
        }
    }

    switch (mode) {
    case S_VERSION:
        VEE_PRINT_VERS();
        exit(0);
    case S_DEBUG:
        fprintf(stderr, "Starting vee-em in debug mode!\n");
        break;
    case S_HELP:
        fprintf(stderr, VEE_HELP);
        exit(0);
    default:
        break;
    }

    printf("run\n");
    
    return 0;
}
