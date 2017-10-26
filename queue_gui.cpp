#include<bits/stdc++.h>
#include<graphics.h>
//constant keeping track of y coordinates of the bottom of the queue
#define queuebtm 300
using namespace std;
//function to set the environment
void createQueuegrap(int sze)
{
    //setting background colour of screen
    setbkcolor(BROWN);
    //sets colour for outer box
    setcolor(LIGHTBLUE);
    //creates outer box
    rectangle(250,10,500,450);
    //creates bar for ELEMENT BIN
    bar(250,10,350,50);
    //sets colour for ELEMENT BIN text
    setcolor(LIGHTMAGENTA);
    //writes the ELEMENT BIN text
    outtextxy(255,20,"ELEMENT BIN");
    //creates bar for TO PROCESS
    bar(250,410,350,450);
    //sets colour for TO PROCESS text
    setcolor(LIGHTGREEN);
    //writes the TO PROCESS text
    outtextxy(260,420,"TO PROCESS");
    //sets colour for column seperating line
    setcolor(LIGHTBLUE);
    //column seperating line
    line(350,10,350,450);
    //line for heading
    line(250,50,500,50);
    //creating the queue holder
    setcolor(LIGHTMAGENTA);
    line(280,queuebtm,280,queuebtm-sze*20);
    line(320,queuebtm,320,queuebtm-sze*20);
    setcolor(MAGENTA);
    line(278,queuebtm+2,278,queuebtm-sze*20);
    line(322,queuebtm+2,322,queuebtm-sze*20);
    //program description and credits
    setcolor(LIGHTGREEN);
    outtextxy(10,200,"Queue graphic user interface");
    outtextxy(10,210,"animation to explain working");
    outtextxy(20,220,"of various queue operations");
    outtextxy(40,240,"Created by");
    outtextxy(60,250,"-JAKSHAT DESAI");
    setcolor(WHITE);
}
//function for making a non moving box
void staticbox(char* val, int top)
{
    char c;
    c=val[0];
    //sets colour of the box
    setcolor(LIGHTGREEN);
    //makes the box
    bar(285,top-10,315,top);
    //writes the text in the box
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
    //sets colour to default
    setcolor(WHITE);
}
//function to print all operations
void processprint(vector<char> proc, string vals)
{
    int top=30;
    //sets the OPERATIONS heading
    outtextxy(380,top-5,"OPERATIONS:");
    int i=0,j=0;
    top+=25;
    //prints all the previously occurred processes
    for(;i<proc.size();i++)
    {
        char c=vals[j];
        if(i==proc.size()-1)
        {
            //highlights the current process
            setcolor(LIGHTRED);
        }
        if(proc[i]=='i')
        {
            //printing in case of enqueue operation
            if(c=='0')
            outtextxy(380,top,"Enqueue 0");
            else if(c=='1')
            outtextxy(380,top,"Enqueue 1");
            else if(c=='2')
            outtextxy(380,top,"Enqueue 2");
            else if(c=='3')
            outtextxy(380,top,"Enqueue 3");
            else if(c=='4')
            outtextxy(380,top,"Enqueue 4");
            else if(c=='5')
            outtextxy(380,top,"Enqueue 5");
            else if(c=='6')
            outtextxy(380,top,"Enqueue 6");
            else if(c=='7')
            outtextxy(380,top,"Enqueue 7");
            else if(c=='8')
            outtextxy(380,top,"Enqueue 8");
            else if(c=='9')
            outtextxy(380,top,"Enqueue 9");

            j++;
        }
        else
        {
            //printing in case of dequeue operation
            outtextxy(380,top,"Dequeue");
        }
        top+=10;
        //setting colour to default
        setcolor(WHITE);
    }

}
//removing an element
void deletebox(int top, int sze,vector<char> que,vector<char> proc, string vals)
{
    char c=*(que.begin());
    int j;
    for(int top1=queuebtm-5;top1<=410;top1++)
    {
    //creating the environment
    createQueuegrap(sze);
    //printing the names of the processes being carried out
    processprint(proc,vals);
    //creating the new element's container box
    bar(285,top1,315,top1-10);
    //putting text inside the box
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
    int k=queuebtm-25;
    for(j=1;j<que.size();j++)
    {
        char c1=que[j];
        staticbox(&c1,k);
        k-=20;
    }
    //sustaining the graphics on the screen for a delayed period
    delay(0);
    //clearing the screen
    cleardevice();
    }
    //printing all the previously occurred processes
    processprint(proc,vals);
    //creating the environment
   createQueuegrap(sze);
   //creating all the elements previously present in the stack
   //and moving the remaining elements down one by one
    int k=queuebtm-5;
    for(j=1;j<que.size();j++)
    {
        char c1=que[j];

        for(int i=k-20;i<=k;i++)
        {
        processprint(proc,vals);
        createQueuegrap(sze);
        int l=queuebtm-25;
        //loop taking care of displaying the non moving elements
        for(int x=1;x<que.size();x++)
        {
            processprint(proc,vals);
            createQueuegrap(sze);
            char c2=que[x];
         if(x>j)
         {
            staticbox(&c2,l);
         }
         if(x<j)
         {
            staticbox(&c2,l+20);
         }
         l-=20;
        }
        //moving element
        staticbox(&c1,i);
        delay(20);
        cleardevice();
        }
        k-=20;
    }
    //prints all the previously occurred processes
    processprint(proc,vals);
    //creating the environment
   createQueuegrap(sze);
   //displaying the final queue
    k=queuebtm-5;
    for(j=1;j<que.size();j++)
    {
        char c1=que[j];
        staticbox(&c1,k);
        k-=20;
    }
    //sustaining the graphics after completion of operation
    delay(500);
}
void boxflyup(int top, int sze,vector<char> que,vector<char> proc, string vals)
{
    char c=*(que.end()-1);
    int j;
    for(int top1=top;top1>=50;top1--)
    {
    //creating the environment
    createQueuegrap(sze);
    //printing the names of the processes being carried out
    processprint(proc,vals);
    //creating the new element's container box
    bar(285,top1,315,top1-10);
    //putting text inside the box
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
    //maintaining the previously inserted elements in queue
    int k=queuebtm-5;
    for(j=0;j<que.size()-1;j++)
    {
        char c1=que[j];
        staticbox(&c1,k);
        k-=20;
    }
    //sustaining the graphics on the screen for a delayed period
    delay(0);
    //clearing the screen
    cleardevice();
    }
    //printing all the previously occurred processes
    processprint(proc,vals);
    //creating the environment
   createQueuegrap(sze);
   //creating all the elements previously present in the queue
    int k=queuebtm-5;
    for(j=0;j<que.size()-1;j++)
    {
        char c1=que[j];
        staticbox(&c1,k);
        k-=20;
    }
    //sustaining the graphics after completion of operation
    delay(500);
}
//function for inserting a new box
void insertbox(char* val,int top, int sze,vector<char> que,vector<char> proc, string vals)
{
    //insertion in queue
    int top1=50;
    int j;
    char c=*val;
    for(;top1<=top;top1++)
    {
    //creating the environment
    createQueuegrap(sze);
    //printing the names of the processes
    processprint(proc,vals);
    //creating the new element's container box
    bar(285,top1-10,315,top1);
    //putting text in the box
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

    //maintaining the previously inserted elements in queue
    int k=queuebtm-5;
    for(j=0;j<que.size();j++)
    {
        char c1=que[j];
        staticbox(&c1,k);
        k-=20;
    }
    //sustaining the graphics on the screen for a delayed period
    delay(0);
    //clearing the screen
    cleardevice();
    }
    //printing all the previously occurred processes
    processprint(proc,vals);
    //creating the environment
    createQueuegrap(sze);
    //creating all the elements previously present in the queue
    int k=queuebtm-5;
    for(j=0;j<que.size();j++)
    {
        char c1=que[j];
        staticbox(&c1,k);
        k-=20;
    }
    //creating the box for newly inserted element
    bar(285,top-10,315,top);
    //putting text inside the box of the newly inserted element
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
    if(top-20<queuebtm-5-sze*20)
    {
        //code to make OVERFLOW blink in yellow colour
        for(int blink=0;blink<=8;blink++)
                {
                if(blink%2==0)
                    setcolor(YELLOW);
                outtextxy(265,100,"OVERFLOW");
                delay(200);
                setcolor(BLACK);
                }
        //code to make overflow element fly up the screen
        que.push_back(c);
        boxflyup(top,sze,que,proc,vals);
        que.erase(que.begin()+que.size()-1);
    }
    else
    {
        //sustaining the graphics on the screen
        delay(500);
    }

}

int main()
{
    //declaring the size_of_queue variable and the front pointer_of_queue_y_coordinate variable
    int sze,top=queuebtm-5;
    //declaring strings to store order of operations and order in which numbers are inserted
    string ops,nos;
    //declaring a vector to act as queue
    vector<char> que;
    //declaring a vector to store previously occurred operations
    vector<char> proc;
    //counter variables declaration
    int i=0,j=0;
    //characters that take element input for insertion and decision input for choosing which action to perform
    char ele,dec;
    //taking inputs
    cout<<"Enter size of queue:\n";
    cin>>sze;
    do
    {
        cout<<"Enter i to enqueue, d to dequeue and any other key to proceed to the animation:\n";
        cin>>dec;
        //insertion or enqueue
        if(dec=='i')
        {
            cout<<"Enter any single digit value:\n";
            cin>>ele;
            nos+=ele;
            ops+=dec;
        }
        //deletion or dequeue
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
    //creating the graphics window
    int gd=DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    //creating the environment
    createQueuegrap(sze);
    processprint(proc,nos);
    for(i=0;i<ops.length();i++)
    {
        //if insertion(enqueue) is performed
        if(ops[i]=='i')
        {
            proc.push_back('i');
            char c=nos[j];
            j++;
            //calling insertion animation to bring the box into the queue
            insertbox(&c,top,sze,que,proc,nos);
            //altering the queue after checking that overflow hasnt occurred
            if(top-10>queuebtm-5-(sze*20))
            {
                //inserting the newest element into the queue
                que.push_back(c);
                //updating the front pointer of queue y coordinates
                top-=20;
            }
        }
        //if deletion(dequeue) has been performed
        else if(ops[i]=='d')
        {
            proc.push_back('d');
            //checking for empty list
            if(que.size()==0)
            {
                //code to make EMPTY LIST blink
                for(int blink=0;blink<=8;blink++)
                {
                if(blink%2==0)
                    setcolor(YELLOW);
                outtextxy(257,100,"EMPTY QUEUE");
                delay(200);
                setcolor(BLACK);
                }
                //printing all the previously occurred processes
                processprint(proc,nos);
                //moving onto the next iteration
                continue;
            }
            //making the box to be deleted fly up the screen
            deletebox(top,sze,que,proc,nos);
            //dequeueing the element from the queue
            que.erase(que.begin());
            //updating the front pointer of queue y coordinates
            top+=20;
        }
    }
    //sustaining the graphics
    delay(3000);
    //clearing the screen
    cleardevice();
    //indicating the end of the animation
    outtextxy(250,200,"END OF ANIMATION");
    //getting a character as a signal to close the graph window
    getch();
    //closes the graph window
    closegraph();
}
