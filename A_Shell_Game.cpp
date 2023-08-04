#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    int key,x,y;
    scanf("%d",&key);

    int a[4] = {0};

    a[key] = 1;

    scanf("%d%d",&x,&y);
    swap(a[x],a[y]);
    scanf("%d%d",&x,&y);
    swap(a[x],a[y]);
    scanf("%d%d",&x,&y);
    swap(a[x],a[y]);

    for(int i = 1; i <=3; i++)
    {
        if(a[i] == key)
        {
            printf("%d\n",i);

            break;
        }
    }
    

}