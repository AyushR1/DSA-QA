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

# Quick Sort

pivot = arr[low];

i=left j=right

i++ if pivot is bigger

j— if pivor is smaller

if I,q crossed each other then swap arr[j[ 

Recurrence RElation= 2T(n/2) +n 

avg time = nlogn

worst case  : sorted array (ascending)

                     and if pivot is first then

Recurrence Tn = T(n-1) + n

o n^2

```cpp
public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if (low < high) {
            int pivot = partition(arr, low, high) ;
            quickSort(arr, low, pivot - 1)  ;
            quickSort(arr, pivot + 1, high)  ;
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int pivot = arr[low]  ;
        int i = low ;
        int j = high ;

        while (i < j) {

            while (arr[i] <= pivot && i <= high - 1) {
                i++  ;
            }

            while (arr[j] > pivot && j >= low) {
                j-- ;
            }

            if (i < j)
                swap(arr[i], arr[j])  ;
        }

        swap(arr[j], arr[low]) ;

        return j ;
    }
```

# Heap Sort

1.The tree satisfies Max-Heap property, the largest item is stored
at the root node.
2.Swap: Remove the root element and put at the end of the array
(nth position) Put the last item of the tree (heap) at the vacant
place.
3.Remove: Reduce the size of the heap by 1.
4.Heapify: Heapify the root element again so that we have the
highest element at root.
5.The process is repeated until all the items of the list are sorted