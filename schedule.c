//Prog2 lolz


#include <sys/time.h?
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <cstring.h>
#define MAX_ARG_LENGTH 100
#define MAX_PROCESSES 10
#define MAX_ARGUMENTS 10

typedef struct input {
   char *exec;
   char **arg;
   int numArgs; 

} input;

void switchHandler(int sig){
   if(sig == SIGCHLD)
      //kill timer in case we got here from an early termination
   //switch to next process
}



void alarm (unsigned int seconds) {
   struct itimerval new;
   new.it_interval.tv_usec = 0;
   new.it_interval.tv_sec = 0;
   new.it_value.tv_usec = 0;
   new.it_value.tv_sec = (long int) seconds;
   setitimer (ITIMER_REAL, &new, NULL);
}

void parseInputs(input **inputs, int * num, char **argv, int argc) {
   int i = 3;
   int inputCnt = 0; 
   inputs[inputCnt] = malloc(sizeof(inputs)); 
   inputs[inputCnt]->exec = argv[2];
   inputs[inputCnt]->numArgs = 0;  
   for (i; i < argc; i++) {
      if(strcmp(":", argv[i])) {
       //if the next argv is not a :
       inputs[inputCnt]->arg[inputs[inputCnt]->numArgs++] = argv[i]; 
       
      }
      else {
       // if it is a :
	//make a new inputs struct
       inputs[++inputCnt] = malloc(sizeof(inputs)); 
       inputs[inputCnt]->exec = argv[i]; 
       inputs[inputCnt]->numArgs = 0; 

      }       
     


   }
  
   

} 



int pidTable[MAX_PROCESSES];
int tableNdx = 0;


int main(int argc, char **argv){
   int startTime = 0;
   int ndx;
   int numProcs = 0;
   int childPid;
   int *getnNumProcs; 
   input *inputs[10];
   
    

   

   signal(SIGCHLD, switchHandler);
   signal(SIGALRM, switchHandler);   

   for (ndx = 0; ndx < numProcs; ndx++){
      if ( childPid = fork() ) {
         pidTable[tableNdx++] = childPid;
	 numProcs++;
      }
      else {
         pause();
         exec(use name from command line here);
      }
   }

   while (numProcs > 0) {
      //choose process index to run and send a SIGCONT signal to it
      alarm(quantum);
   }   


