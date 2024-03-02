/*
Mauy: A simple program hat uses MauSh as the shell.
	Version dates:
		0.0.1_nightly: 26-02-2024 ??:?? (Sorry I forget when I started this) :-(
		0.0.2_nightly: 26-02-2024 20:26 = Colorful update.
		0.0.3_nightly: 27-02-2024 00:31 = Command update.
		0.0.4_nightly: 27-02-2024 11:25 = Normal Update.
		0.0.5_nightly: 29-02-2024 17:16 = Magic Update On A Magic Day!
	Read LICENSE
*/

#include <stdio.h>

// Local headers
#include "main.h"
#include "shell/sh.c"

int main()
{
	welcome();

	printf("Version: "ver "."sver "."ssver "_"branch"\n\n"); // Prints version.
	
	if (DEBUG == 1)
	{
		shVarMac();
	}

	return maush();
}
