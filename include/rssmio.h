#ifndef _RSSIO_H_
#define _RSSIO_H_

#include "setting.h"

#define REPLY_SIZE 4096

//Prints the time to the file in the format [%H:%M:%S]
//returns the same as fprintf
int printtime(FILE* f);

//Make a directory
int makeDir(const char* path, FILE* log, int v);
//Make a fifo
int makeFile(const char* path, FILE* log, int v);

void getNewRss(const rssm_feeditem* feed, FILE* log, int v);

#endif //_RSSIO_H_
