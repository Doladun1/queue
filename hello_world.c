/*
 * hello_world.c
 *
 *  Created on: Sep 10, 2025
 *      Author: davae
 */
#include <stdlib.h>
#include <stdio.h>

#define INT8_MAX		127

//Create queues for each type of interr
int track[INT8_MAX];
static int track_idx;
static int tail_idx;

//Add function to fill queue based on interr
void fill(int var){
	track[track_idx++] = var;
}

//Empty queues after interr 
int empty(){
	printf("%s ",__func__);
	return track[tail_idx++];
}

int main(){
	printf("Input Value:\n");
	fflush(stdout);	
	int var =0;
	
	while(var != -999) {
		scanf("%d",&var);
		fill(var);
		}
	
	printf("Queue: \n");
	while(tail_idx<track_idx){
		printf("Val: %d\n", empty());
	}
	return 0;
}