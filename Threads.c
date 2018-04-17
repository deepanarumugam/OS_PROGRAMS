#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

void *fun1();
void *fun2();
void *fun3();

int a[7], n, I;
pthread_mutex_t 1;
int main()
{
pthread_mutex_init(&1, NULL);
pthread_t thread1, thread2, thread3;
pthread_create(&thread1, NULL, fun1, NULL);
pthread_create(&thread2, NULL, fun2, NULL);
pthread_create(&thread3, NULL, fun3, NULL);
pthread_join(thread1, NULL);
pthread_join(thread2, NULL);
pthread_joib(thread3, NULL);

printf(“Enter the size of array\n”);
scanf(“%d”,&n);
printf(“Enter array elements:\n”);
for(i=0;i<n;i++)
scanf(“%d”,&a[i]);
printf(“Average value is %d\n”,avg);
printf(“Maximum value is %d\n”,max);
printf(“Minimum value is %d\n”,min);
}

Void *fun1(int a[], int n)
{
Int x, avg;
Pthread_mutex_lock(&1);
int sum=0;
x=a;
for(int i=0; i<n; i++)
{
Sum=a[i]+a[i-1];
}
avg=sum/n
sleep(1);
a=x;
pthread_mutex_unlock(&1);
}

Void *fun2(int a[])
{
int y, min;
pthread_mutex_lock(&1);
y=a;
min=a[0];
for(int i=0;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
sleep(1);
a=y;
pthread_mutex_unlock(&1);
}
void *fun3(int a[])
{
int z;
pthread_mutex_lock(&1);
z=a;
max=a[0];
for(int i=0, i<n, i++)
{
if(a[i]>max)
max=a[i];
}
sleep(1);
a=z;
pthread_mutex_unlock(&1);
}
