#include<stdio.h>
int main()
{
  int t;
  scanf("%d\n",&t );
  long long int n,x,s,a,b,pointer,i,j;

  for ( i = 0; i < t; i++) {
    /* code */
    scanf("%lld%lld%lld\n",&n, &x, &s );
    pointer = x;
    for ( j = 0; j < s; j++) {
      /* code */
      scanf("%lld%lld\n",&a, &b );
      if(a == pointer ){
        pointer = b;
      }
      else if( b == pointer){
        pointer = a;
      }
    }
    printf("%lld\n", pointer );



  }
}
