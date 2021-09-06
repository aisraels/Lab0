#include <stdio.h>


int main (int argc, char** argv) {
	if (argc ==  2) {
		printf ("I like  %s\n", argv[1]);
	}
	else {
		printf("What do I like?\n");
	}
	return 0;
}
