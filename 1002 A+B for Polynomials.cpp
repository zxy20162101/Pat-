#include<iostream>
#include<cstring>
using namespace std;

float a[1003];

//�������ӣ�һ���� float ����Ĵ�С���� sizeof(a)/sizeof(a[0]) ��������sizeof��a��
//���� ��ĿҪ����С�����һλ����Ҫ�õ�c���Ե������ʽ����
//���� printf()�� �������Ԫ���� a[i] ���� &a[i] 
int main(){
    int n;
    int num;
    float k;
    memset(a,0,sizeof(a));
    for(int i=0;i<2;i++){
        cin>>num;
        while(num--){
            cin>>n; 
            cin>>k;
            a[n]+=k;
        }
    }
    int cnt =0;
    int flag[1003];
    memset(flag,0,sizeof(flag));
    for(int i = sizeof(a)/sizeof(a[0]);i>=0;i--){
        if(a[i]!=0){
            cnt++;
            flag[i]=1;
        }
    }
    cout<<cnt;
    for(int i=sizeof(a)/sizeof(a[0]);i>=0;i--){
        if (flag[i])
        {
        	cout<<' '<<i<<' ';
            printf("%.1f",a[i]);
        }
    }
}

