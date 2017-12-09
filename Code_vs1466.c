/*题目描述 Description
手机上的万年历坏了，请帮我算算今年有多少天。

输入描述 Input Description
共一行，年份

输出描述 Output Description
共一行，天数

样例输入 Sample Input
例1：2012

例2：2000

例3：1900

例4：1997

样例输出 Sample Output
例1：366

例2：366

例3：365

例4：365
*/


#include <stdio.h>
int main()
{
    int a;
	scanf("%d",&a);
	if((a%4==0&&a%100!=0)||(a%400==0)){
	
		printf("366");
	} else printf("365");
    return 0;
}


