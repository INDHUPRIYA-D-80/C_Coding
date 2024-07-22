#include<stdio.h>
#include<string.h>


void compute( char *pat,int M,int *lps){
    int len =0;
    int i=1;
    lps[0] = 0;
    
    while(i<M){
        if(pat[i] == pat [len]){
            len++;
            lps[i] = len;
            i++;
        }else{
            if(len !=0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
}

void search(char *pat, char *txt){
    int M = strlen(pat);
    int N = strlen(txt);
    
    int lps[M];
    compute(pat, M,lps);
    int i=0;
    int j=0;
    int found=0;
    
    while(i<N){
        if(pat[j] == txt[i]){
            i++;
            j++;
        }
        if(j==M){
            printf("Found pattern at index %d\n",i-j);
            j = lps[j-1];
            found =1;
        }
        else if(i<N && pat[j] != txt[i]){
            if(j!=0){
                j = lps[j-1];
            }
            else{
                i++;
            }
        }
    }
    if(!found){
        printf("Pattern not found\n");
    }
}

int main(){
    char txt [51];
    char pat[26];
    
    fgets(txt, 51,stdin);
    txt[strcspn(txt,"\n")] = '\0';
    
    fgets(pat, 26,stdin);
    pat[strcspn(pat,"\n")] = '\0';
    
    search(pat,txt);
    return 0;
}
