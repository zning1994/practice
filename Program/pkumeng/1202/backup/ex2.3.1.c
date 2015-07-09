#include "stdio.h"
#include <conio.h>
#include <string.h>
//从大到小排序
void myline(char m_input[])
{
    int m_len = 0;
    m_len = strlen(m_input);

//排序这里可以想想用其它方法，这个好像不够简练
    for(int i = 0; i < m_len; i++)
        for(int j = 0; j < m_len - 1; j ++)
        {
            if(m_input[j] < m_input[j + 1])
            {
                char m_buf;
                m_buf = m_input[j];
                m_input[j] = m_input[j + 1];
                m_input[j + 1] = m_buf;
            }
        }


}
int _tmain(int argc, _TCHAR* argv[])
{
    char line[21]; // 20个字符 + '\0'
    gets( line );   //注意最大只能接受20个字符
// 考虑用 gets_s 函数代替.
    char * m_input;
    m_input = line;
    myline(m_input);//排序
    printf( "The result line is: %s\n", m_input );


    getch();
    return 0;
}
