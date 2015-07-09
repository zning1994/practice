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
            cout<<"车辆已经行驶！"<<endl;
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
                cout<<"车速太快！先减速再停车"<<endl;
        else
            cout<<"车辆未启动！"<<endl;

    }
    void speed_up()
    {
        if(now==stopped)
        {
            cout<<"车辆未启动！"<<endl;
            return;
        }
        if(++nowfast>maxfast)
        {
            cout<<"请不要超速行驶！"<<endl;
            nowfast--;
            return ;
        }
    }
    void slow_down()
    {
        if(now==stopped)
        {
            cout<<"车辆未启动！"<<endl;
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
            cout<<"状态: 停止"<<endl;
        else
            cout<<"状态: 已启动"<<endl;
        cout<<"速度: "<<nowfast<<endl;
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
            cout<<"车辆正在行驶，停车后再上下车！"<<endl;
            return ;
        }
        if(++p>maxp)
        {
            p--;
            cout<<"涉嫌超员，已清理后达到满员！"<<endl;
            return ;
        }
    }
    void passengerOff()
    {
        if(now==running)
        {
            cout<<"车辆正在行驶，停车后再上下车！"<<endl;
            return ;
        }
        if(--p<1)
        {
            p=1;
            cout<<"请司机不要离开岗位！"<<endl;
            return ;
        }
    }
    void show()
    {
        if(now==stopped)
            cout<<"状态: 停止"<<endl;
        else
            cout<<"状态: 已启动"<<endl;
        cout<<"速度: "<<nowfast<<endl;
        cout<<"乘客数量: "<<p<<endl;
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
            cout<<"机动车:"<<endl;
        }
        else
        {
            cin>>maxS;
            v=new bicycle(maxS);
            cout<<"自行车:"<<endl;
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
