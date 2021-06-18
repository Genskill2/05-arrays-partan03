/* Enter your solutions in this file */
#include <stdio.h>
int max(int marks[],int n)
{ int num=marks[0];
 for(int i=1;i<n;i++)
  {  if(marks[i]>num)
      num=marks[i];
        }
  return num;
}
int min(int marks[], int n)
{ int num=marks[0];
  for(int i=1;i<n;i++)
   {  if(marks[i]<num)
        num=marks[i];
          }
 return num;
}

float average(int marks[], int n)
{ int sum=0;
for(int i=0;i<n;i++)
{sum=sum+marks[i];
}
float averag=(float)(sum)/n;

return averag;
}


int mode(int mod[], int n)
{ 
    int k=max(mod,n);
    int m=min(mod,n);
    int l=k-m+1;
    int A[l];
int B[l];
    int j=0;
    for(int i=m;i<=k;i++)
    { A[j]=i;j++;}
    for(int p=0;p<l;p++)
    {int c=0;
    for(int q=0;q<n;q++)
    {if(A[p]==mod[q])
        c++;
    } if(c==0)
        B[p]=0;
        else
            B[p]=c;
    }
    int z;
    int h=max(B,l);
    for(int r=0;r<l;r++)
    {if(B[r]==h)
        z=A[r];
    }

    return z;
} 


int factors(int n, int fac[])
{int k=0;
    int i=2;int j=0;
    while(n!=1)
      {  if(n%i==0)
        { fac[j]=i;
        n=n/i;
        k++;j++;
        }
        else 
      {      i++;}
    }

      return k;

}
