//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/         /*Update Interval*/   /*Update Signal*/
  {"",      "status-mail",      0,                    3},
  {"",      "status-rss",       0,                    4},
  {"",      "status-music",     0,                    1},
  {"",      "status-updates",   7200,                 2},
  {"",      "status-volume",    0,                    5},
  {"",      "status-internet",  60,                   7},
  {"",      "status-battery",   60,                   6},
  {"",      "status-time",      60,                   8},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 5;
