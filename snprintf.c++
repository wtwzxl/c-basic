

/**
int snprintf(char *restrict buf,  size_t n,  const char * restrict  format, ...);
函数说明:最多从源串中拷贝n－1个字符到目标串中，然后再在后面加一个0。所以如果目标串的大小为n 的话，将不会溢出。
函数返回值:若成功则返回欲写入的字符串长度，若出错则返回负值。


*/
/* snprintf example */
#include <stdio.h>
/*在vs2012 下面要作如下定义*/
#if _MSC_VER
#define snprintf _snprintf_s
#endif
/*下面代码来源于：http://www.cplusplus.com/reference/cstdio/snprintf/*/
int main ()
{
  char buffer [100];
  int cx;

  cx = snprintf ( buffer, 100, "The half of %d is %d", 60, 60/2 );

  if (cx>=0 && cx<100)      // check returned value

    snprintf ( buffer+cx, 100-cx, ", and the half of that is %d.", 60/2/2 );

  puts (buffer);
  system("pause");   //add by myself
  return 0;
}
