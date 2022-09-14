#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,x,a;
    printf("entrer n: ");
    scanf("%d",&n);
    int t[n];

    printf("\n entrer les elements de se tableau :\n");
    for(i=0;i<n;i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }
    printf("\n entrer le nombre que vous voulez rechercher :");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(t[i]==x){
            a=1;
        }
    }
    if(a==1){
        printf(" %d se trouve dans le tableau .",x);
    }else  printf(" %d ne trouve pas dans le tableau .",x);
    return 0;
}
