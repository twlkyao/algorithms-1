
#include <iostream>
#define N 100000;
using namespace std;

void merge_sort(int a[N],int p,int q)
{
   if(p<q)
   {
	  int r = (p+q)/2;
	  merge_sort(a,p,r);
	  merge_sort(a,r,q);
	  merge(a,p,r,q);
    
   }
}

void merge(int a[N],int p,int r,int q)
{
   int aa[N];
   int bb[N];
   int cur,curA,curB,lena,lenb;
   cura = p;
   curb = r+1;
   cur = p;
   memset(aa,0,N);
   memset(bb,0,N);
   lena = r-p+1;
   lenb = q-r;
   
   for(int i=0;i<lena;i++) aa[i] = a[i+p];
   for(int j=0;j<lenb;j++) bb[j] = a[j+r+1];
   
   while(cura<=r && curb<=q)
   {
	  if(aa[cura] <= bb[curb])
	  {
		 a[cur] = aa[cura];
		 cura += 1;
	  }
	  else
	  {
		 a[cur] = bb[curb];
		 curb += 1;
	  }
	  cur += 1;
   }

   //将剩下的元素合并进去
   if(cura != lena-1)
   {
	  for(int i=cura;i<;i++)
	  {
		 
	  }
   }
   else
   {
	  
   }
   
  
}



int main()
{
  
   return 1;
  
}

