//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sensors | head -4 | tail  -1 | cut -c 16- | xargs",	5,		0},
	{" : ", "acpi | cut -d ':' -f 2- | cut -d ',' -f 2- | cut -c 2-",	60,		0},
	{" : ", "light -G",	20,		0},
	{" ", "date '+%a %b %d %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
