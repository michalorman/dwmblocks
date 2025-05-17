//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*icon    commnd          interval  signal */
	{"",      "sb-volume",	  0,		    21}, // kill -55 $(pidof dwmblocks) # add 34 to signal
	{"",      "sb-memory",	  5,		    22},
  {"",      "sb-datetime",	30,		    23},
};

static char delim[] = "  ";
static unsigned int delimLen = 5;
