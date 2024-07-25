/*Question:Print the pattern:
  *
  *
*****
  *
  * */
  #include<stdio.h>
  int main()
  {
      int i,j,n;
      printf("Enter the number:");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          if(i!=(n/2)+1){
          for(j=1;j<=n;j++)
          {
              if(j==(n/2)+1)
              printf("*");
              else
                printf(" ");
          }
          }else
          {
              for(j=1;j<=n;j++)
              {
                  printf("*");
              }
          }
          printf("\n");
      }
      return 0;
  }
