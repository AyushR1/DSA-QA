# Recursion

- Base Case
- Probm subprblm relation
- genralise

# Recursive Summation

1^3 + 2^3…..

not the best in time complexity

```cpp
{
      if (N==0)
      return 0;
      long long sum;
      sum=N*N*N;
      return sum + sumOfSeries(N-1);
      
    }
```

# Fibonacci No.

```cpp
int fib(int n) {
        if(n==0 || n==1)
            return n;
        
        return fib(n-1)+fib(n-2);
      
    }
```