#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n,x,j;
    bool a=false;
    printf("entrer n :");
    scanf("%d",&n);
    int t[n];
    int bi=0, bs=n, m;
    for(int i=0;i<n;i++){
        printf("t[%d]=",i+1);
        scanf("%d",&t[i]);
    }
    printf("entrer le nombre qui vous voulez le rechercher :");
    scanf("%d",&x);

    for(int i=0;i<n;i++){
        j=i;
        while(t[j]<t[j-1]&&j>=0){
            a=t[j-1];
            t[j-1]=t[j];
            t[j]=a;
            j--;
        }
    }
    while(a==false&&bs>=bi){
        m=(bi+bs)/2;
        if(t[m]==x){
            a=true;
        }else if(t[m]>x){
          bs=m-1;
        }else{
          bi=m+1;
        }
    }
    if(a==true){
        printf("%d se trouve dans le tableau .",x);
    }else printf("%d se ne trouve pas dans le tableau .",x);

    return 0;
}
