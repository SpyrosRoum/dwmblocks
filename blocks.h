//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {" ", "~/.local/bin/dwm_spotify", 5, 11},

	{"🧠 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	20,		0},

	{"", "~/.local/bin/dwm_pulse",					        	0,		10},

    {"🌡 ", "sensors | awk '/^temp1:/{print $2}'",			  20,       0},

	{"📆 ", "date \"+%a, %b %d %Y, %H:%M%p\"",				   20,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
