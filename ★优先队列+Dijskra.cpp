#include<iostream>
#include<queue>
using namespace std;
typedef pair<int,int> pii;

//���ȶ��У��ײ���һ��heap
priority_queue<pii,vector<pii>,greater<pii> > pq;//С��


struct func//����д�º���
{
     bool operator()(obj a, obj b)
    {

    }
};


int main()
{
     pair<int,int> a(1, 4);
     pair<int,int> b(5, 4);
     pair<int,int> c(3, 4);
pq.push(a);
pq.push(b);
pq.push(c);

cout<<pq.top().first<<endl;//��front��back
pq.pop();
cout<<pq.top().first<<endl;
    return 0;
}
//DJ�㷨+���ȶ���

/*
void DJ()
{
     priority_queue<pii,vector<pii>,greater<pii> > pq;

        int key=0;
        do
        {
            for(����undone����)
               {
                   if(!connnect)continue;

                       pq.push(pair<int,int>(wt,id));
               }
            int tj=pq.top().second;
            while(rr[tj]!=0) //�Ѿ�����˸õ�Ľ��
            {
                pq.pop();
                if(pq.empty())break;
                tj=pq.top().second;
            }
            if(pq.empty())break;


              rr[tj]=pq.top().first;
           //   cout<<"rr of "<<tj<<"="<<rr[tj]<<endl;
              pq.pop();

            undone.remove(tj);
            key=tj;
        }while(!pq.empty());

}
*/

