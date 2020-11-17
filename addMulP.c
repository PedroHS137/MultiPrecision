
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long x[4] = {1,0,0,1};
    long long y[4] = {2,0,0,0};
    long long out[4];
    long long c = 0;
    for(int i = 0; i<4; i++){
        long long xc = x[i] + c;
        if(xc < c){
            out[i] = y[i];
            
        }else{
            xc += y[i];
            c = y[i] > xc ? 1 : 0;
            out[i] = xc;
        }
    }
    
    for(int i=0;i<4;i++){
        printf("%lld", out[i]);
    }

    return 0;
}