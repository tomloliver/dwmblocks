#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " ^c#414868^:^d^ "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(cmd, interval, signal).
#define BLOCKS(X)         \
    X("sb-cpu",    10,  1) \
    X("sb-ram",    10,  2) \
    X("sb-net",    10,  3) \
    X("sb-volume", 0,   4) \
    X("date '+ %d/%m/%Y  %H:%M '", 60, 5)

#endif  // CONFIG_H
