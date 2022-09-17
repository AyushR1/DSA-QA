# Sorting

# Bubble Sort

swap adjacent elements in two loops

```cpp
**void bubbleSort(int arr[], int n)
    {for (int i = 0; i < n - 1; i++) {
        for(int i=0;i<n-1;i++)
        if (arr[i]>arr[i+1])
        swap(&arr[i],&arr[i+1]);
    }}**
```

# Merge Sort

merge sort until l≥right

call merge sort 

from l to mid, mid+1 to right

**call merge**

make two sub araays with elements from l to mid, mid+1 to right  starting from 0.

compare min of two array and put it main array

put left elements.

```cpp
void merge(int arr[], int l, int m, int r)
    {   int maxone=m-l+1;
        int maxtwo=r-m;
        int leftarr[maxone];
        int rightarr[maxtwo];
        for (int i=0;i<maxone;i++)
        leftarr[i]=arr[l+i];
        for (int i=0;i<maxtwo;i++)
        rightarr[i]=arr[m+1+i];
        
        int i=0,j=0,k=l;
        while(i<maxone && j< maxtwo)
        {
            if (leftarr[i]>rightarr[j]){
            arr[k]=rightarr[j];
                j++;k++;
            }
            else {arr[k]=leftarr[i];
            
            i++;k++;}
        }
        
        while(i<maxone )
        {
            
            arr[k]=leftarr[i];
            
            i++;k++;
        }
        
        while(j< maxtwo)
        {
            arr[k]=rightarr[j];
            j++;k++;
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {   if (l>=r)
    return;
       int  mid =(l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr,mid +1,r);
        merge(arr, l, mid, r);
    }
```