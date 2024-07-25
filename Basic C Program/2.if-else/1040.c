#include<stdio.h>
int main()
{
    float a,b,c,d,avg=0,x;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    avg=(((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1));
    printf("Media: %.1f\n",avg);
    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");


    }else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");

    }else if(avg>5.0 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        float e;
        scanf("%f",&e);
        printf("Nota do exame: %.1f\n",e);
        x=(avg+e)/2.0;
        if(avg>=5.0)
        {
          printf("Aluno aprovado.\n");
        }else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",x);
    }

    return 0;
}
