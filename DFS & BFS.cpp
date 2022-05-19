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

    //操作now节点
    
    while(neighbor)
        {
        if(marked)continue;
         queue.push();
         mark();    //这个mark是在入队的时候就要加上

        }
    queue.pop();
    
    }


}

void DFS()  //非递归版
{
    stack.push(0);

    while(!stack.empty())
    {
        now=stack.top();
        if(!marked now)
        {
                //操作now节点
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
void DFS(now)  //递归版
{
    //操作now节点
    mark(now);
    
    for(neighbor)
    {
    if(!mark)
    DFS();
    }

}
