#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <direct.h>



typedef struct sysinfo sysinfo;
struct sysinfo {
	FILE* data;
};





int initfile(sysinfo* information);



int main(int argc, char *argv[]){
	sysinfo *information = (sysinfo*)malloc(sizeof(sysinfo));

	if (initfile(information)){

	}
	else
		return 0;

	return EXIT_SUCCESS;
}



int initfile(sysinfo* information){
	information->data = NULL;
	if (information->data = fopen("data.csv", "a+"))
		return 1;
	return 0;
}
