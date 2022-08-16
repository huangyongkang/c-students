#include <stdio.h>
#define INCHES_PER_FOOT "success"
int main (void)                  // 首先我们解析第一行,int 来定义函数的返回值（始终是个整数值），定义函数的名字叫做main,小括号内部是void表示没有参数。
{                                // 执行包裹体， 开始大括号
  printf("Be careful!!");        // 事件对应的执行内容
  printf(INCHES_PER_FOOT);
  return 0;                      // 事件对应的执行内容
}                                // 结束大括号

// #define INCHES_PER_FOOT 12

// printf("Hello world");