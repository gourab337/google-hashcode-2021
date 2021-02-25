#include<iostream>
#include<stdio.h>
#include <unordered_map>
using namespace std;
 
int main() {
    freopen("Inputs/e.txt", "r", stdin); // Reading from input file    
 
    int D,I,S,V,F;
    int B[10000],E[10000],L[10000],P;
    string sn;
    int i,j,k,l,m,n,sn4[10000],sn6[1][1],sn5[10000],car_no=1,score=0,max_score=0,sup=0;
 
    unordered_map<string, int> sn2;
    unordered_map<int, string> sn3;
 
    scanf("%d %d %d %d %d",&D,&I,&S,&V,&F);
 
    n=0;
    for(i=0;i<S;i++) {
        scanf("%d %d",&B[i],&E[i]);        
        cin >> sn;                
        sn2[sn]=n; sn3[n]=sn;        
        sn4[i]=n;
        n++;         
        scanf("%d",&L[i]);
    }    
    for(i=0;i<V;i++) {
        scanf("%d\n",&P);        
        for(j=0;j<P;j++) {                      
            cin >> sn;
            sn5[j]=sn2[sn];            
            sn6[0][0]=sn2[sn];       
        }             
        sup=0;
        for(k=1;k<P;k++) {              
            for(j=0;j<S;j++) {
                if(sn5[k]==sn4[j]) {
                    sup=sup+L[j];                                         
                    break;
                }
            }
        }
        score=F+(D-sup);       
        if(score>max_score) {
            max_score=score;
            freopen("Output/e4_out.txt", "w", stdout); // Writing to output file            
            //printf("%d\n",score);
            printf("%d\n",P-1);
            for(k=0;k<P-1;k++) {              
                for(j=0;j<S;j++) {
                    if(sn5[k]==sn4[j]) {
                        printf("%d\n1\n",E[j]);                
                        cout << sn3[sn5[k]] << " ";               
                        printf("2\n");                     
                        break;
                    }
                }
            }
        }
        
    }   
 
    return 0;
}


