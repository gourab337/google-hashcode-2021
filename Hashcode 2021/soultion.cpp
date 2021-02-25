#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<unordered_map>
using namespace std;
 
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
 
long long gcd(long long a, long long b) {
    if(a==0) return b;
    return gcd(b%a, a);
}
long long lcm(long long a, long long b) {
    return ( (a/gcd(a,b)) * b );
}
 
int main() {
    freopen("input/trail.txt", "r", stdin); // Reading from input file
    freopen("output/trail.txt", "w", stdout); // Writing to output file
 
    
 
    return 0;
}
