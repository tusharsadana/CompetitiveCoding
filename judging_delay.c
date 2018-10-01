#include<stdio.h>
int main()
{
  int t;
  scanf("%d\n",&t );
  int i,n;
  int matrix[100][2];
  int count = 0 ;
  for (i = 0; i < t; i++) {
    count = 0;
    /* code */
    scanf("%d\n",&n );
    for (int r = 0; r < n; r++) {
      /* code */
      scanf("%d%d",&matrix[r][0], &matrix[r][1]  );

    }
    for (int j = 0; j < n; j++) {
      /* code */
      if(matrix[j][1] - matrix[j][0] > 5)
      count++;
    }

    printf("%d\n",count );



  }
return 0;

}
