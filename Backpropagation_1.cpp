#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<iomanip>
#define eta 1
using namespace std;

int main()
    {
    float ip[3][3] = {{0.0},{0.0}}, wt[6][6]  = {{0.0},{0.0}};
    float dop[2] = {0.0};
    int row =1, col=2;
    char ans = ' ',choice= ' ';
    int d0=-1, d1=1, d2=2;
    cout<<endl<<"Enter weight matrix: "<<endl;
     for(int i=0; i<2; i++)
     {
                cout<<"Enter element w"<<(i+1)<<": ";
                cin>>wt[i][0];
     }
     cout<<"Enter b1: ";
     cin>>wt[2][0];
     wt[2][1]=wt[2][0];
     for(int i=0; i<2; i++)
     {
                cout<<"Enter element w"<<(i+3)<<": ";
                cin>>wt[i][1];
     }

    cout<<endl<<"Weight matrix: "<<endl;
    for(int p=0; p<3; p++)
        {
            for(int o =0; o<2; o++)
            {
                cout<<wt[p][o]<<"\t";
            }
            cout<<endl;
        }
    cout<<endl;
    float wt2[6][6]  = {{0.0},{0.0}};
    cout<<endl<<"Enter weight matrix for hidden layer: "<<endl;
     for(int i=0; i<2; i++)
     {
                cout<<"Enter element w"<<(i+5)<<": ";
                cin>>wt2[i][0];
     }
     cout<<"Enter b2: ";
     cin>>wt2[2][0];
     wt2[2][1]=wt2[2][0];
     for(int i=0; i<2; i++)
     {
                cout<<"Enter element w"<<(i+7)<<": ";
                cin>>wt2[i][1];
     }
    cout<<endl<<"Weight matrix for hidden layer: "<<endl;
    for(int p=0; p<3; p++)
        {
            for(int o =0; o<2; o++)
            {
                cout<<wt2[p][o]<<"\t";
            }
            cout<<endl;
        }
////////////////////////////////////////////////////////////////////////STATIC TRAINING////////////////////////////////////
float train[10][3][3] = {{0.0},{0.0},{0.0}};
int dtrain[10][2] = {{0},{0}};
int tcount = 0;

train[0][0][0] = 5.1;
train[0][0][1] = 1.4;
dtrain[0][0] = d0;
dtrain[0][1] = d0;

train[1][0][0] = 4.9;
train[1][0][1] = 1.4;
dtrain[1][0] = d0;
dtrain[1][1] = d0;

train[2][0][0] = 7.0;
train[2][0][1] = 4.7;
dtrain[2][0] = d1;
dtrain[2][1] = d1;

train[3][0][0] = 6.4;
train[3][0][1] = 4.5;
dtrain[3][0] = d1;
dtrain[3][1] = d1;

train[4][0][0] = 6.3;
train[4][0][1] = 6.0;
dtrain[4][0] = d2;
dtrain[4][1] = d2;

train[5][0][0] = 5.8;
train[5][0][1] = 5.1;
dtrain[5][0] = d2;
dtrain[5][1] = d2;

train[6][0][0] = 4.7;
train[6][0][1] = 1.3;
dtrain[6][0] = d0;
dtrain[6][1] = d0;
/////////////////////
train[0][0][0] = 5.4;
train[0][0][1] = 1.7;
dtrain[0][0] = d0;
dtrain[0][1] = d0;

train[0][0][0] = 4.6;
train[0][0][1] = 1.4;
dtrain[0][0] = d0;
dtrain[0][1] = d0;

train[0][0][0] = 5.0;
train[0][0][1] = 1.5;
dtrain[0][0] = d0;
dtrain[0][1] = d0;

train[0][0][0] = 4.4;
train[0][0][1] = 1.4;
dtrain[0][0] = d0;
dtrain[0][1] = d0;

train[0][0][0] = 4.9;
train[0][0][1] = 1.5;
dtrain[0][0] = d0;
dtrain[0][1] = d0;

train[0][0][0] = 5.4;
train[0][0][1] = 1.5;
dtrain[0][0] = d0;
dtrain[0][1] = d0;

train[0][0][0] = 4.8;
train[0][0][1] = 1.6;
dtrain[0][0] = d0;
dtrain[0][1] = d0;

/////////////////////////////
train[0][0][0] = 6.3;
train[0][0][1] = 4.7;
dtrain[0][0] = d1;
dtrain[0][1] = d1;

train[0][0][0] = 4.9;
train[0][0][1] = 3.3;
dtrain[0][0] = d1;
dtrain[0][1] = d1;

train[0][0][0] = 6.6;
train[0][0][1] = 4.6;
dtrain[0][0] = d1;
dtrain[0][1] = d1;

train[0][0][0] = 5.2;
train[0][0][1] = 3.9;
dtrain[0][0] = d1;
dtrain[0][1] = d1;

train[0][0][0] = 5.0;
train[0][0][1] = 3.5;
dtrain[0][0] = d1;
dtrain[0][1] = d1;

train[0][0][0] = 5.9;
train[0][0][1] = 4.2;
dtrain[0][0] = d1;
dtrain[0][1] = d1;

train[0][0][0] = 6.0;
train[0][0][1] = 4.0;
dtrain[0][0] = d1;
dtrain[0][1] = d1;
/////////////////////////////////
train[5][0][0] = 4.9;
train[5][0][1] = 4.5;
dtrain[5][0] = d2;
dtrain[5][1] = d2;

train[5][0][0] = 7.3;
train[5][0][1] = 4.3;
dtrain[5][0] = d2;
dtrain[5][1] = d2;

train[5][0][0] = 6.7;
train[5][0][1] = 5.8;
dtrain[5][0] = d2;
dtrain[5][1] = d2;

train[5][0][0] = 7.2;
train[5][0][1] = 6.1;
dtrain[5][0] = d2;
dtrain[5][1] = d2;

train[5][0][0] = 6.5;
train[5][0][1] = 5.1;
dtrain[5][0] = d2;
dtrain[5][1] = d2;

train[5][0][0] = 6.4;
train[5][0][1] = 5.3;
dtrain[5][0] = d2;
dtrain[5][1] = d2;

train[5][0][0] = 6.8;
train[5][0][1] = 5.5;
dtrain[5][0] = d2;
dtrain[5][1] = d2;

for(int z=0 ;z<10; z++)
{
    tcount = 0;
   do{
    float net[2]={0.0};
    net[0] = wt[0][0]*train[z][0][0]+wt[1][0]*train[z][0][1]+wt[2][0]*train[z][0][2];
    net[1] = wt[0][1]*train[z][0][0]+wt[1][1]*train[z][0][1]+wt[2][1]*train[z][0][2];

    float outh[3] = {0.0};
    cout<<endl;
    for(int i=0;i<2;i++)
    {
    outh[i] = (1/(1+pow(2.71,-1*net[i])));
    }
    cout<<endl;
    outh[2] = 1;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    float net2[2]={0.0};
    net2[0] = wt2[0][0]*outh[0]+wt2[1][0]*outh[1]+wt2[2][0]*outh[2];
    net2[1] = wt2[0][1]*outh[0]+wt2[1][1]*outh[1]+wt2[2][1]*outh[2];

    float out[2] = {0.0};
    for(int i=0;i<2;i++)
    {
    out[i] = (1/(1+pow(2.71,-1*net2[i])));
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    float errarr[2] = {0.0};
    float Err = 0.0;
    for(int i=0; i<2; i++)
    {

        Err = (0.5*pow((dtrain[z][i]-out[i]),2));
    }
//////////////////////////////////////////BACKWARD PASS///////////////////////////////STATIC///////////////////////////////
//////////////////////////////////////////BACKWARD PASS///////////////////////////////STATIC//////////////////////////////
    float tdelEw5 = 0.0;
    tdelEw5 = -1*((dtrain[z][0]-out[0])*(out[0]*(1-out[0]))*outh[0]);
    wt2[0][0] = wt2[0][0] - eta*tdelEw5;
    ///////////////////////////////////
    float tdelEw6 = 0.0;
    tdelEw6 = -1*((dtrain[z][0]-out[0])*(out[0]*(1-out[0]))*outh[1]);
    wt2[1][0] = wt2[1][0] - eta*tdelEw6;
///////////////////////////////////
    float tdelEw7 = 0.0;
    tdelEw7 = -1*((dtrain[z][1]-out[1])*(out[1]*(1-out[1]))*outh[0]);
    wt2[0][1] = wt2[0][1] - eta*tdelEw7;
///////////////////////////////////
    float tdelEw8 = 0.0;
    tdelEw8 = -1*((dtrain[z][1]-out[1])*(out[1]*(1-out[1]))*outh[1]);
    wt2[1][1] = wt2[1][1] - eta*tdelEw7;
/////////////////////////////////////////////////UNHIDDEN LAYER///////////////////////////////////////////////////
    float tdelEw1 = 0.0;
    float tdelEw1_1 = 0.0;
    tdelEw1_1 = -1*((dtrain[z][0]-out[0])*out[0]*(1-out[0]))+ (-1)*((dop[0]-out[1])*out[1]*(1-out[0]));
    tdelEw1 = tdelEw1_1*outh[0]*(1-outh[0])*ip[0][0];
    wt[0][0] = wt[0][0] -1*eta*tdelEw1;
//////////////////////////////////////////////////////////////////////////////////
    float tdelEw2 = 0.0;
    float tdelEw2_1 = 0.0;
    tdelEw2_1 = -1*((dtrain[z][0]-out[0])*out[0]*(1-out[0]))+ (-1)*((dop[0]-out[1])*out[1]*(1-out[0]));
    tdelEw2 = tdelEw2_1*outh[0]*(1-outh[0])*ip[0][1];
    wt[1][0] = wt[1][0] -1*eta*tdelEw2;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    float tdelEw3 = 0.0;
    float tdelEw3_1 = 0.0;
    tdelEw3_1 = -1*((dtrain[z][1]-out[0])*out[0]*(1-out[0]))+ (-1)*((dop[1]-out[1])*out[1]*(1-out[0]));
    tdelEw3 = tdelEw1_1*outh[1]*(1-outh[1])*ip[0][0];
    wt[0][1] = wt[0][1] -1*eta*tdelEw3;
//////////////////////////////////////////////////////////////////////////////////
    float tdelEw4 = 0.0;
    float tdelEw4_1 = 0.0;
    tdelEw4_1 = -1*((dtrain[z][1]-out[0])*out[0]*(1-out[0]))+ (-1)*((dop[1]-out[1])*out[1]*(1-out[0]));
    tdelEw4 = tdelEw4_1*outh[1]*(1-outh[1])*ip[0][1];
    wt[1][1] = wt[1][1] -1*eta*tdelEw4;

    tcount++;
   }while(tcount != 8);
}
///////////////////////////////////////////////////////DYNAMIC TRAINING/////////////////////////////////////////////////////
   do{
    system("cls");
    int count =0;
    float errdisp[5] = {0.0};
   /* cout<<"Enter row and column "<<endl;
    cin>>row>>col;
    */
    cout<<endl<<"Enter input matrix: "<<endl;
    for(int i=0; i<row; i++)
       {

        for(int j=0; j<col; j++)
            {
        if(j == 0)
            {
                cout<<"Enter sepal length: ";
                cin>>ip[i][j];
            }
        else if(j == 1)
            {
                cout<<"Enter petal length: ";
                cin>>ip[i][j];
            }
            }
        }
    cout<<endl<<"Enter the desired class: "<<endl;
    cin>>dop[0];
    dop[1] = dop[1];


    cout<<endl;
    cout<<endl<<"Press any key to perform iterations "<<endl;
    system("pause");
    system("cls");
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
do{
    //multiply
    float net[2]={0.0};
    net[0] = wt[0][0]*ip[0][0]+wt[1][0]*ip[0][1]+wt[2][0]*ip[0][2];
    net[1] = wt[0][1]*ip[0][0]+wt[1][1]*ip[0][1]+wt[2][1]*ip[0][2];
    //cout<<"-------------------------------";
    //cout<<"ITERATION "<<count+1<<" -------------------------------------"<<endl<<endl;
    //cout<<endl<<"Net 1 and 2: "<<endl;
    //for(int l=0;l<2;l++)
    //   cout<<net[l]<<" ";
    float outh[3] = {0.0};
    cout<<endl;
    for(int i=0;i<2;i++)
    {
    outh[i] = (1/(1+pow(2.71,-1*net[i])));
    //cout<<endl<<"outh"<<i+1<<" is: "<<outh[i];
    }
    cout<<endl;
    outh[2] = 1;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    float net2[2]={0.0};
    net2[0] = wt2[0][0]*outh[0]+wt2[1][0]*outh[1]+wt2[2][0]*outh[2];
    net2[1] = wt2[0][1]*outh[0]+wt2[1][1]*outh[1]+wt2[2][1]*outh[2];

    //cout<<"Net 1 and 2 (hidden layer): "<<endl;
    //for(int l=0;l<2;l++)
    //    cout<<net2[l]<<" ";
    float out[2] = {0.0};
    for(int i=0;i<2;i++)
    {
    out[i] = (1/(1+pow(2.71,-1*net2[i])));
    //cout<<endl<<"out"<<i+1<<" is: "<<out[i];
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    float errarr[2] = {0.0};
    float Err = 0.0;
    for(int i=0; i<2; i++)
    {

        Err = (0.5*pow((dop[i]-out[i]),2));
    }
    //cout<<endl<<"------------------------------------------------------ERROR "<<count+1<<"-------------------";
    //cout<<endl<<"Error is: "<<Err<<endl;
    //cout<<"--------------------------------------------------------------------------------";
    errdisp[count] = Err;
//////////////////////////////////////////BACKWARD PASS//////////////////////////////////////////////////////////////
//////////////////////////////////////////BACKWARD PASS//////////////////////////////////////////////////////////////
    float delEw5 = 0.0;
    delEw5 = -1*((dop[0]-out[0])*(out[0]*(1-out[0]))*outh[0]);
    wt2[0][0] = wt2[0][0] - eta*delEw5;
    ///////////////////////////////////
    float delEw6 = 0.0;
    delEw6 = -1*((dop[0]-out[0])*(out[0]*(1-out[0]))*outh[1]);
    wt2[1][0] = wt2[1][0] - eta*delEw6;
///////////////////////////////////
    float delEw7 = 0.0;
    delEw7 = -1*((dop[1]-out[1])*(out[1]*(1-out[1]))*outh[0]);
    wt2[0][1] = wt2[0][1] - eta*delEw7;
///////////////////////////////////
    float delEw8 = 0.0;
    delEw8 = -1*((dop[1]-out[1])*(out[1]*(1-out[1]))*outh[1]);
    wt2[1][1] = wt2[1][1] - eta*delEw7;
//////////////////////////////////////
    //cout<<endl<<"The updated hidden weights are: "<<endl;
    for(int p=0; p<3; p++)
        {
            for(int o =0; o<2; o++)
            {
      //          cout<<wt2[p][o]<<"\t\t";
            }
            cout<<endl;
        }
    cout<<endl;
/////////////////////////////////////////////////UNHIDDEN LAYER///////////////////////////////////////////////////
    float delEw1 = 0.0;
    float delEw1_1 = 0.0;
    delEw1_1 = -1*((dop[0]-out[0])*out[0]*(1-out[0]))+ (-1)*((dop[0]-out[1])*out[1]*(1-out[0]));
    delEw1 = delEw1_1*outh[0]*(1-outh[0])*ip[0][0];
    wt[0][0] = wt[0][0] -1*eta*delEw1;
//////////////////////////////////////////////////////////////////////////////////
    float delEw2 = 0.0;
    float delEw2_1 = 0.0;
    delEw2_1 = -1*((dop[0]-out[0])*out[0]*(1-out[0]))+ (-1)*((dop[0]-out[1])*out[1]*(1-out[0]));
    delEw2 = delEw2_1*outh[0]*(1-outh[0])*ip[0][1];
    wt[1][0] = wt[1][0] -1*eta*delEw2;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    float delEw3 = 0.0;
    float delEw3_1 = 0.0;
    delEw3_1 = -1*((dop[1]-out[0])*out[0]*(1-out[0]))+ (-1)*((dop[1]-out[1])*out[1]*(1-out[0]));
    delEw3 = delEw1_1*outh[1]*(1-outh[1])*ip[0][0];
    wt[0][1] = wt[0][1] -1*eta*delEw3;
//////////////////////////////////////////////////////////////////////////////////
    float delEw4 = 0.0;
    float delEw4_1 = 0.0;
    delEw4_1 = -1*((dop[1]-out[0])*out[0]*(1-out[0]))+ (-1)*((dop[1]-out[1])*out[1]*(1-out[0]));
    delEw4 = delEw4_1*outh[1]*(1-outh[1])*ip[0][1];
    wt[1][1] = wt[1][1] -1*eta*delEw4;
////////////////////////////////////////////////////////////////////////////////////////////////////
   // cout<<endl<<"The updated weights are: "<<endl;
    for(int p=0; p<3; p++)
        {
            for(int o =0; o<2; o++)
            {
    //            cout<<wt[p][o]<<"\t\t";
            }
            cout<<endl;
        }
    cout<<endl;
    count++;
    }while(count != 8);
    /*cout<<endl<<endl;
    for(int k=0; k<5; k++)
        {
            cout<<setprecision(6);
            cout<<"Error "<<k+1<<" is "<<errdisp[count]<<endl;
        }*/

    system("cls");
    cout<<"Enter new data?(y/n)";
    cin>>ans;
   }while(ans == 'y' && ans != 'n');
   system("cls");
    cout<<"The updated matrix is: "<<endl;
    for(int p=0; p<3; p++)
        {
            for(int o =0; o<2; o++)
            {
                cout<<wt[p][o]<<"\t\t";
            }
            cout<<endl;
        }
    cout<<endl<<endl;
    cout<<"Hidden matrix: "<<endl;
    for(int p=0; p<3; p++)
        {
            for(int o =0; o<2; o++)
            {
                cout<<wt2[p][o]<<"\t\t";
            }
            cout<<endl;
        }
    cout<<endl<<endl<<"Press any key to proceed"<<endl;
    system("Pause");
    ///////////////////////////////////////////////////////////////////////TEST DATA/////////////////////////

 //do{
    system("cls");
   cout<<"TEST DATA"<<endl;
   float data[3][3] = {{0.0},{0.0}};
   //intitialization
   for(int m=0; m<3; m++)
    for(int k=0;k<3;k++)
        data[m][k] = 0.0;

   cout<<"Enter data set: "<<endl;
   for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            {

        if(j ==0 )
            {
                cout<<"Enter sepal length: ";
                cin>>data[i][j];
            }
        else if(j == 1)
            {
                cout<<"Enter petal length: ";
                cin>>data[i][j];
            }
            }
    /////////////////////////////////////////calculating
    float net[2]={0.0,0.0};
    net[0] = wt[0][0]*data[0][0]+wt[1][0]*data[0][1]+wt[2][0]*data[0][2];
    net[1] = wt[0][1]*data[0][0]+wt[1][1]*data[0][1]+wt[2][1]*data[0][2];

    float outh[3] = {0.0,0.0};
    cout<<endl;
    for(int i=0;i<2;i++)
    {
    outh[i] = (1/(1+pow(2.71,-1*net[i])));

    }
    cout<<endl;
    outh[2] = 1;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    float net2[2]={0.0};
    net2[0] = wt2[0][0]*outh[0]+wt2[1][0]*outh[1]+wt2[2][0]*outh[2];
    net2[1] = wt2[0][1]*outh[0]+wt2[1][1]*outh[1]+wt2[2][1]*outh[2];


    float out[2] = {0.0,0.0};
    for(int i=0;i<2;i++)
    {
    out[i] = (1/(1+pow(2.71,-1*net2[i])));

    }
    cout<<endl<<"Output is: "<<endl;
    for(int i=0; i<2; i++)
        cout<<out[i]<<endl;
    cout<<endl;

    if(out[0]>=0 && out[0]<0.25)
        {cout<<"Flower: I.Setosa"<<endl;}
    else if(out[0]>=0.25 && out[0]<0.65)
        {cout<<"Flower: I.Versicolor"<<endl;}
    else if(out[0]>=0.65 && out[0]<1)
        {cout<<"Flower: I.Virginica"<<endl;}
    //cout<<endl<<"Do you wish to continue?(y/n): ";
    //cin>>choice;
  //  }while(choice == 'y' && choice!= 'n');

    return 0;
    }
