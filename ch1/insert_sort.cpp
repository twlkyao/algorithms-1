#include <iostream>
#include <cstdlib>
#include <ctime>
#define N 10005
using namespace std;
void InsertSort(int arr[N],int len)
{
   for(int i=1;i<len;i++)  
   {
	  int key = arr[i];
	  int j = i-1;//已排序数组边界
	  while(j>0 && arr[j]>key)
	  {
		 arr[j+1] = arr[j];
		 j -= 1;
	  }
	  arr[j+1] = key;
   }
}

int main()
{
   int len = 1000;
   int arr[N];
   for(int i=0;i<len;i++)
   {
	  arr[i] = rand();
   }
   InsertSort(arr,len);
   for(int j=0;j<len;j++)
   {
	  cout<<arr[j]<<" "<<endl;
   }
   return 1;
}
