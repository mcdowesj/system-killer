#include <stdio.h>
#include <stdlib.h>

int ackermann(int x, int y){
	if (x == 0) {
	 return y + 1;
	  }
	 else if (y == 0) {
	   return ackermann(x - 1, 1);
	    }
	 else {
	
	return ackermann(x - 1, ackermann(x, y - 1));
	}
}

int main (){
int result=0, x = 3 , y =6 ;
while(1){

//omp_set_num_threads(64);
#pragma omp parallel
 result = ackermann(x,y);
//void *m = malloc(result);
  //     memset(m, 0, 1);
}
printf("\nAckermann(%d,%d) = %d\n", x,y, result);


return 0;
}
