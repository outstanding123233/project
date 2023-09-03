#ifndef TOOLS_H
#define TOOLS_H

#include <stdio.h>
#include <stdbool.h>

//	从键盘获取指定长度的字符串
char* get_str(char* str,size_t hope_len);

//	从键盘获取密码
char* get_pass(char* str,size_t hope_len,bool is_show);

//	文件数据传输
void file_oi(int ofd,int ifd);

#endif//TOOLS_H

