#include <algorithm>
#include <iostream>
#include <cstring>
#include <complex>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <vector>  
#include <string>
#include <cmath>
#include <ctime>
#include <queue>
#include <list>
#include <map>
#include <set>

using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
// #define ss second
 
const double pi=3.1415926535897932384626433832;
const long long mod=1e9+7;
//long long primeset[5000000]={};
//typedef complex<double> cd;
typedef long long ll;
typedef double ld;
#define For(i,p,n,q) for(long long i = p ; i<n ;i+=q)
#define FOR(i,p,n) for(long long i = p ; i<n ;i++)
 
//-----------------------------------gourab337----------------------------------
// a =97

int main()
{

freopen("input/a_example", "r", stdin);    
    freopen("input/a_example_out.txt", "w", stdout);
 
    int M,T2,T3,T4;
    int I[100];
    int i,j;
    string in[100][100];
    char t;
 
    scanf("%d %d %d %d",&M,&T2,&T3,&T4);    
    for(i=0;i<M;i++) {
        scanf("%d",&I[i]);
        //scanf("%c",&t);
        for(j=0;j<I[i];j++) {
            cin >> in[i][j];
            //scanf("%c",&t);
        }      
    }
 
    /*printf("%d %d %d %d",M,T2,T3,T4);
    printf("\n");
    for(i=0;i<M;i++) {
        printf("%d ",I[i]);
        for(j=0;j<I[i];j++) {
            cout << in[i][j] << " ";
        }
        printf("\n");  
    }*/
 


return 0;
}
