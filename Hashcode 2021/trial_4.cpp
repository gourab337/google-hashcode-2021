#include<iostream>
#include<stdio.h>
#include <unordered_map>
using namespace std;
 
int main() {
    freopen("Inputs/d.txt", "r", stdin); // Reading from input file
    freopen("Output/d_out.txt", "w", stdout); // Writing to output file
 
    int D,I,S,V,F;
    int B[100000],E[100000],L[100000],P[100000];
    string sn,sn5;
    int i,j,k,l,sn3[100000],n,cs[1][1],n2,sn6[100000];
 
    unordered_map<string, int> sn2;
    unordered_map<int, string> sn4;
 
    scanf("%d %d %d %d %d",&D,&I,&S,&V,&F);
 
    n=0;
    for(i=0;i<S;i++) {
        scanf("%d %d",&B[i],&E[i]);        
        cin >> sn;                
        sn2[sn]=sn3[i]=n;
        sn4[n]=sn;
        n++;         
        scanf("%d",&L[i]);
    }
    l=0;
    for(i=0;i<V;i++) {
        scanf("%d\n",&P[i]);
        for(j=0;j<P[i];j++) {                      
            cin >> sn;
            if(i==0) sn6[l++]=sn2[sn];            
            cs[0][0]=sn2[sn];         
        }
    }
 
    l=0;
    printf("%d\n",P[0]-1);
    for(i=0;i<P[0]-1;i++) {              
        for(j=0;j<S;j++) {
            if(sn6[i]==sn3[j]) {
                printf("%d\n",E[j]);
                printf("1\n");
                cout << sn4[sn6[l++]] << " ";                
                printf("2\n");                              
                break;
            }
        }
    }
 
    return 0;
}
