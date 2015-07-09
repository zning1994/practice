#include <iostream>
#include <cstdio>
#define running true
#define stopped false
using namespace std;
class vehicle
{
protected:
    int maxfast,nowfast;
    bool now;
public:
    vehicle(int maxf):maxfast(maxf),nowfast(0),now(stopped) {}
    virtual ~vehicle() {}
    virtual void show() {}
    void start()
    {
        if(now==running)
        {
            cout<<"�����Ѿ���ʻ��"<<endl;
            return ;
        }
        else
            nowfast=1,now=running;
    }
    void stop()
    {
        if(now==running)
            if(nowfast<5)
                nowfast=0,now=stopped;
            else
                cout<<"����̫�죡�ȼ�����ͣ��"<<endl;
        else
            cout<<"����δ������"<<endl;

    }
    void speed_up()
    {
        if(now==stopped)
        {
            cout<<"����δ������"<<endl;
            return;
        }
        if(++nowfast>maxfast)
        {
            cout<<"�벻Ҫ������ʻ��"<<endl;
            nowfast--;
            return ;
        }
    }
    void slow_down()
    {
        if(now==stopped)
        {
            cout<<"����δ������"<<endl;
            return;
        }
        if(--nowfast<=0)
            now=0;
    }
};
class bicycle : public vehicle
{
public:
    bicycle(int maxf):vehicle(maxf) {}
    void show()
    {
        if(now==stopped)
            cout<<"״̬: ֹͣ"<<endl;
        else
            cout<<"״̬: ������"<<endl;
        cout<<"�ٶ�: "<<nowfast<<endl;
    }
};
class motorcar : public vehicle
{
private:
    int p,maxp;
public:
    motorcar(int a,int b):vehicle(a),maxp(b)
    {
        p=1;
    }
    void passengerOn()
    {
        if(now==running)
        {
            cout<<"����������ʻ��ͣ���������³���"<<endl;
            return ;
        }
        if(++p>maxp)
        {
            p--;
            cout<<"���ӳ�Ա���������ﵽ��Ա��"<<endl;
            return ;
        }
    }
    void passengerOff()
    {
        if(now==running)
        {
            cout<<"����������ʻ��ͣ���������³���"<<endl;
            return ;
        }
        if(--p<1)
        {
            p=1;
            cout<<"��˾����Ҫ�뿪��λ��"<<endl;
            return ;
        }
    }
    void show()
    {
        if(now==stopped)
            cout<<"״̬: ֹͣ"<<endl;
        else
            cout<<"״̬: ������"<<endl;
        cout<<"�ٶ�: "<<nowfast<<endl;
        cout<<"�˿�����: "<<p<<endl;
    }
};
int main( )
{
    freopen("out","w",stdout);
    vehicle * v;
    int n, maxS, maxP;
    for (int j=0; j<2; j++)
    {
        if(j==0)
        {
            cin>>maxS>>maxP;
            v=new motorcar(maxS, maxP);
            cout<<"������:"<<endl;
        }
        else
        {
            cin>>maxS;
            v=new bicycle(maxS);
            cout<<"���г�:"<<endl;
        }
        cin>>n;
        int op;
        motorcar* pm;
        for (int i=0; i<n; i++)
        {
            int t=0;
            cin>>op;
            switch(op)
            {
            case 1:
                v->start();
                break;
            case 2:
                v->stop();
                break;
            case 3:
                cin>>t;
                for (int s=0; s<t; s++)
                    v->speed_up();
                break;

            case 4:
                cin>>t;
                for (int s=0; s<t; s++)
                    v->slow_down();
                break;
            case 5:
                cin>>t;
                pm = dynamic_cast<motorcar* >(v);
                if (pm)
                {
                    for (int s=0; s<t; s++)
                        pm->passengerOn();
                }
                break;
            case 6:
                cin>>t;
                pm = dynamic_cast<motorcar* >(v);
                if (pm)
                {
                    for (int s=0; s<t; s++)
                        pm->passengerOff();
                }
                break;
            }
        }
        v->show();
    }
    return 0;
}
