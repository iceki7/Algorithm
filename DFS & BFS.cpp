#include<iostream>


using namespace std;

int main()
{
    return 0;
}/*
void BFS()
{

    while(!queue.empty())
    {
    now=queue.front();

    //����now�ڵ�
    
    while(son_exist&&!mark)
        {
         queue.push();
         mark();    //���mark������ӵ�ʱ���Ҫ����

        }
    queue.pop();
    
    }


}

void DFS()  //�ǵݹ��
{
    stack.push(0);

    while(!stack.empty())
    {
        now=stack.top();
        if(!marked now)
        {
                //����now�ڵ�
                mark(now);

        }

        while(neighbor)
         {
         if(!mark)
            {
            stack.push();
            found=true;
            break;
            }
         }

         if(!found)
         stack.pop();

    }
}
void DFS(now)  //�ݹ��
{
    //����now�ڵ�
    mark(now);
    
    for(neighbor)
    {
    if(!mark)
    DFS();
    }

}