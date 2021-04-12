#ifndef STUPID_H
#define STUPID_H

#define VEE_VERS "Vee-em runtime system v0.1"

#define VEE_PRINT_VERS() \
    printf("%s\n", VEE_VERS);

#define VEE_HELP \
    " ---------- Vee-em runtime system ----------\n" \
    " Usage: vee-em [file/image]                 \n" \
    " -- Options --                              \n" \
    "     -d : Enable debug mode                 \n" \
    "     -v : Print version information         \n" \
    "     -h : Print this menu                   \n" \
    " -------------------------------------------\n"

enum StartupMode {
    S_NORMAL,
    S_VERSION,
    S_DEBUG,
    S_HELP,
};

#endif
