#include "stdio.h"
#include <conio.h>
#include <string.h>
//�Ӵ�С����
void myline(char m_input[])
{
    int m_len = 0;
    m_len = strlen(m_input);

//���������������������������������񲻹�����
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
    char line[21]; // 20���ַ� + '\0'
    gets( line );   //ע�����ֻ�ܽ���20���ַ�
// ������ gets_s ��������.
    char * m_input;
    m_input = line;
    myline(m_input);//����
    printf( "The result line is: %s\n", m_input );


    getch();
    return 0;
}
