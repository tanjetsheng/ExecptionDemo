#include <stdio.h>
#include "tryexeception.h"
#include "CExceptionConfig.h"
#include "exception.h"


#define radius_is_zero  1
#define radius_is_negative 2 


float validation(float v){
  if(v == 0)
    Throw(CreateException("radius is zero",radius_is_zero));
  else if (v < 0)
    Throw(CreateException("radius canot be neg",radius_is_negative));
  else
    printf("%f is a positive radius\n",v);
  
}

void tryException(float v1){
  CEXCEPTION_T ex;
 Try {
     validation(v1);
    float val = (v1*v1)*3.142;
    printf("cycle of radius %f is %f\n",v1,val);
  }Catch(ex)
  {
    dumpException(ex);
    
}
}