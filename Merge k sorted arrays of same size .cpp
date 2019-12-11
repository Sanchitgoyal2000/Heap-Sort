int *mergeKArrays(int arr[][N], int kk) //time = O(n^3)
{
    int n=kk;
    int *a=(int *)malloc(kk*N*sizeof(int));
    int p=0,h=0,j,i,k;
    for(i=0;i<kk;i++)       //at first merge two arrays into a new array so use h as a flag
    {
        if(h==0)
        {
           h=1;
           j=0;
           k=0;
            while(j<n&&k<n)
            {
                if(arr[i][j]<arr[i+1][k])
                {
                    a[p]=arr[i][j];
                    p++;
                    j++;
                }
                else
                {
                    a[p]=arr[i+1][k];
                    p++;
                    k++;
                }
            }
            while(j<n)
            {
              a[p]=arr[i][j];
              p++;
              j++;
            }
            while(k<n)
            {
              a[p]=arr[i+1][k];
              p++;
              k++;
            }
            i++;
        }
    else                      //now merge array with new array
    {
      for(j=n-1;j>=0;j--)
      {
          int last=a[p-1];
          for(k=p-2;k>=0&&a[k]>arr[i][j];k--)
          {
              a[k+1]=a[k];
          }
          if(k!=p-2||last>arr[i][j])
          {
              a[k+1]=arr[i][j];
              arr[i][j]=last;
          }
      }
      int temp=0;
      for(int l=p;l<p+n;l++)
      {
          a[l]=arr[i][temp];
          temp++;
      }
      p=p+n;
    }
    }
    return a;
}

