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