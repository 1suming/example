#include <stdio.h>
#include <stdlib.h>

int 
main(int argc, char **argv)
{
	char *temp = "1234567890";
	
	char buff[11] = {0};
	int r;
	
	sprintf(buff, "%.2s", temp); // ".2"表示最大宽度
	printf("buff: %s\n", buff);
    printf("buff: %02x\n", *buff);
	printf("buff: %.2x\n", *buff);
    
	printf("NUMBER: %010d\n", 123456);
    printf("NUMBER: %*.*d\n", 10, 2, 123456);
    printf("NUMBER: %0*.*f\n", 10, 2, 123456.123456);
    printf("NUMBER: %.*f\n", 2, 123456.123456);
	printf("NUMBER: %10d\n", 123456); // 最小输出宽度 10 小于的话就补0
	printf("NUMBER: %10.4f\n", 123456.123456);
	printf("NUBMER: %a\n", 123456);
	
	printf("STRING: %010.4s\n", "123456");
	printf("STRING: %.10s\n", "123456");
	printf("STRING: %*.*s\n", 10, 4, "123456");
	printf("STRING: %*.*s\n", 10, 10, "123456");
	printf("STRING: %*.*s\n", 10, 4, "123456");
	
	printf("NUMBER: %#lx\n", 123456);
	printf("NUMBER: %ld\n", 123456);
	printf("NUMBER: 0%lo\n", 123456);
	printf("NUMBER: %6.4d\n", 1);
	printf("NUMBER: %Lf\n", 1323123123.232323);
	system("pause");
	return 0;
}
