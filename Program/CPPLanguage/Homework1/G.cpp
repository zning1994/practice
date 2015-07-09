#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
struct CPLX
{
    int a,b;
};
void get_cplx(struct CPLX *cx)
{
    cin>>cx->a>>cx->b;
}
void put_cplx(struct CPLX cx)
{
    cout<<cx.a<<" "<<cx.b<<endl;
}
struct CPLX add_cplx(struct CPLX cx1, struct CPLX cx2)
{
    struct CPLX result;
    result.a=cx1.a+cx2.a;
    result.b=cx1.b+cx2.b;
    return result;
}
struct CPLX sub_cplx(struct CPLX cx1, struct CPLX cx2)
{
    struct CPLX result;
    result.a=cx1.a-cx2.a;
    result.b=cx1.b-cx2.b;
    return result;
}
int main()
{
    struct CPLX ab, cd;
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        get_cplx(&ab);
        get_cplx(&cd);
        put_cplx( add_cplx(ab, cd) );
        put_cplx( sub_cplx(ab, cd) );
    }
    return 0;
}
