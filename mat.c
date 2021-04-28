#include <stdio.h>
int isPrime(int num){
    int f = 1;
    if (num > 1){
        for (int i =2;i<=num/2;i++){
            if (num % i ==0){
                f=0;//is not a prime
                break;
            }
        }
    }
   return f;
}
void main() {
    int Mat[10][5];
    struct Pnum {
        int num;
        int row;
        int column;
    };
    struct Pnum TAB[50];
    int i=0,j=0,x=1,k=0;
    while (j<5 && x!=0){
        i=0;
        while (i<10 && x!=0){
            printf("Donner un numbre entier : ");
            scanf("%i",&x);
            Mat[i][j]=x;
            i++;
        }
        j++;
    }
    i=0;j=0;
    while (j<5 && Mat[i][j]!=0){
        i=0;
        while (i<10 && Mat[i][j]!=0){

            if(isPrime(Mat[i][j])){
                TAB[k].num=Mat[i][j];
                TAB[k].row=j;
                TAB[k].column=i;
                k++;
            }
            i++;
        }
        j++;
    }
    int max=0;
    for(i=1;i<k;i++){
        if(TAB[max].num<TAB[i].num){
            max=i;
        }
    }
    if (k>0){
        printf("le plus grand nombre premre est : Mat[%i][%i]=TAB[%i]=%i",TAB[max].column,TAB[max].row,max,TAB[max].num);
    }


}
