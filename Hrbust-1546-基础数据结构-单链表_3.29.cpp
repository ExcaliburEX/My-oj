/*
�������ݽṹ����������1�� 
Time Limit: 1000 MS Memory Limit: 10240 K 
Total Submit: 1007(345 users) Total Accepted: 367(307 users) Rating: Special Judge: No 
Description 
����n���������Ȱ������������˳����һ����ͷ���ĵ�����������һ������m,���������е�ֵΪm�Ľ��ȫ��ɾ�����ֱ���������ĳ�ʼ����������ɾ����ĵ�����

Input 
��һ���������ݸ���n��

�ڶ�����������n��������

������������ɾ������m��

Output 
��һ�����ԭʼ������ĳ��ȣ�

�ڶ����������ԭʼ����������ݣ�

������������ɾ����ĵ������ȣ�

����������������ɾ����ĵ��������ݡ�

Sample Input 
10

56 25 12 33 66 54 7 12 33 12

12

Sample Output 
10

56 25 12 33 66 54 7 12 33 12

7

56 25 33 66 54 7 33


*/


#include<stdio.h>//�桤����
#include<stdlib.h>//����ͷ�ļ������ڴ����µ��ڴ�洢������
struct number//����ṹ�壬���нṹ��ָ����������洢��һ���ṹ���׵�ַ
{
    int num;
    struct number *next;
};
int main()
{
    int i,n,a;
    struct number *p1,*head,*p2;//headͷָ��Ϊ����ʼ���洢���ǵ�ַ�����洢��һ��Ԫ�أ�p1,p2���ڳн��¾�������ȡ�е�����
    while(scanf("%d",&n)!=EOF)
    {
        p1=NULL;//��ʼ��
        head=NULL;
        p2=NULL;
        for(i=0; i<n; i++)//����n����
        {
            scanf("%d",&a);//���벿��
            if(head==NULL)//�ж�ͷָ���Ƿ�Ϊ�գ������ж��Ƿ��ǵ�һ��������ʱӦ�洢��headͷָ��ָ��Ľṹ����
            {
                p1=(struct number *)malloc(sizeof(struct number));//�����µ�number�ͽṹ���ڴ�ռ�
                head=p1;
                p2=head;//��ͷָ��ŵ�p2�д洢
            }
            p1=(struct number *)malloc(sizeof(struct number));
            p2->next=p1;//���ݳнӣ��´���������������õ�p1��
            p1->num=a;
            p1->next=NULL;//����p1��o2����
            p2=p1;//����p1��Ϊ2�д洢Ϊ��һ��Ԫ��
        }
        
        int del;
        scanf("%d",&del);
        printf("%d\n",n);
        p2=head->next;
        while(p2!=NULL)//ԭ���������
        {
            printf("%d",p2->num);
            if(p2->next!=NULL)
            {
                printf(" ");
            }
            p2=p2->next;
        }
        printf("\n");


        p2=head->next;//��������
       
	    while(p2!=NULL)
        {
            if(p2->num==del)
            {
                n--;
            }
            p2=p2->next;
        }
        printf("%d\n",n);
		
		
		
        p2=head;//p2ָ��ͷָ�룬���ң�p2Ϊ��һ��Ԫ��
        while(p2->next!=NULL)//delɾ�����֣�ɾȥ����������Ԫ��
        {
            p1=p2->next;//p1Ϊ��ǰ��ȡԪ��
            if(p1->num==del)//����ǰԪ�ط���ɾ������,�����������һ��Ϊ��ɾ��Ԫ��Ϊ��һ��Ԫ��ʱ��һ��Ϊ�������
            {
                if(p1==head->next)//��Ϊ��һ��Ԫ��ʱ����ͷָ���next�ӱ�ɾ��Ԫ��ָ����һ��Ԫ��
                {
                    head->next=p1->next;//�˴��ı�ͷָ��head��ָ��ͷָ����Ȼû�䣬��˵����ڵ�һ���У�p1��ȡ������p2��Ҳ����head�У����º��ָ��ֵ
                }
                else
                {
                    p2->next=p1->next;//������һ��Ԫ�ص�nextָ��ɾ��Ԫ�ص�next
                 //   p1=p1->next;//p1ָ����һ��Ԫ�أ�����ʱp1��p2ָ��ͬһ��Ԫ��
                }
            }
            else//�������
            {
                p2=p1;
                //p1=p1->next;
            }
        }
		
		

        p2=head;//������֣����ɾ���������
        while(p2->next!=NULL)
        {
            p2=p2->next;
            printf("%d",p2->num);
            if(p2->next!=NULL)
            {
                printf(" ");
            }
        }
        
        printf("\n");
       /* p2=head;
        while(p2!=NULL)//�ͷ����нڵ�
        {
            p1=p2->next;
            free(p2);//�ͷŵ��ǵ�ǰ��������һ���ڵ�
            p2=p1;
        }
        */
    }
    return 0;
}
