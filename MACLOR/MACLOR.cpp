#include <iostream>
using namespace std;
unsigned long func(long y) {
	unsigned long ret;
	unsigned long x = y - 400;
		ret = 300 - ((long)(x)/(75) - (((x)/(75)) ^ (3))/(6) + (((x)/(75)) ^ (5))/(120)-(((x)/(75))^(7))/(5040)+(((x)/(75))^(9))/((long)362880)-(((x)/(75))^(11))/((long)39916800)+(((x)/(75)) ^(13))/((long)6227020800))*250;
	return ret;
}

int main()
{
	
	for (long i = 0; i < 800; i++) {
		cout << func(i)<<" ";
   }
}
