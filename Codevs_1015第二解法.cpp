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

            if(a==43)//输入加号

            {

                if((fuhao==false&&you==false)||(fuhao==true&&you==true))

                changshu+=temp;

                else

                changshu-=temp;

                temp=0;

                fuhao=false;

            }

            else

                if(a==45)//减号

            {

                if((fuhao==false&&you==false)||(fuhao==true&&you==true))

                changshu+=temp;

                else

                changshu-=temp;

                temp=0;

                fuhao=true;

            }

            else

                if(a==61)//等号

                {

                if(fuhao==false)

                changshu+=temp;

                else

                changshu-=temp;

                temp=0;

                you=true;

                fuhao=false;

                }

                else{  //输入小写字母

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

    //输入结束的处理

                if(temp!=0)

               {if((fuhao==false&&you==false)||(fuhao==true&&you==true))

                changshu+=temp;

                else

                changshu-=temp;

                temp=0;

                fuhao=true;

               } 

   //  算出答案并输出

    jieguo=-changshu/xishu;

    printf("%c=%.3f",x,jieguo);

    return 0;

}
