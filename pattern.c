#include <stdio.h>

void patterns(int count,char str){
  for (int i = count; i > 0; i--){
      for (int j = 0; j < i; j++) {
          printf("%c",str);
      }
      printf("\n");
  }
}

int main()
{
    int num;
    char str;
    printf("Enter pattern size :");
    scanf("%d",&num);
    printf("Enter pattern :");
    scanf("\n%c",&str);
    patterns(num,str);
    return 0;
}
