/*
MIT License

Copyright (c) 2024 Dv5n

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

// Nice Headers
#include "sh.h"
// Library for colors
#include "lib/libcolor.h"

int maush(void) 
{
	char *input = NULL; size_t len = 0; ssize_t read; // For reading inputs
	welcomeSh();

	while (1) 
	{
		if (DEBUG == 1)
		{
			printf(BRED user RESET"+DebuggerCow :-) ");
		}
		else
		{
			printf(BRED user RESET"+HappyCow :-) ");
		} read = getline(&input, &len, stdin);

		// Sadly, exits the shell.
		if (strcmp(input, "sadq\n") == 0) 
		{
			printf(GGREEN"Bye, see you soon :-)"RESET"\n");
			break; 
		}
		else if (strcmp(input, "sdq\n") == 0) 
		{
			printf(GGREEN"Bye, see you soon :-)"RESET"\n");
			break; 
		}
		
		// If the user types exit instead of sadq or sdq
		else if (strcmp(input, "exit\n") == 0) 
		{
			printf(RED"Use 'sadq' or 'sdq' to exit."RESET"\n");
		}

		// Help.
		else if (strcmp(input, "help\n") == 0) 
		{
			printf(BGREEN"Welcome to, the one and only, CAMAU ON SHELL (MauSh)\n"RESET);
			printf("Version: "ver "."sver "."ssver "_"branch"\n");
			printf("Commands:\n");
			printf(BYELLOW"1.\t<<-sadq = Sadly, exits the shell.\n");
			printf("2.\t<<-ds = short for 'destroy screen' (clears).\n");
			printf("3.\t<<-help = Shows this.\n");
			printf("4.\t<<-whusr = shows current user.\n");
			printf("5.\t<<-reboot = Reboots the shell.\n");
			printf("6.\t<<-shw = Prints current directory.\n");
			printf("7.\t<<-ver = Prints the version.\n");
			printf("8.\t<<-ls = Prints the files and subdirectories\n");
			printf("9.\t<<-datey = Prints the date & time.\n");
			printf("10.\t<<-var = shows variables and macros.\n"RESET);
		}
		
		else if (strcmp(input, "ds\n") == 0)
		{
			printf(ds""); // Clears screen.
		}
		
		// Prints current user defined in sh.h
		else if (strcmp(input, "whusr\n") == 0)
		{
			printf("Current user: "GBLUE user RESET);
			printf("\n");
		}
		
		// Shows the files and subdirectories.
		else if (strcmp(input, "ls\n") == 0)
		{
			cob = opendir(".");
			if (cob != NULL)
			{
				while ((dir = readdir(cob)) != NULL) 
			{
				printf(GMAGENTA"%s", dir->d_name);
				printf(RESET"\n");
			}
			closedir(cob);
			}
		}
		
		// Reboots the shell.
		else if (strcmp(input, "reboot\n") == 0)
		{
			printf(ds""); // Clears Sceen
			return maush();
		}
		
		else if (strcmp(input, "var\n") == 0)
		{
			shVarMac();
		}
		
		// Prints the current date & time.
		else if (strcmp(input, "datey\n") == 0)
		{
			time_t t = time(NULL); struct tm tm = *localtime(&t);
			printf(GYELLOW"Date & Time: %d-%02d-%02d %02d:%02d:%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
			printf(RESET"\n");
		}

		// Prints the current working directory.
		else if (strcmp(input, "shw\n") == 0)
		{
			char path[buf]; getcwd(path, buf);
			printf(GGREEN"%s", path);
			printf(RESET"\n");
		}
		
		// Prints the version defined in main.h
		else if (strcmp(input, "ver\n") == 0)
		{
			printf(BGREEN"Version: "ver "."sver "."ssver "_"branch"\n"RESET);
		}

		else if (strcmp(input, "\n") == 0) {/* If the user types nothing, do nothing. */}
		
		else
		{
			printf(BRED"Sorry, Command not found. :-(\n"RESET);
		}

	}
	printf(logout"\n");

	if (DEBUG == 1)
	{
		printf(exit0"\n");
	}
	return (0); 
}
