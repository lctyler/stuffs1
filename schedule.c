#include <sys/time.h?
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#define MAX_PROCESSES 10
#define MAX_ARGUMENTS 10

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

int pidTable[MAX_PROCESSES];
int tableNdx;


int main(int argc, char **argv){
   int startTime = 0;
   int ndx;
   int numProcs;
   int childPid;

   interpretArgs();

   signal(SIGCHLD, switchHandler);
   signal(SIGALRM, switchHandler);   

   for (ndx = 0; ndx < numProcs; ndx++){
      if ( childPid = fork() ) {
         //add childPid to processTable
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


