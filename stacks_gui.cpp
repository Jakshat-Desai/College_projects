#include<bits/stdc++.h>
#include<graphics.h>
#define co 2
#define stckbtm 420
using namespace std;
//function to make stack holder
void createStackgrap(int sze)
{
    rectangle(80,10,500,450);
    bar(250,10,350,50);
    setcolor(LIGHTMAGENTA);
    outtextxy(255,20,"ELEMENT BIN");
    setcolor(LIGHTBLUE);
    line(350,10,350,450);
    line(350,50,500,50);
    setcolor(WHITE);
    line(280,stckbtm,280,stckbtm-sze*20);
    line(280,stckbtm,320,stckbtm);
    line(320,stckbtm,320,stckbtm-sze*20);
}
//function for making a non moving box
void staticbox(char* val, int top)
{
    char c;
    c=val[0];
    setcolor(LIGHTGREEN);
    bar(285,top-10,315,top);
    if(c=='0')
    outtextxy(300,top-10,"0");
    else if(c=='1')
    outtextxy(300,top-10,"1");
    else if(c=='2')
    outtextxy(300,top-10,"2");
    else if(c=='3')
    outtextxy(300,top-10,"3");
    else if(c=='4')
    outtextxy(300,top-10,"4");
    else if(c=='5')
    outtextxy(300,top-10,"5");
    else if(c=='6')
    outtextxy(300,top-10,"6");
    else if(c=='7')
    outtextxy(300,top-10,"7");
    else if(c=='8')
    outtextxy(300,top-10,"8");
    else if(c=='9')
    outtextxy(300,top-10,"9");
    setcolor(WHITE);
}
//function to print all operations
void processprint(vector<char> proc, string vals)
{
    int top=30;
    outtextxy(400,top,"OPERATIONS:");
    int i=0,j=0;
    top+=25;
    for(;i<proc.size();i++)
    {
        char c=vals[j];
        if(i==proc.size()-1)
        {
            setcolor(LIGHTRED);
        }
        if(proc[i]=='i')
        {
            if(c=='0')
            outtextxy(380,top,"Push 0");
            else if(c=='1')
            outtextxy(380,top,"Push 1");
            else if(c=='2')
            outtextxy(380,top,"Push 2");
            else if(c=='3')
            outtextxy(380,top,"Push 3");
            else if(c=='4')
            outtextxy(380,top,"Push 4");
            else if(c=='5')
            outtextxy(380,top,"Push 5");
            else if(c=='6')
            outtextxy(380,top,"Push 6");
            else if(c=='7')
            outtextxy(380,top,"Push 7");
            else if(c=='8')
            outtextxy(380,top,"Push 8");
            else if(c=='9')
            outtextxy(380,top,"Push 9");

            j++;
        }
        else
        {
            outtextxy(380,top,"Pop");
        }
        top+=20;
        setcolor(WHITE);
    }

}
//popping an element
void deletebox(int top, int sze,vector<char> stk,vector<char> proc, string vals)
{
    char c=*(stk.end()-1);
    //checking for underflow
    int j;
    for(int top1=top;top1>=20;top1--)
    {
        //creating the stack elements holder
    createStackgrap(sze);
    //printing the names of the processes being carried out
    processprint(proc,vals);
    //creating the new element
    bar(285,top1,315,top1-10);
    if(c=='0')
    outtextxy(300,top1-10,"0");
    else if(c=='1')
    outtextxy(300,top1-10,"1");
    else if(c=='2')
    outtextxy(300,top1-10,"2");
    else if(c=='3')
    outtextxy(300,top1-10,"3");
    else if(c=='4')
    outtextxy(300,top1-10,"4");
    else if(c=='5')
    outtextxy(300,top1-10,"5");
    else if(c=='6')
    outtextxy(300,top1-10,"6");
    else if(c=='7')
    outtextxy(300,top1-10,"7");
    else if(c=='8')
    outtextxy(300,top1-10,"8");
    else if(c=='9')
    outtextxy(300,top1-10,"9");
    //maintaining the previously inserted elements in stack
    int k=stckbtm-5;
    for(j=0;j<stk.size()-1;j++)
    {
        char c1=stk[j];
        staticbox(&c1,k);
        k-=20;
    }
    delay(0);
    cleardevice();
    }
    processprint(proc,vals);
   createStackgrap(sze);
    int k=stckbtm-5;
    for(j=0;j<stk.size()-1;j++)
    {
        char c1=stk[j];
        staticbox(&c1,k);
        k-=20;
    }
    delay(500);
}
//function for inserting a new box
void insertbox(char* val,int top, int sze,vector<char> stk,vector<char> proc, string vals)
{
    //insertion in stack
    int top1=20;
    int j;
    char c=*val;
    for(;top1<=top;top1++)
    {
    //creating the stack elements holder
    createStackgrap(sze);
    //printing the names of the processes
    processprint(proc,vals);
    //creating the new element
    bar(285,top1-10,315,top1);
    if(c=='0')
    outtextxy(300,top1-10,"0");
    else if(c=='1')
    outtextxy(300,top1-10,"1");
    else if(c=='2')
    outtextxy(300,top1-10,"2");
    else if(c=='3')
    outtextxy(300,top1-10,"3");
    else if(c=='4')
    outtextxy(300,top1-10,"4");
    else if(c=='5')
    outtextxy(300,top1-10,"5");
    else if(c=='6')
    outtextxy(300,top1-10,"6");
    else if(c=='7')
    outtextxy(300,top1-10,"7");
    else if(c=='8')
    outtextxy(300,top1-10,"8");
    else if(c=='9')
    outtextxy(300,top1-10,"9");

    //maintaining the previously inserted elements in stack
    int k=stckbtm-5;
    for(j=0;j<stk.size();j++)
    {
        char c1=stk[j];
        staticbox(&c1,k);
        k-=20;
    }
    delay(0);
    cleardevice();
    }
    processprint(proc,vals);
   createStackgrap(sze);
    int k=stckbtm-5;
    for(j=0;j<stk.size();j++)
    {
        char c1=stk[j];
        staticbox(&c1,k);
        k-=20;
    }
    bar(285,top-10,315,top);
    if(c=='0')
    outtextxy(300,top1-10,"0");
    else if(c=='1')
    outtextxy(300,top1-10,"1");
    else if(c=='2')
    outtextxy(300,top1-10,"2");
    else if(c=='3')
    outtextxy(300,top1-10,"3");
    else if(c=='4')
    outtextxy(300,top1-10,"4");
    else if(c=='5')
    outtextxy(300,top1-10,"5");
    else if(c=='6')
    outtextxy(300,top1-10,"6");
    else if(c=='7')
    outtextxy(300,top1-10,"7");
    else if(c=='8')
    outtextxy(300,top1-10,"8");
    else if(c=='9')
    outtextxy(300,top1-10,"9");

    //checking for overflow;
    if(top-20<stckbtm-5-sze*20)
    {
        for(int blink=0;blink<=8;blink++)
                {
                if(blink%2==0)
                    setcolor(YELLOW);
                outtextxy(200,100,"OVERFLOW");
                delay(200);
                setcolor(BLACK);
                }
        stk.push_back(c);
        deletebox(top,sze,stk,proc,vals);
        stk.erase(stk.begin()+stk.size()-1);
    }
    else
    {
        delay(500);
    }

}

int main()
{
    int sze,top=stckbtm-5;
    cout<<"Enter size of stack:\n";
    cin>>sze;
    string ops,nos;
    vector<char> stk;
    vector<char> proc;
    int i=0,j=0;
    char ele,dec;
    //
    do
    {
        cout<<"Enter i to push, d to pop and any other key to proceed to the animation:\n";
        cin>>dec;
        if(dec=='i')
        {
            cout<<"Enter any single digit value:\n";
            cin>>ele;
            nos+=ele;
            ops+=dec;
        }
        else if(dec=='d')
        {
            ops+=dec;
        }
        else
        {
            break;
        }
    }
    while(1);
    cout<<nos<<"\n";
    cout<<ops;
    //
    int gd=DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    //
    j=0;
    int l=0,blink=0;
    for(i=0;i<ops.length();i++)
    {
        if(ops[i]=='i')
        {
            proc.push_back('i');
            char c=nos[j];
            j++;
            insertbox(&c,top,sze,stk,proc,nos);
            if(top-10>stckbtm-5-(sze*20))
            {
                stk.push_back(c);
                top-=20;
            }
        }
        else if(ops[i]=='d')
        {
            proc.push_back('d');
            if(stk.size()==0)
            {
                for(blink=0;blink<=8;blink++)
                {
                if(blink%2==0)
                    setcolor(YELLOW);
                outtextxy(200,100,"UNDERFLOW");
                delay(200);
                setcolor(BLACK);
                }
                processprint(proc,nos);
                continue;
            }
            deletebox(top,sze,stk,proc,nos);
            stk.erase(stk.begin()+stk.size()-1);
            top+=20;
        }
    }
    delay(3000);
    cleardevice();
    outtextxy(250,200,"END OF ANIMATION");
    //
    getch();
    closegraph();
     vector<char>::iterator it;
    for(it=stk.begin();it!=stk.end();it++)
    {
        cout<<*it;
    }
    cout<<"\n";
}
