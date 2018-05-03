#include<stdio.h>

//for array of integers and chars
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

/*for strings.
int cmpstr(const void* a, const void* b)
{
    const char* aa = *(const char**)a;
    const char* bb = *(const char**)b;
    return strcmp(aa,bb);
}*/

//qsort(array, n, sizeof(int), cmpfunc);

#define si(x) int x; scanf("%d",&x)
#define jsi(x) scanf("%d",&x)
#define jsl(x) scanf("%lld",&x)
#define sl(x) long long x; scanf("%lld",&x)
#define sc(x) char x; scanf("%c",&x)
#define ss(x) scanf("%s",x)
#define sf(x) float x; scanf("%f",&x)
#define sd(x) double x; scanf("%lf",&x)
#define pi(x) printf("%d",x)
#define pl(x) printf("%lld",x)
#define pc(x) printf("%c",h)
#define mod9  1000000007
#define pf(x) printf("%f",x)
#define pd(x) printf("%lf",x)
#define ps printf(" ")
#define pn printf("\n")
#define sa(x,z,n) long long x[10000]; for(int i=z;i<=n;i++) scanf("%lld",&x[i]);
#define pa(x,z,n) for(int i=z;i<=n;i++) printf("%lld ",x[i]); 
#define ll long long
#define pss(x) printf(x)
#define forr(i,z,n) for(int i=z;i<=n;i++)
#define forb(i,z,n) for(int i=z;i>=n;i--)
#define max(a,b) a>b ? a : b;
#define min(a,b) a<b ? a : b;

int main(void)
{
  // There you go,
  
  si(n);
  pi(n);

  
  
}
