#include<stdio.h>
#include<stdlib.h>  
#include<math.h>  
#include<float.h>
#include<time.h>

#define PI 3.14159265358979323846  /* pi */
#define e 1.0e-12
int main()
{
    double x0 = PI;//ȡ�ĳ�ʼֵ
    double x1 = 0.0;//��x0�����x1����ʼֵ�ȸ���0
    double fx = 0.0;//f��x��
    double fxp = 0.0;//f��x���ĵ���
    double faix = 0.0;//������,ţ�ٵ�����ʽ faix =x-(fx/fxp)
    int i = 0;//�����������
    while (fabs((x0 - x1) / x1) > e)//�ж����ε�������֮���������뾫�ȱȽ�
    {
        x1 = x0;//��x1����ϴε�x0
        fx = sin(x0) - x0 / 2;
        fxp = cos(x0) - 0.5;
        faix = x0 - fx / fxp;
        x0 = faix;//��������Ľ�������ϴδ���ֵ����������һ�δ���ʹ��
        i++;//�������
        printf("��%d�ε������������Ϊ��,%+.12e  \n", i, x1);
    }
}
