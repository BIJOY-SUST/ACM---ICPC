#include<stdio.h>
int main(){

    int K,i;
    int N,M,X,Y;

    while(scanf("%d", &K)&&K!=0){
        scanf("%d %d",&N, &M);
    for(i=1;i<=K;i++){
        scanf("%d %d",&X, &Y);
        if(X==N || Y==M){
            printf("divisa\n");
        }
        else if(X>N && Y>M){
            printf("NE\n");
        }
        else if(X>N && Y<M){
            printf("SE\n");
        }
        else if(X<N && Y>M){
            printf("NO\n");
        }
        else if(X<N && Y<M){
            printf("SO\n");
        }
    }


    }
    return 0;
}

