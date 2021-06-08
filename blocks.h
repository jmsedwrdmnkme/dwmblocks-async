//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/         /*Update Interval*/   /*Update Signal*/
  {"",      "status-weather",   3600,                 9},
  {"",      "status-rss",       60,                   4},
  {"",      "status-mail",      60,                   3},
  {"",      "status-updates",   3600,                 2},
  {"",      "status-music",     0,                    1},
  {"",      "status-bluetooth", 60,                   10},
  {"",      "status-internet",  60,                   7},
  {"",      "status-mic",       0,                    11},
  {"",      "status-volume",    0,                    5},
  {"",      "status-battery",   60,                   6},
  {"",      "status-date",      60,                   12},
  {"",      "status-time",      60,                   8},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 5;
