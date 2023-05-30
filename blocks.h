//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/                             /*Update Interval*/   /*Update Signal*/
  {"",      "~/.local/bin/status/status-weather",   900,                  9},
  {"",      "~/.local/bin/status/status-music",     0,                    1},
  {"",      "~/.local/bin/status/status-rss",       60,                   4},
  {"",      "~/.local/bin/status/status-mail",      60,                   3},
  {"",      "~/.local/bin/status/status-updates",   3600,                 2},
  {"",      "~/.local/bin/status/status-bluetooth", 60,                   10},
  {"",      "~/.local/bin/status/status-internet",  60,                   7},
  {"",      "~/.local/bin/status/status-mic",       0,                    11},
  {"",      "~/.local/bin/status/status-volume",    0,                    5},
  {"",      "~/.local/bin/status/status-battery",   60,                   6},
  {"",      "~/.local/bin/status/status-time",      60,                   12},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\ \ ";
static unsigned int delimLen = 5;
