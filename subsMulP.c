#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long x[4] = {1,1,1,1};
    long long y[4] = {0,1,0,1};
    long long out[4];
    long long c = 0;
    for(int i = 0; i<4; i++){
        long long xc = y[i] + c;
        if(xc < c){
            out[i] = x[i];
            
        }else{
            c = x[i] < xc ? 1 : 0;
            //xc += y[i];
            out[i] = x[i] - xc;
        }
    }
    
    for(int i=0;i<4;i++){
        printf("%lld", out[i]);
    }

    return 0;
}
