#include<stdio.h>
#include<string.h>
#define Max 10000
void GetLongest(char *p, int *next) {
    int plen=strlen(p);
    next[0]=-1;
    int k=-1;
    int j=0;
    while(j<plen){
        if(k==-1 || p[k]==p[j]) {
            k++;j++;next[j]=k;
        } else {
            k=next[k];
        }
    }
}
int main(){
    char str[Max];
    scanf("%s",str);
    int next[Max]={0};
    GetLongest(str,next);
    int len=strlen(str);
    /*for(int i=0;i<=len-1;i++){
        if(i!=0) printf(" ");
        printf("%d",next[i]);
    }*/
    for(int i=1;i<=len;i++){           //输出最长前后缀长度
        if(i!=1) printf(" ");
        printf("%d",next[i]);
    }
    return 0;
}