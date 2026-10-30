# include <stdio.h>
int main(void)
{
    long long n,temp,digit,reverse=0,sum=0;
    int count=0;
    printf("enter a positive integer:");
    scanf("%lld",&n);
    if(n<=0)
    { printf("please enter a positive integer.\n");
    return 0;
}
temp=n;
while(temp>0)
{
    digit=temp%10;
    count++;
    sum=sum+digit;
    reverse=reverse*10+digit;
    temp=temp/10;
}
printf("number of digits=%d\n",count);
printf("sum of digits=%lld\n",sum);
printf("reversed number=%lld\n", reverse);
if(reverse==n)
printf("%lld is a pallindrome.\n",n);
else
printf("%lld is not a pallindrome.\n",n);
return 0;
}