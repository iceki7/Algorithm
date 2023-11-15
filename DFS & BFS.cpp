#include<iostream>


using namespace std;

int main()
{
    return 0;
}
void BFS()
{

    while(!queue.empty())
    {
    now=queue.front();

    //操作now节点
    
    for(now.neighbor)
        {
        if(marked)continue;
         queue.push();
         mark();

        }
    queue.pop();
    
    }


}

void DFS()  //非递归版
{
    while(!stack.empty())
    {
        now=stack.top();
        mark(now);

        while(now.neighbor)
         {
         if(!marked)
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
