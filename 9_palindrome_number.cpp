#include <iostream>

class Solution {
public:
		bool isPalindrome(int x){
			int y = x;
			long long res = 0;
			while(x){
				res = res*10 + x%10;
				x = x/10;
			}
			if (x<INT_MIN || x>INT_MAX){
				return 0;
			}else{
				return (res == y);
			}
		}
};
/*
int main(){
	Solution a;
	bool b = a.isPalindrome(121);
	bool c = a.isPalindrome(1234321);
	bool d = a.isPalindrome(123);
	bool e = a.isPalindrome(0);
	printf("%d,%d,%d,%d \n",b,c,d,e);
}
*/
