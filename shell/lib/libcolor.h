//////////////////////////////////////;
// Colors for use in c programs
// Syntax:
//	printf(COLOR"TEXT"RESET);
// Example:
//	printf(BRED"Mau."RESET);
// Prints "Mau." in Bright Red.
///////////////////////////////////////

// Color stuff.               |-VGA Codes-| |-xterm codes-|
//                           R G B   R G B
#define BLACK	"\x1b[30m" // 0 0 0 // 0 0 0
#define RED		"\x1b[31m" // 170 0 0 // 205 0 0
#define GREEN	"\x1b[32m" // 0 170 0 // 0 205 0
#define YELLOW	"\x1b[33m" // 170 85 0 // 205 205 0
#define BLUE	"\x1b[34m" // 0 0 170 // 0 0 238
#define MAGENTA	"\x1b[35m" // 170 0 170 // 205 0 205
#define CYAN	"\x1b[36m" // 0 170 170 // 0 205 205
#define WHITE	"\x1b[37m" // 170 170 170 // 229 229 229
// Bright color stuff.
#define BBLACK	"\x1b[90m" // 85 85 85 // 127 127 127
#define BRED	"\x1b[91m" // 255 85 85 // 255 0 0
#define BGREEN	"\x1b[92m" // 85 255 85 // 0 255 0
#define BYELLOW "\x1b[93m" // 255 255 85 // 255 255 0
#define BBLUE	"\x1b[94m" // 85 255 255 // 92 92 255
#define BMAGENTA "\x1b[95m" // 255 85 255 // 255 0 255
#define BCYAN	"\x1b[96m" // 85 255 255 // 0 255 255
#define BWHITE	"\x1b[97m" // 255 255 255 // 255 255 255
// Background color stuff.
#define GBLACK	"\x1b[40m"
#define GRED	"\x1b[41m"
#define GGREEN	"\x1b[42m"
#define GYELLOW "\x1b[43m"
#define GBLUE	"\x1b[44m"
#define GMAGENTA "\x1b[45m"
#define GCYAN	"\x1b[46m"
#define GWHITE	"\x1b[47m"
// Bright background color stuff.
#define BGBLACK	"\x1b[100m"
#define BGRED	"\x1b[101m"
#define BGGREEN	"\x1b[102m"
#define BGYEL	"\x1b[103m"
#define BGBLUE	"\x1b[104m"
#define BGMAG	"\x1b[105m"
#define BGCYAN	"\x1b[106m"
#define BGWHITE	"\x1b[107m"

// Reset colors to default value.
#define RESET	"\x1b[0m"
