#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#incllude<sys/wait.h>
#include<string.h>
int main()
{
  int fd1[2],fd2[2],n;
  char buffer[10];
  pid_t p;
  pipe(fd1);
  pipe(fd2);
  p=fork();
  if(p>0)
  {
     close(fd[0]);
     printf(“Enter a string”);
     scanf(“%s”,buffer);
     write(fd[1],buffer,10);
      wait(0);
   }
  else
  {
     close(fd[1]);
     n=read(fd[0],buffer,10);
     write(1,buffer,n);
  }
}
void conversion(string &str)
{
  int l=str.length();
  for(int i=0; i<l; i++)
 {
   if(str[i]>=’a’&& str[i]<=’z’)
   {
      srt[i]=str[i]-32;
    }
    else(str[i]>=’A’ && str[i]<=’Z’)
    {
       str[i]=str[i]+32;
    }
   }
}
int main()
{
   string str=”Hi There”;
   conversion(str);
   printf("Converted String is %s",str);
   return 0;
}
