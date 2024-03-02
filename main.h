#define ver		"0"
#define sver		"0"
#define ssver	"5"
#define branch	"nightly"
// Example 1: 0.0.1_nightly
// Example 2: 0.1.0_pre
// Example 3: 1.0.0_stable

#include "shell/lib/libcolor.h"
void welcome()
{
	printf(BGMAG"Welcome to, Mauy"RESET"\n");
	printf(BGREEN"Rewriten CaMau On Shell to C.\n"RESET);
	printf(BRED"M"BBLUE"a"BYELLOW"u"RESET"\n");
}

void welcomeSh()
{
	printf(BBLUE"CaMau On Shell or MauSh is a simple shell."RESET"\n");
	printf(BRED"Type 'help' for help.\n"RESET);
}