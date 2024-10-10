#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    // 设置区域
    setlocale(LC_CTYPE, ""); // 自动选择系统的区域设置

    wchar_t str[] = L"我是一只蜘蛛"; // 使用 L 前缀定义宽字符串
    wprintf(L"%lc\n", str[0]); // 使用 %lc 打印宽字符

    return 0;
}
