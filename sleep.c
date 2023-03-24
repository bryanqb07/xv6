#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
	if(argc != 2) {
		printf(1, "usage: sleep <duration> ");
	}
	int waitTime = atoi(argv[1]);
	sleep(waitTime);
	exit();
}
