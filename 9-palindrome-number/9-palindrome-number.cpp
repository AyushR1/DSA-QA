class Solution {
public:
    bool isPalindrome(int x) {
        long n=x;
        long rev=0;
        while (n>0){
            rev=(n%10)+rev*10;
        n/=10;}
        cout << rev;
        if (x==rev)
            return true;
        
        return false;
            
    }
};