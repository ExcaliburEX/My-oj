#include<iostream>

#include<stdio.h>

using namespace std;

int main()

{

    char a,x;

    double changshu=0,xishu=0,temp=0, jieguo=0;

    bool fuhao=false,you=false;

    while(cin>>a)

    {

        if(a>=48&&a<58)

        {

            temp=temp*10+(a-48);

        }

        else

            if(a==43)//����Ӻ�

            {

                if((fuhao==false&&you==false)||(fuhao==true&&you==true))

                changshu+=temp;

                else

                changshu-=temp;

                temp=0;

                fuhao=false;

            }

            else

                if(a==45)//����

            {

                if((fuhao==false&&you==false)||(fuhao==true&&you==true))

                changshu+=temp;

                else

                changshu-=temp;

                temp=0;

                fuhao=true;

            }

            else

                if(a==61)//�Ⱥ�

                {

                if(fuhao==false)

                changshu+=temp;

                else

                changshu-=temp;

                temp=0;

                you=true;

                fuhao=false;

                }

                else{  //����Сд��ĸ

                x=a;

                if(temp==0)

                temp=1;

                if((fuhao==false&&you==false)||(fuhao==true&&you==true))

                xishu+=temp;

                else

                xishu-=temp;

                temp=0;

                fuhao=true;

                }

    }

    //��������Ĵ���

                if(temp!=0)

               {if((fuhao==false&&you==false)||(fuhao==true&&you==true))

                changshu+=temp;

                else

                changshu-=temp;

                temp=0;

                fuhao=true;

               } 

   //  ����𰸲����

    jieguo=-changshu/xishu;

    printf("%c=%.3f",x,jieguo);

    return 0;

}
