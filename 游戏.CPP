#include <iostream> 
using namespace std; 
double shengmingli=2000;//�������ǳ�ʼ������ 
int gongjili=150;//�������ǳ�ʼ������ 
int fangyuli=200;//�������ǳ�ʼ������ 
int money=20;//�������ǳ�ʼ��Ǯ���� 
bool guoguan;//�����Ƿ�ͨ���ж� 
void wuqidian();//���������꺯�� 
void yaodian();//����ҩ�꺯�� 
void guaiwu1();//����С���ﺯ�� 
void guaiwu2();//�������ﺯ�� 
int main() 
{ 
cout<<"��ӭ�㿪ʼ������С��Ϸ��\n"; 
cout<<"С��\n"; 
cout<<"һ��1000���С����Χ��һ���ӣ���һƬ���֣��ܶ෿�Ӻͺܶ��ˡ�\n��һ��ҩ��"<<endl; 
cout<<"��һ�������ꡣ\n"; 
int xiaozhen;//����ѡ����Ŀ 
cout<<"1.ȥ������"<<endl; 
cout<<"2.ȥҩƷ��"<<endl; 
cout<<"3.ȥ��С����"<<endl; 
cout<<"4.ȥ������"<<endl; 
cout<<"5.�˳���Ϸ"<<endl; 
cout<<"6.��ʾ���״̬"<<endl; 
cin>>xiaozhen; 
while(xiaozhen!=5)//����5ʱ�˳���Ϸ 
{ 
if(shengmingli<=0)//����������С�ڵ���0ʱ��Ϸ���� 
{ 
cout<<"��������"<<endl; 
break; 
} 
if(guoguan) 
{ 
cout<<"��ϲͨ�أ�"<<endl; 
break; 
} 
if(xiaozhen==6)//����6�ɼ���Լ���״̬ 
{ 
cout<<"���������:"<<shengmingli<<endl; 
cout<<"��Ĺ�����:"<<gongjili<<endl; 
cout<<"��ķ�����:"<<fangyuli<<endl; 
cout<<"��ӵ�е�Ǯ:"<<money<<endl; 
} 
else 
switch(xiaozhen) 
{ 
case 1 : wuqidian();break; 
case 2 : yaodian();break; 
case 3 : guaiwu1();break; 
case 4 : guaiwu2();break; 
default : cout<<"�벻Ҫ��ѡ��"<<endl;break; 
} 
cin>>xiaozhen; 
} 
if(xiaozhen==5) 
{ 
cout<<"�����˳���Ϸ����"<<endl; 
} 
cin.get(); 
cin.get(); 
return 0; 
} 
void wuqidian() 
{ 
cout<<"��ӭ���������꣡"<<endl; 
cout<<"1����С����1M��2��������"<<endl; 
cout<<"2����̽���2M��20��������"<<endl; 
cout<<"3����󿳵���5M��40������)"<<endl; 
cout<<"4����˫�ڹ���7M��60��������"<<endl; 
cout<<"5������ƣ�2M��30��������"<<endl; 
cout<<"6�������ף�5M��60��������"<<endl; 
cout<<"7���뿪������"<<endl; 
int wuqidian; 
cin>>wuqidian; 
while(wuqidian!=7)//����7ʱ�������� 
{ 
switch(wuqidian) 
{ 
case 1 : if(money<10) 
cout<<"���Ǯ����"<<endl;//Ǯ����ʱ����Flase 
else  
cout<<"����ɹ���"<<endl;//Ǯ�㹻ʱ����True 
gongjili+=2; 
money-=1; 
break; 
case 2 : if(money<80) 
cout<<"���Ǯ����"<<endl; 
else  
cout<<"����ɹ���"<<endl; 
gongjili+=20; 
money-=80; 
break; 
case 3 : if(money<140) 
cout<<"���Ǯ����"<<endl; 
    else  
cout<<"����ɹ���"<<endl; 
gongjili+=40; 
money-=140; 
break; 
case 4 : if(money<200) 
cout<<"���Ǯ����"<<endl; 
else  
cout<<"����ɹ���"<<endl; 
gongjili+=60; 
money-=200; 
break; 
case 5 : if(money<60) 
cout<<"���Ǯ����"<<endl; 
else  
cout<<"����ɹ���"<<endl; 
fangyuli+=30; 
money-=60; 
break; 
fangyuli+=60; 
money-=100; 
break; 
default : cout<<"��"<<endl; 
    break; 
}  
cin>>wuqidian; 
} 
if(wuqidian==7) 
{	  //����main()������ 
cout<<"��ӭ�´�������"<<endl; 
cout<<"��ӭ�㿪ʼ������С��Ϸ��\n"; 
cout<<"С��\n"; 
cout<<"һ��1000���С����Χ��һ���ӣ���һƬ���֣��ܶ෿�Ӻͺܶ��ˡ�\n��һ��ҩ��"<<endl; 
cout<<"��һ�������ꡣ\n"; 
cout<<"1.ȥ������"<<endl; 
cout<<"2.ȥҩƷ��"<<endl; 
cout<<"3.ȥ��С����"<<endl; 
cout<<"4.ȥ������"<<endl; 
cout<<"5.�˳���Ϸ"<<endl; 
cout<<"6.��ʾ���״̬"<<endl; 
} 
} 
/* 
yaodian()��������wuqidian()��ͬ,�ɲ����Ķ�. 
*/ 
void yaodian() 
{ 
cout<<"��ӭ����ҩƷ�꣡"<<endl; 
cout<<"1����1�Ų�Ѫҩ��10M��200������"<<endl; 
cout<<"2����2�Ų�Ѫҩ��50M��1000��������"<<endl; 
cout<<"3����3�Ų�Ѫҩ��100M��2200������)"<<endl; 
cout<<"4���뿪������"<<endl; 
int yaodian; 
cin>>yaodian; 
while(yaodian!=4) 
{ 
switch(yaodian) 
{ 
case 1 : if(money<10) 
cout<<"���Ǯ����"<<endl; 
else  
cout<<"����ɹ���"<<endl; 
shengmingli+=200; 
money-=10; 
break; 
case 2 : if(money<50) 
cout<<"���Ǯ����"<<endl; 
else  
cout<<"����ɹ���"<<endl; 
shengmingli+=1000; 
money-=50; 
break; 
case 3 : if(money<100) 
cout<<"���Ǯ����"<<endl; 
else  
cout<<"����ɹ���"<<endl; 
shengmingli+=2200; 
money-=100; 
break; 
default : cout<<"��"<<endl; 
break; 
} 
cin>>yaodian; 
} 
if(yaodian==4) 
{	   
cout<<"��ӭ�´�������"<<endl;	   
cout<<"��ӭ�㿪ʼ������С��Ϸ��\n"; 
cout<<"С��\n"; 
cout<<"һ��1000���С����Χ��һ���ӣ���һƬ���֣��ܶ෿�Ӻͺܶ��ˡ�\n��һ��ҩ��"<<endl; 
cout<<"��һ�������ꡣ\n"; 
cout<<"1.ȥ������"<<endl; 
cout<<"2.ȥҩƷ��"<<endl; 
cout<<"3.ȥ��С����"<<endl; 
cout<<"4.ȥ������"<<endl; 
cout<<"5.�˳���Ϸ"<<endl; 
cout<<"6.��ʾ���״̬"<<endl; 
} 
} 
/*����������ս������,ʹ��ָ��������.��������ڴ����.*/ 
void guaiwu1() 
{ 
cout<<"��ʼ��С����ս��������"<<endl; 
double* g_shengmingli=new double;//����������� 
int* g_gongjili=new int;//������﹥���� 
int* g_fangyuli=new int;//������������ 
    int* g_money=new int;//��������Ǯ 
*g_shengmingli=100; 
*g_gongjili=5; 
*g_fangyuli=3; 
*g_money=5; 
double* tongji1=new double;//�����������ǶԹ����ɱ�� 
double* tongji2=new double;//���������������ǵ�ɱ�� 
*tongji1=0; 
*tongji2=0; 
int* huihe=new int;//����غ��� 
*huihe=1; 
cout<<"�㿪ʼ��С������й�����"<<endl; 
int* xuanze=new int; 
/* 
�������㹫ʽ 
ɱ��=������*2-������ 
���ÿ�غϿ���ѡ�񹥻������� 
*/ 
while((*g_shengmingli)>0 && shengmingli>0 && (*xuanze)!=2) 
{ 
cout<<"������"<<"��"<<*huihe<<"�غϣ�"<<endl; 
cout<<"��ѡ����Ķ���:\n"; 
cout<<"1������\n2������\n"; 
cin>>*xuanze; 
switch((*xuanze)) 
{ 
case 1 : cout<<"���С���﷢���˹�����"<<endl; 
*g_shengmingli-=gongjili*2-(*g_fangyuli); 
*tongji1=gongjili*2-(*g_fangyuli); 
cout<<"������С����"<<*tongji1<<"��������"<<endl; 
cout<<"С���ﻹʣ"<<(*g_shengmingli)-(*tongji1)<<"������"<<endl; 
shengmingli-=(*g_gongjili)*2-fangyuli; 
*tongji2=(*g_gongjili)*2-fangyuli; 
cout<<"С������㷢���˹�����"<<endl; 
cout<<"С����������"<<*tongji2<<"��������"<<endl; 
cout<<"�㻹ʣ"<<shengmingli-(*tongji2)<<"������"<<endl;break; 
case 2 : cout<<"��������ܣ�"<<endl; 
cout<<"���ܳɹ���"<<endl;continue; 
default : cout<<"�벻Ҫ��ѡ��"<<endl; 
} 
(*huihe)++; 
} 
if((*g_shengmingli)<=0) 
{//ɱ�������ķ��� 
cout<<"С���ﱻ��ɱ���ˣ���������������"<<endl; 
money+=(*g_money); 
cout<<"��ӭ�㿪ʼ������С��Ϸ��\n"; 
cout<<"С��\n"; 
cout<<"һ��1000���С����Χ��һ���ӣ���һƬ���֣��ܶ෿�Ӻͺܶ��ˡ�\n��һ��ҩ��"<<endl; 
cout<<"��һ�������ꡣ\n"; 
cout<<"1.ȥ������"<<endl; 
cout<<"2.ȥҩƷ��"<<endl; 
cout<<"3.ȥ��С����"<<endl; 
cout<<"4.ȥ������"<<endl; 
cout<<"5.�˳���Ϸ"<<endl; 
cout<<"6.��ʾ���״̬"<<endl; 
} 
else 
if(shengmingli<=0) 
{//������ɱ����ķ��� 
cout<<"�㱻С����ɱ���ˣ���Ϸ����������"<<endl; 
} 
else 
if((*xuanze)==2) 
{//���ܵķ��� 
cout<<"���ӻ���С��"<<endl; 
cout<<"��ӭ�㿪ʼ������С��Ϸ��\n"; 
cout<<"С��\n"; 
cout<<"һ��1000���С����Χ��һ���ӣ���һƬ���֣��ܶ෿�Ӻͺܶ��ˡ�\n��һ��ҩ��"<<endl; 
cout<<"��һ�������ꡣ\n"; 
cout<<"1.ȥ������"<<endl; 
cout<<"2.ȥҩƷ��"<<endl; 
cout<<"3.ȥ��С����"<<endl; 
cout<<"4.ȥ������"<<endl; 
cout<<"5.�˳���Ϸ"<<endl; 
cout<<"6.��ʾ���״̬"<<endl; 
} 
delete g_shengmingli; 
delete g_gongjili; 
delete g_fangyuli; 
delete g_money; 
delete tongji1; 
delete tongji2; 
} 
/* 
���þ���void����guaiwu1()��ͬ,�ɲ��������Ķ�. 
*/ 
void guaiwu2() 
{ 
cout<<"��ʼ������ս��������"<<endl; 
double* g_shengmingli=new double; 
int* g_gongjili=new int; 
int* g_fangyuli=new int; 
*g_shengmingli=3600; 
*g_gongjili=500; 
*g_fangyuli=500; 
double* tongji1=new double; 
double* tongji2=new double; 
*tongji1=0; 
*tongji2=0; 
int* huihe=new int; 
*huihe=1; 
cout<<"�㿪ʼ�Դ������й�����"<<endl; 
int* xuanze=new int; 
while((*g_shengmingli)>0 && shengmingli>0 && (*xuanze)!=2) 
{ 
cout<<"������"<<"��"<<*huihe<<"�غϣ�"<<endl; 
cout<<"��ѡ����Ķ���:\n"; 
cout<<"1������\n2������\n"; 
cin>>*xuanze; 
switch((*xuanze)) 
{ 
case 1 : cout<<"��Դ���﷢���˹�����"<<endl; 
*g_shengmingli-=gongjili*2-(*g_fangyuli); 
*tongji1=gongjili*2-(*g_fangyuli); 
cout<<"�����˴����"<<*tongji1<<"��������"<<endl; 
cout<<"����ﻹʣ"<<(*g_shengmingli)-(*tongji1)<<"������"<<endl; 
shengmingli-=(*g_gongjili)*2-fangyuli; 
*tongji2=(*g_gongjili)*2-fangyuli; 
cout<<"�������㷢���˹�����"<<endl; 
cout<<"�����������"<<*tongji2<<"��������"<<endl; 
cout<<"�㻹ʣ"<<shengmingli-(*tongji2)<<"������"<<endl;break; 
case 2 : cout<<"��������ܣ�"<<endl; 
cout<<"���ܳɹ���"<<endl;continue; 
default : cout<<"�벻Ҫ��ѡ��"<<endl; 
} 
(*huihe)++; 
} 
if((*g_shengmingli)<=0) 
{ 
    cout<<"����ﱻ��ɱ���ˣ���������������"<<endl; 
guoguan=true; 
cout<<"��ӭ�㿪ʼ������С��Ϸ��\n"; 
cout<<"С��\n"; 
cout<<"һ��1000���С����Χ��һ���ӣ���һƬ���֣��ܶ෿�Ӻͺܶ��ˡ�\n��һ��ҩ��"<<endl; 
cout<<"��һ�������ꡣ\n"; 
cout<<"1.ȥ������"<<endl; 
cout<<"2.ȥҩƷ��"<<endl; 
cout<<"3.ȥ��С����"<<endl; 
cout<<"4.ȥ������"<<endl; 
cout<<"5.�˳���Ϸ"<<endl; 
cout<<"6.��ʾ���״̬"<<endl; 
} 
else 
if(shengmingli<=0) 
{ 
cout<<"�㱻�����ɱ���ˣ���Ϸ����������"<<endl; 
} 
else 
if((*xuanze)==2) 
{ 
cout<<"���ӻ���С��"<<endl; 
cout<<"��ӭ�㿪ʼ������С��Ϸ��\n"; 
cout<<"С��\n"; 
cout<<"һ��1000���С����Χ��һ���ӣ���һƬ���֣��ܶ෿�Ӻͺܶ��ˡ�\n��һ��ҩ��"<<endl; 
cout<<"��һ�������ꡣ\n"; 
cout<<"1.ȥ������"<<endl; 
cout<<"2.ȥҩƷ��"<<endl; 
cout<<"3.ȥ��С����"<<endl; 
cout<<"4.ȥ������"<<endl; 
cout<<"5.�˳���Ϸ"<<endl; 
cout<<"6.��ʾ���״̬"<<endl; 
} 
delete g_shengmingli; 
delete g_gongjili; 
delete g_fangyuli; 
delete tongji1; 
delete tongji2; 
}
