# ha-sh

参考链接
<a>https://github.com/jamesroutley/write-a-hash-table/tree/master/02-hash-table</a>
学习用C写一个hash表



---------
知识点：

1. calloc && malloc
   1. 都是动态分配内存的函数， 在<i>stdlib.h</i>中
   2. calloc两个参数，为元素数目和元素大小，分配后自动初始化为0
   3. malloc 未初始化，需要使用memset
2. memset
   1. void* memset(void *str, int c , size_t n)
   2. 复制字符c（unsigned）到str所指向字符串的前n个字符；
   3. string.h中，int类型一般赋值为0或-1
3. strdup
   1. 字符串拷贝，自动分配内存，自己手动分配完内存后不能使用该函数，会导致指针被覆盖，内存泄漏
   2. char *strdup(const char *s); 
   3. string.h
4. double pow(double, double)
   1. 幂级数
5. strcmp()
   1. int strcmp(const char *str1, const char *str2)
   2. 把 str1 所指向的字符串和 str2 所指向的字符串进行比较
      1. 如果返回值小于 0，则表示 str1 小于 str2。
      2. 如果返回值大于 0，则表示 str1 大于 str2。
      3. 如果返回值等于 0，则表示 str1 等于 str2。
   3. string.h
6. floor
   1. C 库函数 double floor(double x) 返回小于或等于 x 的最大的整数值
   2. double floor(double x)
   3. math.h
7. 