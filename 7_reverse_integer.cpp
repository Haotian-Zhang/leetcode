#include <climits>
#include <cstdint>
#include <iostream>

class Solution {
public:
		int reverse(int x){
			long long res = 0;
			while(x){
				res = res*10 + x%10;
				x = x/10;
			}
			return (res<INT_MIN || res>INT_MAX) ? 0 : res;
		}
};

/*
int main(){
	Solution a;
	long long b = a.reverse(-123);
	if(b == -321){
		printf("True\n");
	}else{
		printf("False\n");
	}
	return 0;
}
*/

