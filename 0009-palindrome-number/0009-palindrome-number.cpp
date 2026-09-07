class Solution {
public:
int a[100];
int i = 0;
int b[100];
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        while(x>0){           
           a[i] = x % 10;          
            x = x/10;
            i++;
        }
        int k=0;
        for(int j =i-1 ; j>=0;j--){
            b[k]=a[j];
            k++;
        }
        for (int k=0;k<i;k++){
            if(a[k]!=b[k]){
                return false;
            }
           
        }
        return true;
    }
};