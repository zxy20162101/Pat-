#include<iostream>
#include<string>
using namespace std;
//ϸ������ͷ�ۣ�ģ�⹤������һ������ 
int main(){
    string ss;
    cin>>ss;
    int n = ss.length(); //6
    int n1,n2;
    n1=n/3;    //2
    n2=n/3+n%3;   //2   helloo      1       1
    							//�����6�Ļ�ֻ�������2+4�������7�Ļ���Ҫ���� 2+2+3�������		
    string bottom = ss.substr(n1,n2);
	if(n1==n2){
		for(int i=0;i<n1;i++){  // 0 1
            cout<<ss[i]; //�����һ�� 
            if(i==n1-1)cout<<bottom; //���������һ��ʱ�����n2 
			else for(int k=0;k<n2;k++)cout<<" ";
            cout<<ss[n-1-i];
            cout<<endl;
        }
	}
	else{
		for(int i=0;i<n1;i++){  // 0 1
            cout<<ss[i]; //�����һ�� 
            
			for(int k=0;k<n2-2;k++)cout<<" ";
            cout<<ss[n-1-i];
            cout<<endl;
        }
        cout<<bottom; //���������һ��ʱ�����n2 
	}

        	
}
