class Solution
{
    public:
        int reverse(int x)
        {
                
            long long rev = abs(x);
            
long long t=0;
            while (rev > 0)
            {
                t =  (rev % 10) + t* 10;
                if (t > 2147483648 - 1)
                    return 0;
                rev /= 10;
            }
            
            if (x>0)
            return t;
            else return -t;
        }
};