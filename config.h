//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  
  {"",  "packages",  18000,  16}, 
  {"",  "checkupdate",  18000,  16},
  {"",  "memory", 2,  10},
  {"",  "internet",  2, 1},
  {"",  "cpu", 5,  4},
  {"",  "clocks", 60,  4},
  {"",  "xback", 0,  16},
  {"",  "batterychecks", 10,  4},
  {"",  "vol", 0,  16},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;