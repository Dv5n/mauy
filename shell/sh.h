#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <time.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG	1
#endif // DEBUG

#define ds		"\e[1;1H\e[2J"

#define logout	"logout"
#define exit0	"exited with code 0 (normal)"
#define exit1	"exited with code 1 (error)"

#define root		"root"
#define user		"Dv5N" // You can change this to your username.

#define buf		256


DIR* cob; struct dirent* dir; // For printing the files and subdirectories.

void shVarMac()
{
	if (DEBUG == 1)
	{
		printf("Debug Stuff:\n");
		printf("ver: "ver"\n");
		printf("sver: "sver"\n");
		printf("ssver: "ssver"\n");
		printf("branch: "branch"\n");
	}
	printf("root: "root"\n");
	printf("user: "user"\n");
}