#ifndef TAG_READER_H
#define TAG_READER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VIEW 1
#define EDIT 2

struct MP3 {
    char *mp3_filename;
    char given_tag[5];
    FILE *org_mp3_fptr;
    FILE *dup_mp3_fptr;
};

int validate_cla(int argc, char *argv[], struct MP3 *mp3);
void toggle_endianess(struct MP3 *mp3, int *size);
int tag_to_name(char * tag);
void copy_remaining_data(struct MP3 *mp3);
void edit(struct MP3 *mp3, char * argv[]);
void view(struct MP3 *mp3);
void print_edit(struct MP3 *mp3,char * argv[]);

#endif // TAG_READER_H