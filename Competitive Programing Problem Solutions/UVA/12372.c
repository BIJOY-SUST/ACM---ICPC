#include<stdio.h>

int main(){
  int T,i;
  double L,W,H;

  scanf("%d", &T);
  for(i=1;i<=T;i++){
        scanf("%lf%lf%lf",&L,&W,&H);
        if(L<=20&&W<=20&&H<=20){
            printf("Case %d: good\n",i);
        }
        else{
            printf("Case %d: bad\n",i);
        }

    }
    return 0;
}
