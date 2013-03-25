#include <iostream>
#include<vector> 
#include<list> 
#include<map> 
#include<set> 
#include<deque> 
#include<queue> 
#include<stack> 
#include<bitset> 
#include<algorithm> 
#include<functional> 
#include<numeric> 
#include<utility> 
#include<iostream> 
#include<sstream> 
#include<iomanip> 
#include<cmath> 
#include<cstdlib> 
#include<cctype> 
#include<string> 
#include<cstring> 
#include<cstdio> 
#include<ctime> 
#include<climits> 
#include<complex> 
#define N 100000
using namespace std;


void merge(int a[N],int p,int r,int q)
{
   int lena,lenb;
   int cura,curb,cur;
   lena = r-p+1;
   lenb = q-r;
   int aa[lena],bb[lenb];
   //init
   memset(aa,0,lena);
   memset(bb,0,lenb);
   cur = p;
   cura = curb = 0;
   for(int i=0;i<lena;i++) {aa[i] = a[p+i];}
   for(int i=0;i<lenb;i++) {bb[i] = a[r+1+i];}
 
   while(cura < lena && curb < lenb)
   {
	  if(aa[cura] < bb[curb])
	  {
		 a[cur] = aa[cura];
		 cura ++;
	  }
	  else
	  {
		 a[cur] = bb[curb];
		 curb ++;
	  }
	  cur ++;
   }

   //将剩下的元素加入a
   if(cura < lena)
   {
	  for(int i=cura;i<lena;i++)
	  {
		 a[cur] = aa[i];
		 cur ++;
	  }
   }
   else
   {
	  for(int i=curb;i<lenb;i++)
	  {
		 a[cur] = bb[i];
		 cur ++;
	  }
   }

}


void merge_sort(int a[N],int p,int q)
{
   if(p<q)
   {
	  int r = (p+q)/2;
	  merge_sort(a,p,r);
	  merge_sort(a,r+1,q);
	  merge(a,p,r,q);
    
   }
}

int main()
{
   int a[N],len;
   cin>>len;
   memset(a,0,N);
   
   for(int i=0;i<len;i++){a[i] = rand();}

   merge_sort(a,0,len-1);
   for(int j=0;j<len;j++){cout<<a[j]<<endl;}
   return 1;
  
}

