#include<graphics.h>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<bits/stdc++.h>
using namespace std;
#define ROW 12
#define COL 12
#define x 50
#define y 40
#define a 30
#define b 20
#define V 12
int dist[V];
void weightChange(int grid[ROW][COL])
{
   int x1,u,v;
   x1=rand()%500;
    u=rand()%12;
    v=rand()%12;
   if(grid[u][v])
   {
        grid[u][v]=x1;
   }


}

typedef struct coordinate
{
    int c;
    int d;
}co;
int minDistance(int dist[], bool sptSet[])
{
   int min = INT_MAX, min_index;
   for (int v = 0; v < V; v++)
     if (sptSet[v] == false && dist[v] <= min)
         {
             min = dist[v];
             min_index = v;
         }
   return min_index;
}
int dijkstra(int graph[V][V], int src, int dst)
{
     srand(time(NULL));
     bool sptSet[V];
     for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
     dist[src] = 0;
     for (int count = 0; count < V-1; count++)
     {
       int u = minDistance(dist, sptSet);
       sptSet[u] = true;

       for (int v = 1; v < V; v++)
        {

          if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX&& dist[u]+graph[u][v] < dist[v]){
                                                                                                 dist[v] = dist[u] + graph[u][v];
                                                                                              }

        }
        int x1=rand()%120;
        if(x1%2==0){
                    weightChange(graph);
                  }

     }


return dist[dst];
}

void draw()
{
//system("color 97");
//setbkcolor(GREEN);
line(0+a,11*y+b,2*x+a,9*y+b);
line(2*x+a,9*y+b,2*x+a,7*y+b);
line(2*x+a,7*y+b,0*x+a,5*y+ b);
line(0*x+a,5*y+b,0*x+a,2*y+b);
line(2*x+a,7*y+b,4*x+a,5*y+b);
line(1*x+a,1*y+b,9*x+a,1*y+b);
line(4*x+a,1*y+b,5*x+a,0*y+b);
line(8*x+a,11*y+b,9*x+a,11*y+b);
line(6*x+a,1*y+b,5*x+a,0*y+b);
line(8*x+a,1*y+b,9*x+a,0*y+b);
line(11*x+a,0*y+b,11*x+a,3*y+b);
line(2*x+a,1*y+b,2*x+a,2*y+b);
line(3*x+a,3*y+b,1*x+a,1*y+b);
line(2*x+a,9*y+b,4*x+a,9*y+b);
line(6*x+a,11*y+b,5*x+a,11*y+b);
line(10*x+a,4*y+b,10*x+a,5*y+b);
line(4*x+a,9*y+b,6*x+a,11*y+b);
line(9*x+a,11*y+b,10*x+a,10*y+b);
line(10*x+a,10*y+b,11*x+a,11*y+b);
line(10*x+a,10*y+b,10*x+a,8*y+b);
line(10*x+a,8*y+b,11*x+a,7*y+b);
line(4*x+a,5*y+b,5*x+a,5*y+b);
line(6*x+a,6*y+b,6*x+a,7*y+b);
line(7*x+a,8*y+b,7*x+a,10*y+b);
line(6*x+a,7*y+b,7*x+a,8*y+b);
line(9*x+a,0*y+b,9*x+a,3*y+b);
line(10*x+a,4*y+b,11*x+a,3*y+b);
line(11*x+a,7*y+b,11*x+a,5*y+b);
line(10*x+a,5*y+b,7*x+a,8*y+b);
line(10*x+a,5*y+b,11*x+a,5*y+b);
line(9*x+a,3*y+b,11*x+a,5*y+b);
line(0*x+a,0*y+b,1*x+a,1*y+b);
line(0*x+a,2*y+b,1*x+a,1*y+b);
line(3*x+a,3*y+b,3*x+a,4*y+b);
line(3*x+a,4*y+b,4*x+a,5*y+b);
line(7*x+a,10*y+b,6*x+a,11*y+b);
line(7*x+a,10*y+b,8*x+a,11*y+b);
line(5*x+a,10*y+b,5*x+a,11*y+b);
line(2*x+a,8*y+b,3*x+a,9*y+b);
line(5*x+a,5*y+b,6*x+a,6*y+b);
line(6*x+a,6*y+b,7*x+a,5*y+b);
line(8*x+a,1*y+b,9*x+a,2*y+b);
line(2*x+a,2*y+b,3*x+a,1*y+b);
line(11*x+a,6*y+b,10*x+a,5*y+b);
outtextxy(2*x+a,2*y+b,"JAIPUR");
outtextxy(7*x+a,5*y+b,"FARIDABAD");
outtextxy(3*x+a,6*y+b,"GWALIOR");
outtextxy(0*x+a,11*y+b,"NOIDA");
outtextxy(10*x+a,4*y+b,"GHAZIABAD");
outtextxy(7*x+a,8*y+b,"PATNA");
outtextxy(10*x+a,11*y+b,"KANPUR");
outtextxy(9.5*x+a,0*y+b,"LUCKNOW");
outtextxy(5*x+a,11*y+b,"MORADABAD");
outtextxy(5*x+a,0*y+b,"GURUGRAM");
outtextxy(0*x+a,0*y+b,"DELHI");
//setbkcolor(GREEN);
}
typedef pair<int, int> Pair;
typedef pair<double, pair<int, int> > pPair;
struct cell
{
    int parent_i, parent_j;
    double f, g, h;
};
bool isValid(int row, int col)
{
    return (row >= 0) && (row < ROW) &&
           (col >= 0) && (col < COL);
}
bool isUnBlocked(int grid[][COL], int row, int col)
{
    if (grid[row][col] >= 1)
        return (true);
    else
        return (false);
}
bool isDestination(int row, int col, Pair dest)
{
    if (row == dest.first && col == dest.second)
        return (true);
    else
        return (false);
}
double calculateHValue(int row, int col, Pair dest)
{
    return ((double)sqrt ((row-dest.first)*(row-dest.first)
                          + (col-dest.second)*(col-dest.second)));
}
void tracePath(cell cellDetails[][COL], Pair dest)
{
    printf ("\nThe Path is ");
    int row = dest.first;
    int col = dest.second;

    stack<Pair> Path;
    while (!(cellDetails[row][col].parent_i == row
             && cellDetails[row][col].parent_j == col ))
    {
        Path.push (make_pair (row, col));
        int temp_row = cellDetails[row][col].parent_i;
        int temp_col = cellDetails[row][col].parent_j;
        row = temp_row;
        col = temp_col;

    }
    Path.push (make_pair (row, col));
    while (!Path.empty())
    {
        pair<int,int> p = Path.top();
        Path.pop();
        printf("-> (%d,%d) ",p.first,p.second);
        delay(500);

        circle(a+x*p.second,b+y*p.first,5);

        if(!Path.empty()){
            pair<int,int> q = Path.top();
            delay(500);
        circle(a+x*(p.second+q.second)/2,b+y*(p.first+q.first)/2,5);
        }
    }
    return;
}
void astar(int grid[][COL], Pair src, Pair dest)
{
    if (isValid (src.first, src.second) == false)
    {
        printf ("Source is invalid\n");
        return;
    }
    if (isValid (dest.first, dest.second) == false)
    {
        printf ("Destination is invalid\n");
        return;
    }
    if (isUnBlocked(grid, src.first, src.second) == false ||
            isUnBlocked(grid, dest.first, dest.second) == false)
    {
        printf ("Source or the destination is blocked\n");
        return;
    }
    if (isDestination(src.first, src.second, dest) == true)
    {
        printf ("We are already at the destination\n");
        return;
    }
    bool closedList[ROW][COL];
    memset(closedList, false, sizeof (closedList));
    cell cellDetails[ROW][COL];
    int i, j;
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            cellDetails[i][j].f = FLT_MAX;
            cellDetails[i][j].g = FLT_MAX;
            cellDetails[i][j].h = FLT_MAX;
            cellDetails[i][j].parent_i = -1;
            cellDetails[i][j].parent_j = -1;
        }
    }
    i = src.first, j = src.second;
    cellDetails[i][j].f = 0.0;
    cellDetails[i][j].g = 0.0;
    cellDetails[i][j].h = 0.0;
    cellDetails[i][j].parent_i = i;
    cellDetails[i][j].parent_j = j;
    set<pPair> openList;
    openList.insert(make_pair (0.0, make_pair (i, j)));
    bool foundDest = false;
    while (!openList.empty())
    {
        pPair p = *openList.begin();
        openList.erase(openList.begin());
        i = p.second.first;
        j = p.second.second;
        closedList[i][j] = true;
        double gNew, hNew, fNew;
        if (isValid(i-1, j) == true)
        {
            if (isDestination(i-1, j, dest) == true)
            {
                cellDetails[i-1][j].parent_i = i;
                cellDetails[i-1][j].parent_j = j;
                printf ("The destination cell is found\n");
                tracePath (cellDetails, dest);
                foundDest = true;
                return;
            }
            else if (closedList[i-1][j] == false &&
                     isUnBlocked(grid, i-1, j) == true)
            {
                gNew = cellDetails[i][j].g + 1.0;
                hNew = calculateHValue (i-1, j, dest);
                fNew = gNew + hNew;
                if (cellDetails[i-1][j].f == FLT_MAX ||
                        cellDetails[i-1][j].f > fNew)
                {
                    openList.insert( make_pair(fNew,make_pair(i-1, j)));
                    cellDetails[i-1][j].f = fNew;
                    cellDetails[i-1][j].g = gNew;
                    cellDetails[i-1][j].h = hNew;
                    cellDetails[i-1][j].parent_i = i;
                    cellDetails[i-1][j].parent_j = j;
                }
            }
        }
        if (isValid(i+1, j) == true)
        {
            if (isDestination(i+1, j, dest) == true)
            {
                cellDetails[i+1][j].parent_i = i;
                cellDetails[i+1][j].parent_j = j;
                printf("The destination cell is found\n");
                tracePath(cellDetails, dest);
                foundDest = true;
                return;
            }
            else if (closedList[i+1][j] == false &&
                     isUnBlocked(grid, i+1, j) == true)
            {
                gNew = cellDetails[i][j].g + 1.0;
                hNew = calculateHValue(i+1, j, dest);
                fNew = gNew + hNew;
                if (cellDetails[i+1][j].f == FLT_MAX ||
                        cellDetails[i+1][j].f > fNew)
                {
                    openList.insert( make_pair (fNew, make_pair (i+1, j)));
                    cellDetails[i+1][j].f = fNew;
                    cellDetails[i+1][j].g = gNew;
                    cellDetails[i+1][j].h = hNew;
                    cellDetails[i+1][j].parent_i = i;
                    cellDetails[i+1][j].parent_j = j;
                }
            }
        }
        if (isValid (i, j+1) == true)
        {
            if (isDestination(i, j+1, dest) == true)
            {
                cellDetails[i][j+1].parent_i = i;
                cellDetails[i][j+1].parent_j = j;
                printf("The destination cell is found\n");
                tracePath(cellDetails, dest);
                foundDest = true;
                return;
            }
            else if (closedList[i][j+1] == false &&
                     isUnBlocked (grid, i, j+1) == true)
            {
                gNew = cellDetails[i][j].g + 1.0;
                hNew = calculateHValue (i, j+1, dest);
                fNew = gNew + hNew;
                if (cellDetails[i][j+1].f == FLT_MAX ||
                        cellDetails[i][j+1].f > fNew)
                {
                    openList.insert( make_pair(fNew,
                                        make_pair (i, j+1)));
                    cellDetails[i][j+1].f = fNew;
                    cellDetails[i][j+1].g = gNew;
                    cellDetails[i][j+1].h = hNew;
                    cellDetails[i][j+1].parent_i = i;
                    cellDetails[i][j+1].parent_j = j;
                }
            }
        }
        if (isValid(i, j-1) == true)
        {
            if (isDestination(i, j-1, dest) == true)
            {
                cellDetails[i][j-1].parent_i = i;
                cellDetails[i][j-1].parent_j = j;
                printf("The destination cell is found\n");
                tracePath(cellDetails, dest);
                foundDest = true;
                return;
            }
            else if (closedList[i][j-1] == false &&
                     isUnBlocked(grid, i, j-1) == true)
            {
                gNew = cellDetails[i][j].g + 1.0;
                hNew = calculateHValue(i, j-1, dest);
                fNew = gNew + hNew;
                if (cellDetails[i][j-1].f == FLT_MAX ||
                        cellDetails[i][j-1].f > fNew)
                {
                    openList.insert( make_pair (fNew,
                                          make_pair (i, j-1)));
                    cellDetails[i][j-1].f = fNew;
                    cellDetails[i][j-1].g = gNew;
                    cellDetails[i][j-1].h = hNew;
                    cellDetails[i][j-1].parent_i = i;
                    cellDetails[i][j-1].parent_j = j;
                }
            }
        }
        if (isValid(i-1, j+1) == true)
        {
            if (isDestination(i-1, j+1, dest) == true)
            {
                cellDetails[i-1][j+1].parent_i = i;
                cellDetails[i-1][j+1].parent_j = j;
                printf ("The destination cell is found\n");
                tracePath (cellDetails, dest);
                foundDest = true;
                return;
            }
            else if (closedList[i-1][j+1] == false &&
                     isUnBlocked(grid, i-1, j+1) == true)
            {
                gNew = cellDetails[i][j].g + 1.414;
                hNew = calculateHValue(i-1, j+1, dest);
                fNew = gNew + hNew;
                if (cellDetails[i-1][j+1].f == FLT_MAX ||
                        cellDetails[i-1][j+1].f > fNew)
                {
                    openList.insert( make_pair (fNew,
                                    make_pair(i-1, j+1)));
                    cellDetails[i-1][j+1].f = fNew;
                    cellDetails[i-1][j+1].g = gNew;
                    cellDetails[i-1][j+1].h = hNew;
                    cellDetails[i-1][j+1].parent_i = i;
                    cellDetails[i-1][j+1].parent_j = j;
                }
            }
        }
        if (isValid (i-1, j-1) == true)
        {
            if (isDestination (i-1, j-1, dest) == true)
            {
                cellDetails[i-1][j-1].parent_i = i;
                cellDetails[i-1][j-1].parent_j = j;
                printf ("The destination cell is found\n");
                tracePath (cellDetails, dest);
                foundDest = true;
                return;
            }
            else if (closedList[i-1][j-1] == false &&
                     isUnBlocked(grid, i-1, j-1) == true)
            {
                gNew = cellDetails[i][j].g + 1.414;
                hNew = calculateHValue(i-1, j-1, dest);
                fNew = gNew + hNew;
                if (cellDetails[i-1][j-1].f == FLT_MAX ||
                        cellDetails[i-1][j-1].f > fNew)
                {
                    openList.insert( make_pair (fNew, make_pair (i-1, j-1)));
                    cellDetails[i-1][j-1].f = fNew;
                    cellDetails[i-1][j-1].g = gNew;
                    cellDetails[i-1][j-1].h = hNew;
                    cellDetails[i-1][j-1].parent_i = i;
                    cellDetails[i-1][j-1].parent_j = j;
                }
            }
        }
        if (isValid(i+1, j+1) == true)
        {
            if (isDestination(i+1, j+1, dest) == true)
            {
                cellDetails[i+1][j+1].parent_i = i;
                cellDetails[i+1][j+1].parent_j = j;
                printf ("The destination cell is found\n");
                tracePath (cellDetails, dest);
                foundDest = true;
                return;
            }
            else if (closedList[i+1][j+1] == false &&
                     isUnBlocked(grid, i+1, j+1) == true)
            {
                gNew = cellDetails[i][j].g + 1.414;
                hNew = calculateHValue(i+1, j+1, dest);
                fNew = gNew + hNew;
                if (cellDetails[i+1][j+1].f == FLT_MAX ||
                        cellDetails[i+1][j+1].f > fNew)
                {
                    openList.insert(make_pair(fNew,
                                        make_pair (i+1, j+1)));
                    cellDetails[i+1][j+1].f = fNew;
                    cellDetails[i+1][j+1].g = gNew;
                    cellDetails[i+1][j+1].h = hNew;
                    cellDetails[i+1][j+1].parent_i = i;
                    cellDetails[i+1][j+1].parent_j = j;
                }
            }
        }
        if (isValid (i+1, j-1) == true)
        {
            if (isDestination(i+1, j-1, dest) == true)
            {
                cellDetails[i+1][j-1].parent_i = i;
                cellDetails[i+1][j-1].parent_j = j;
                printf("The destination cell is found\n");
                tracePath(cellDetails, dest);
                foundDest = true;
                return;
            }
            else if (closedList[i+1][j-1] == false &&
                     isUnBlocked(grid, i+1, j-1) == true)
            {
                gNew = cellDetails[i][j].g + 1.414;
                hNew = calculateHValue(i+1, j-1, dest);
                fNew = gNew + hNew;
                if (cellDetails[i+1][j-1].f == FLT_MAX ||
                        cellDetails[i+1][j-1].f > fNew)
                {
                    openList.insert(make_pair(fNew,
                                        make_pair(i+1, j-1)));
                    cellDetails[i+1][j-1].f = fNew;
                    cellDetails[i+1][j-1].g = gNew;
                    cellDetails[i+1][j-1].h = hNew;
                    cellDetails[i+1][j-1].parent_i = i;
                    cellDetails[i+1][j-1].parent_j = j;
                }
            }
        }
    }
    if (foundDest == false)
        printf("Failed to find the Destination\n");

    return;
}
int main()
{


    //setbkcolor(RED);
    system("color 0A");
    int gd=DETECT;
    int i,j;
    int gm;
    char e[100];
    int xx;
    int flag=0;
   // initgraph(&gd,&gm,"C:\\TC\\BGI");
    DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenheight=GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenwidth,screenheight,"A star seach Algorithm");
    //setbkcolor("GREEN");
    int c=getmaxx();
    int d=getmaxy();

int gdriver=DETECT,gmode;
setbkcolor(3);
//setcolor();
draw();
i=a;
j=b;
int k;
     int x1,y1,x2,y2,ch,haha,lol;
    cout<<"PLACES ARE:-\n";
    cout<<" 1 : DELHI\n 2 : JAIPUR\n 3 : GURUGRAM\n 4 : FARIDABAD\n 5 : GHAZIABAD\n 6 : LUCKNOW\n 7 : GWAILOR\n 8 : NOIDA\n 9 : MORADABAD\n 10 : PATNA\n 11 : KANPUR\n";
    cout<<"Enter Source ->"<<endl;
    cin>>ch;
    haha=ch;
    switch(ch)
    {
        case 1: x1=0;
                y1=0;
                break;
        case 2: x1=2;
                y1=2;
                break;
        case 3: x1=0;
                y1=5;
                break;
        case 4: x1=5;
                y1=7;
                break;
        case 5: x1=4;
                y1=10;
                break;
        case 6: x1=0;
                y1=11;
                break;
        case 7: x1=6;
                y1=3;
                break;
        case 8: x1=11;
                y1=0;
                break;
        case 9: x1=11;
                y1=5;
                break;
        case 10: x1=8;
                 y1=7;
                 break;
        case 11: x1=11;
                 y1=11;
                 break;
        default: x1=0;
                 y1=0;
    }
    cout<<"Enter Destination ->"<<endl;
     cin>>ch;
     lol=ch;
    switch(ch)
    {
        case 1: x2=0;
                y2=0;
                break;
        case 2: x2=2;
                y2=2;
                break;
        case 3: x2=0;
                y2=5;
                break;
        case 4: x2=7;
                y2=5;
                break;
        case 5: x2=4;
                y2=10;
                break;
        case 6: x2=0;
                y2=11;
                break;
        case 7: x2=6;
                y2=3;
                break;
        case 8: x2=11;
                y2=0;
                break;
        case 9: x2=11;
                y2=5;
                break;
        case 10: x2=8;
                 y2=7;
                 break;
        case 11: x2=11;
                 y2=11;
                 break;
        default: x2=0;
                 y2=0;
    }
   int grid[ROW][COL] =
    {
        { 2, 0,  0,  0,  0,  3,  0,   0,  0,  9,  0,  11 },
        { 0, 3,  7,  8,  9, 12, 13,  14, 18, 2,  0,  12 },
        { 3, 0,  9, 0,  0,  0,  0,  0, 0,   6,  0,  7},
        { 7, 0,  0,  9,  0, 0,  0,  0, 0,  10, 0,  11 },
        { 8, 0,  0,  10, 0, 0,  0,  0, 0,  0,  5,  0 },
        { 1, 0,  0,  0,  6, 13, 0,  17, 0,  0,  5,  12 },
        { 0, 1,  0,  10,  0, 0,  11, 0, 0,  14, 0,  15 },
        { 0, 0,  7,  0,  0, 0,  12, 0, 18, 0,  0,  5 },
        { 0, 0,  1,  0,  0, 0,  0,  19, 0,  0,  16, 0 },
        { 0, 0,  2,  1,  11, 0,  0,  14, 0,  0,  11, 0 },
        { 0, 1, 0,  0,  0, 11, 0,  15, 0,  0,  25, 0 },
        { 4, 0,  0,  0,  0, 8, 12,  0, 12,  12,  0,  3}
    };



       int ans= dijkstra(grid,haha,lol);
     char arr[400];
    sprintf(arr,"MINIMUM TIME OF TRAVELLING IS =  %d",ans);
     outtextxy(15*x+0.1*a,5*y+0.1*b,arr);
    Pair src = make_pair(x1,y1);
    Pair dest = make_pair(x2,y2);
    astar(grid, src, dest);
getch();
closegraph();
restorecrtmode();
return(0);
}
