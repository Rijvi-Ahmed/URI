#include<stdio.h>
int main(){
int M,N;
int i, sum;
freopen("input110.txt","r",stdin);
while(2==scanf("%d %d" , &M , &N)){
    if( M <= 0 || n <= 0)
        break;
    sum=0;
    if(M<N){
    for(i=M;i<=N,i++){
    printf("%d",i);
    sum+=i;
    }
}
    else{
        for(i=N;i<=M,i++){
            printf("%d",i);
            sum+=i;
        }
    }
    printf("Sum=%d\n",sum);
}



}
