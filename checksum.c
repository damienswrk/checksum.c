#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define max_int (255)
#define byte char


int main (int argc, char * argv[], char ** envp) {

int count = 10;
int sum = 0;
int checksum;
int complement;
int quotient; 
int remainder;
int stdn;


  int fp = open(argv[1], O_RDONLY , 0);
  char buffer[10];
  
  
  for (int i =1; i < count+1; i++){

    read(fp, buffer, 10);
  int j;
  for (j = 0; j < 8; j++) {
      printf("%d", !!((buffer[0] << j) & 0x80));
  }
  printf("%d", buffer[0]);
  printf("\n");
    //printf("CurrentL %c \n", buffer);

    if (stdn > max_int || stdn <0){ 
        printf("This number is out of bounds: %i \n", stdn);
        break;
    }
    if(i == 6){
     checksum = stdn;
     stdn= 0;
    }
    sum+=stdn;
  }
  quotient = sum / (max_int +1);
  remainder = sum % (max_int +1);
  sum = quotient + remainder;
  complement = max_int -sum;
}