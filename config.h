#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)                       \
    X("", "status-rss",       0,    4)  \
    X("", "status-mail",      0,    3)  \
    X("", "status-updates",   3600, 2)  \
    X("", "status-mic",       0,    11) \
    X("", "status-volume",    0,    5)  \
    X("", "status-bluetooth", 0,    10) \
    X("", "status-internet",  0,    7)  \
    X("", "status-battery",   60,   6)  \
    X("", "status-time",      60,   12)

#endif  // CONFIG_H
