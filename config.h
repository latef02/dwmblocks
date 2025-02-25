//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  
  {"",  "packages",  18000,  16}, 

  {"",  "update", 3600, 16}, 
  {"",  "memory", 2,  10},
  {"",  "internet",  10, 1},
  {"",  "cpu", 5,  4},
  {"",  "fan", 1,  16},
  {"",  "clocks", 1,  4},
  {"",  "xback", 1,  16},
  {"",  "batterychecks", 10,  4},
 /* {"",  "batkit", 10,  4},*/

  {"",  "stats", 5,  4},
  {"",  "vol", 1,  16},
  {"",  "lang", 1, 16},

 };

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
