# Greedy

# Assign Cookies

[https://leetcode.com/problems/assign-cookies/](https://leetcode.com/problems/assign-cookies/)

Child hve cookies with size s and greed g

if s>g content

Approach➖

- sort desc g,s
- if condition true count++ else move to another child

```cpp
int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end(),greater<int>());
           sort(s.begin(),s.end(),greater<int>());
       int count=0,i=0,j=0;
       while (i<s.size() && j< g.size()){
            if (s[i] >= g[j]){
                count++;
                i++;
                j++;}
            else j++;
        }
        return count;
```

# Fractional Knapsack

Approach

sort using compare function.

loop through available items.

```cpp
   static bool compare(Item a, Item b){
           double ratio1 = (double) a.value/a.weight;
       double ratio2 = (double) b.value/b.weight;
       return ratio1>ratio2;
    }
    //Function to get the maximum total value in the knapsack.
   double fractionalKnapsack(int W, Item arr[], int n)
   {
      sort(arr,arr+n,compare);
      double maxval = 0.0;
      
      for(int i=0;i<n;i++){
          
          int val = arr[i].value;
          int wt = arr[i].weight;
          
          if(W>wt){
              maxval+=val;
              W-=wt;
          }else{
              maxval+=W*((double) val/wt);
              W=0;
          }
      }
      return maxval;
   }
```