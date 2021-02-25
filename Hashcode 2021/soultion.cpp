#include<iostream>
#include<stdio.h>
#include <unordered_map>
using namespace std;
 
int main() {
    freopen("Inputs/b.txt", "r", stdin); // Reading from input file
    freopen("Output/b1_out.txt", "w", stdout); // Writing to output file
 
    int D,I,S,V,F;
    int B[10000],E[10000],L[10000],P[10000];
    string sn;
    int i,j,k,l,n,sn4[10000],sn6[1][1],sn5[10000],car_no=1;
 
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
    l=0;
    for(i=0;i<V;i++) {
        scanf("%d\n",&P[i]);
        for(j=0;j<P[i];j++) {                      
            cin >> sn;
            if(i==car_no) sn5[l++]=sn2[sn];            
            sn6[0][0]=sn2[sn];       
        }
    }
 
    l=0;
    printf("%d\n",P[car_no]-1);
    for(i=0;i<P[car_no]-1;i++) {              
        for(j=0;j<S;j++) {
            if(sn5[i]==sn4[j]) {
                printf("%d\n1\n",E[j]);                
                cout << sn3[sn5[l++]] << " ";               
                printf("2\n");                     
                break;
            }
        }
    }
 
    return 0;
}
