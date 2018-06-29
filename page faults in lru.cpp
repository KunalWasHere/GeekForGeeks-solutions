#include<bits/stdc++.h>
using namespace std;
struct newnode
{
    struct newnode *next,*prev;
    int data;
};
int main()
{
    int t,n,i,arr[1000],cap,freq,set;
    cin>>t;
    while(t--)
    {
        struct newnode *head,*tail,*node,*p;
        freq=0;
        head=NULL;
        tail=NULL;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>cap;
        i=0;
        for(i=0;i<n;i++)
        {
            if(freq>=cap)
                break;
            set=0;
            p=head;
            while(p!=NULL)
            {
                if(p->data==arr[i])
                {
                    //cout<<"hi";
                    p->prev->next=p->next;
                    if(p->next!=NULL)
                    p->next->prev=p->prev;
                    p->next=head;//commit
                    head->prev=p;
                    p->prev=NULL;
                    head=p;//cout<<i;
                    i++;
                    set=1;
                    continue;;
                }
                else
                p=p->next;
            }
             cout<<set;
            if(set)
                {cout<<"hi";i--;continue;}
            node=(newnode*)malloc(sizeof(struct newnode));//cout<<"hi";
            freq++;
            node->data=arr[i];
            node->next=head;
            if(head!=NULL)
            head->prev=node;
            node->prev=NULL;
            head=node;
            //i++;//cout<<"hiy";
        }
        if(i==n)
        {
            cout<<freq<<endl;
            continue;
        }

        //cout<<"hi";
        p=head;
        while(p->next!=NULL)
            p=p->next;
        tail=p;
        //cout<<tail->data;
        for(i=i;i<n;i++)
        {

                set=0;
                p=head;
                while(p!=NULL)
                {
                    if(p->data==arr[i])
                    {
                        if(p->next==NULL)
                            tail=p->prev;
                        p->prev->next=p->next;
                        if(p->next!=NULL)
                        p->next->prev=p->prev;
                        p->next=head;
                        head->prev=p;
                        p->prev=NULL;
                        head=p;
                        i++;
                        set=1;
                        continue;
                    }
                    p=p->next;
                }

                if(set)
                    {i--;continue;}
                tail->data=arr[i];//cout<<"hi 1";
                tail->prev->next=NULL;//cout<<"hi 2";
                node=tail;//cout<<"hi 3";
                tail=tail->prev;//cout<<"hi 4";
                node->next=head;//cout<<"hi 5";
                head->prev=node;
                node->prev=NULL;
                head=node;
                freq++;//cout<<"hi"<<arr[i];
        }

        cout<<freq<<endl;
    }
}
