#include <iostream>
#include <assert.h>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;

class String
{
private:
    char* p_str;
    size_t len;
    void setstring(size_t ,const char*);
public:
    String(){len=0;setstring(len,"");}
    String(const String& ns){
        len=ns.len;
        setstring(len,ns.p_str);
    }
    String(char* ns)
    {
        len=strlen(ns);
        p_str=new char[len+1];
        strcpy(p_str,ns);
    }
    String(const char* ns)
    {
        len=strlen(ns);
        p_str=new char[len+1];
        strcpy(p_str,ns);
    }
    String(size_t len1,const char& ch){
        len=len1;
        p_str=new char[len+1];
        size_t i;
        for(i=0;i<len1;i++)
            p_str[i]=ch;
        p_str[i]='\0';
    }
    String(size_t len1)
    {
        len=len1;
        p_str=new char[len+1];
    }
    ~String(){};
    String &operator=(const String &str);
    String &operator=(const char* str);
    String operator+(const String &str)const;
    const char &operator[](size_t index)const;
    String substr(size_t pos,size_t lenth);        ///*求子集
    friend ostream &operator<<(ostream &os,const String &str1);   ///对输出运算符的重载；
    friend istream &operator>>(istream &is ,String &str1); ///对输出运算符的重载；
    char &operator[](size_t index);
    bool operator==(const String &str);
    bool operator>(const String &str);
    bool operator<(const String &str);
    bool operator<=(const String &str);
    bool operator>=(const String &str);
    bool operator!=(const String &str);
    String &operator+=(const String &str);
    const int length()const {return len;};
    const char* c_str()const{return p_str;};
    const bool empty()const{return len==0;};
    String& insert(size_t pos,String& str);
    String& erase(size_t pos,size_t lenth);
    void swap(String& str);
    int find(char* str);
    void replace(size_t pos,size_t size,String str);
};
    void String::replace(size_t pos,size_t size,String str)
    {
        if(pos>len-1||pos<0||pos+size>len||size<0)
        {
            cout<<"index error"<<endl;
            return;
        }
        erase(pos,size);
        insert(pos,str);
    }
    int String::find(char* str)
    {
         size_t i;
         int len1=strlen(str);
         for(i=0;i+len1<=len;i++)
         {
             if(strcmp(str,substr(i,len1).p_str)==0)
             return i;
         }
         return -1;
    }
    void String::swap(String& str)
    {
        String temp(str);
        str=*this;
        *this=temp;
    }
    String& String::insert(size_t pos,String& str)
    {
      if(pos>strlen(p_str)||pos<0)///right
      {
        cout<<"index error"<<endl;
        return *this;
      }
        String temp2=substr(0,pos);
        String temp3;
        if(pos!=len)
        temp3=substr(pos,(strlen(p_str)-pos));
        char *temp=this->p_str;
        len+=strlen(str.p_str);
        p_str=new char[len+1];
        strcpy(p_str,temp2.p_str);
        strcat(p_str,str.p_str);
        strcat(p_str,temp3.p_str);
        delete temp;
        return *this;
    }
    String& String::erase(size_t pos,size_t lenth)
    {
    if(pos>strlen(p_str)-1||pos<0||pos+lenth>strlen(p_str)||lenth<0)///right
      {
        cout<<"index error"<<endl;
        return *this;
      }
      char* temp=p_str;
      String temp2;
      temp2=substr(0,pos);
      String temp3;
      if(lenth+pos!=len)
      temp3=substr(lenth+pos,strlen(p_str)-lenth-pos);
      p_str=new char[len-lenth+1];
      delete temp;
      strcpy(p_str,temp2.p_str);
      if(lenth+pos!=len)
      strcat(p_str,temp3.p_str);
      len=strlen(p_str);
      return *this;
    }
    bool String::operator!=(const String &str)
    {
        return strcmp(str.p_str,p_str)!=0;
    }
    bool String::operator>=(const String &str)
    {
        return strcmp(str.p_str,p_str)>=0;
    }
    bool String::operator<=(const String &str)
    {
        return strcmp(str.p_str,p_str)<=0;
    }
    bool  String::operator==(const String &str)
    {
        return strcmp(str.p_str,p_str)==0;
    }
    bool String::operator>(const String &str)
    {
        return strcmp(p_str,str.p_str)>0;
    }
    bool String::operator<(const String &str)
    {
        return strcmp(p_str,str.p_str)<0;
    }
    String &String::operator+=(const String &str)
    {
        String temp1(str);
        char *temp=this->p_str;
        len+=temp1.len;
        p_str=new char[len+1];
        strcpy(p_str,temp);
        delete temp;
        strcat(p_str,temp1.p_str);
        return *this;
    }
String String::operator+(const String &str)const
{
    String nstr;
    nstr.len=len+str.len;
    nstr.p_str=new char[nstr.len+1];
    strcpy(nstr.p_str,p_str);
    strcat(nstr.p_str,str.p_str);
    return nstr;
}
String String::substr(size_t pos,size_t lenth)
{
    String ret;
    if(pos>len-1||pos<0||pos+lenth>len||lenth<0)
    {cout<<"index error"<<endl;
    return ret;}
    size_t i;
    ret.len=lenth;
    ret.p_str=new char[lenth+1];
    for(i=pos;i<pos+lenth;i++)
    {
        ret.p_str[i-pos]=p_str[i];
    }
    ret.p_str[i-pos]='\0';
    return ret;
}
String& String::operator=(const char* str)
{
        if(len<strlen(str)-1)
        {
            delete p_str;
            p_str=new char[strlen(str)+1];
        }
            strcpy(p_str,str);
            len=strlen(str);
        return *this;
}
String& String::operator=(const String &str)
{
    if(this==&str)
        return *this;
        if(len<str.len)
        {
           delete p_str;
           p_str=new char[str.len+1];
        }
    len=str.len;
    setstring(len,str.p_str);
    return *this;
}
void String::setstring(size_t length,const char* ch)
{
       p_str= new char[length+1];
       if(ch!=NULL)
       {
           strcpy(p_str,ch);
       }
       else p_str[0]='\0';

}
const char &String::operator[](size_t index)const
 {
     assert(index>=0&&index<=len);
     return p_str[index];
 }
char &String::operator[](size_t index)
{
    assert(index>=0&&index<=len);
    return p_str[index];
}
ostream &operator<<(ostream &os,const String &str1)
{
    size_t i;
    for(i=0;i<str1.len;i++)
        os<<str1.p_str[i];
        return os;
}
istream &operator>>(istream &is ,String& str1)
{
    char temp[200];
    is>>temp;
    str1=temp;
    return is;
}
int main()
{
    freopen("out","w",stdout);
    char a[100], b[100], c[100];
    cin>>a>>b>>c;
    String s1(a);
    String s2(b);
    const String s3(c);

    cout<<"s1:   "<<s1<<"  size:  "<<s1.length()<<endl;
    cout<<"s2:   "<<s2<<"  size:  "<<s2.length()<<endl;
    cout<<"s3:   "<<s3<<"  size:  "<<s3.length()<<endl;


    s1 = s2;
    cout<<"operator=:\ns1:   "<<s1<<endl;

    s1 += s3;
    cout<<"operator+=:\ns1:   "<<s1<<endl;

    String s4 = s1+s2;
    cout<<"operator+:\ns4:   "<<s4<<endl;

    int i,j;
    char d;
    cin>>i>>d;
    s2[i]=d;
    cout<<"operator[]:\ns2:   "<<s2<<endl;
    cout<<"operator[]:\ns3["<<i<<"]:  "<<s3[i]<<endl;

    return 0;
}
