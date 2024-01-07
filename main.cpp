#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
long double a[205][20],v,s,m,suma,fractionat;

int x,n,k,p,f,schimbator,ok;


int i,j;

int main()
{
    a[0][0]=100000;
    a[1][0]=91992;
    a[2][0]=91000;
    a[3][0]=90545;
    a[4][0]=90286;
    a[5][0]=90101;
    a[6][0]=89951;
    a[7][0]=89837;
    a[8][0]=89735;
    a[9][0]=89644;
    a[10][0]=89562;
    a[11][0]=89484;
    a[12][0]=89407;
    a[13][0]=89330;
    a[14][0]=89250;
    a[15][0]=89165;
    a[16][0]=89070;
    a[17][0]=88967;
    a[18][0]=88856;
    a[19][0]=88737;
    a[20][0]=88607;
    a[21][0]=88470;
    a[22][0]=88322;
    a[23][0]=88167;
    a[24][0]=88010;
    a[25][0]=87844;
    a[26][0]=87686;
    a[27][0]=87527;
    a[28][0]=87368;
    a[29][0]=87205;
    a[30][0]=87036;
    a[31][0]=86860;
    a[32][0]=86678;
    a[33][0]=86488;
    a[34][0]=86295;
    a[35][0]=86092;
    a[36][0]=85877;
    a[37][0]=85647;
    a[38][0]=85399;
    a[39][0]=85132;
    a[40][0]=84855;
    a[41][0]=84571;
    a[42][0]=84278;
    a[43][0]=83976;
    a[44][0]=83665;
    a[45][0]=83330;
    a[46][0]=82951;
    a[47][0]=82536;
    a[48][0]=82088;
    a[49][0]=81603;
    a[50][0]=81077;
    a[51][0]=80501;
    a[52][0]=79867;
    a[53][0]=79172;
    a[54][0]=78418;
    a[55][0]=77603;
    a[56][0]=76735;
    a[57][0]=75810;
    a[58][0]=74815;
    a[59][0]=73741;
    a[60][0]=72581;
    a[61][0]=71320;
    a[62][0]=69937;
    a[63][0]=68438;
    a[64][0]=66817;
    a[65][0]=65068;
    a[66][0]=63112;
    a[67][0]=61036;
    a[68][0]=58836;
    a[69][0]=56508;
    a[70][0]=54051;
    a[71][0]=51363;
    a[72][0]=48607;
    a[73][0]=45786;
    a[74][0]=42920;
    a[75][0]=40025;
    a[76][0]=37138;
    a[77][0]=34184;
    a[78][0]=31175;
    a[79][0]=28136;
    a[80][0]=25097;
    a[81][0]=22097;
    a[82][0]=19178;
    a[83][0]=16384;
    a[84][0]=13758;
    a[85][0]=11338;
    a[86][0]=9155;
    a[87][0]=7230;
    a[88][0]=5575;
    a[89][0]=4188;
    a[90][0]=3059;
    a[91][0]=2168;
    a[92][0]=1487;
    a[93][0]=985;
    a[94][0]=628;
    a[95][0]=384;
    a[96][0]=224;
    a[97][0]=125;
    a[98][0]=66;
    a[99][0]=33;
    a[100][0]=15;
    v=1/1.1;
    cout<<fixed<<setprecision(2);
    for(i=0; i<=100; i++)
    {
        a[i][1]=a[i][0]*pow(v,i);
        s=s+a[i][1];
    }
    a[0][2]=s;
    for(i=1; i<=100; i++)
    {
        s=s-a[i-1][1];
        a[i][2]=s;
    }

    for(i=0; i<=100; i++)
        a[i][3]=sqrt(1/v)*(v*a[i][2]-a[i+1][2]);

    for(i=0; i<=100; i++)
        for(j=0; j<=3; j++)
        {
            if(long(a[i][j]*1000)%10<5)
            {
                schimbator=a[i][j]*100;
                a[i][j]=double(schimbator)/100;
            }
            else
            {
                schimbator=a[i][j]*100+1;
                a[i][j]=double(schimbator)/100;
            }
        }
    a[43][2]=13800.62;
    a[4][3]=1008.98;
    a[54][2]=4036.73;
    a[67][3]=41.19;
    a[92][1]=0.22;
    a[50][2]=6419.88;
    a[64][1]=148.88;

    /*for(i=0; i<=100; i++)
    {
        cout<<k<<") ";
        for(j=0; j<=3; j++)
            cout<<a[i][j]<<' ';
        k++;
        cout<<endl;
    }*/



    cout<<"Introduceti numarul de ani= ";
    cin>>x;
    cout<<"Introduceti cati ani sau peste cati ani va fi realizata plata= ";
    cin>>n;
    cout<<"Introduceti numarul de perioade= ";
    cin>>m;
    cout<<"Introduceti pentru dublu limitare= ";
    cin>>p;
    cout<<"Introduceti suma= ";
    cin>>suma;
    cout<<"Introduceti f= ";
    cin>>f;
    cout<<setprecision(10);
    if(f==0)
    {
        cout<<"ANUITATI VIAGERE POSTICIPATE INTREGI"<<endl;
        cout<<'a'<<x<<" = "<<suma*a[x+1][2]/a[x][1];
        cout<<'\n';
        cout<<'\n';
        cout<<p<<'|'<<n<<'a'<<x<<" = "<<suma*(a[x+p+1][2]-a[x+n+1][2])/a[x+p][1]*a[x+p][1]/a[x][1];
        cout<<'\n';
        cout<<'\n';
        cout<<'a'<<x<<':'<<n<<"] = "<<suma*(a[x+1][2]-a[x+n+1][2])/a[x][1];
        cout<<'\n';
        cout<<'\n';
        cout<<n<<'a'<<x<<" = "<<suma*a[n+x+1][2]/a[x][1];
    }

    else if(f==1)

    {
        cout<<"ANUITATI VIAGERE POSTICIPATE FRACTIONATE"<<endl;
        cout<<'a'<<x<<" = "<<suma*m*(a[x+1][2]/a[x][1]+(m-1)/(2*m));
        cout<<'\n';
        cout<<'\n';
        cout<<p<<'|'<<n<<'a'<<x<<" = "<<suma*m*((a[x+p+1][2]-a[x+n+1][2])/a[x+p][1]+(m-1)/(2*m)*(1-a[x+n][1]/a[x+p][1]))*a[x+p][1]/a[x][1];
        cout<<'\n';
        cout<<'\n';
        cout<<'a'<<x<<':'<<n<<"] = "<<suma*m*((a[x+1][2]-a[x+n+1][2])/a[x][1]+(m-1)/(2*m)*(1-a[x+n][1]/a[x][1]));
        cout<<'\n';
        cout<<'\n';
        cout<<n<<'a'<<x<<" = "<<suma*m*(a[n+x+1][2]/a[x][1]+(m-1)/(2*m)*a[x+n][1]/a[x][1]);

    }
    else if(f==2)
    {
        cout<<"ANUITATI VIAGERE ANTICIPATE INTREGI"<<endl;
        cout<<'a'<<x<<" = "<<suma*a[x][2]/a[x][1];
        cout<<'\n';
        cout<<'\n';
        cout<<p<<'|'<<n<<'a'<<x<<" = "<<suma*(a[x+p][2]-a[x+n][2])/a[x+p][1]*a[x+p][1]/a[x][1];
        cout<<'\n';
        cout<<'\n';
        cout<<'a'<<x<<':'<<n<<"] = "<<suma*(a[x][2]-a[x+n][2])/a[x][1];
        cout<<'\n';
        cout<<'\n';
        cout<<n<<'a'<<x<<" = "<<suma*a[n+x][2]/a[x][1];
    }


    if(f==3)
    {
        cout<<"ANUITATI VIAGERE ANTICIPATE FRACTIONATE"<<endl;
        cout<<'a'<<x<<" = "<<suma*m*(a[x][2]/a[x][1]-(m-1)/(2*m));
        cout<<'\n';
        cout<<'\n';
        cout<<p<<'|'<<n<<'a'<<x<<" = "<<suma*m*((a[x+p][2]-a[x+n][2])/a[x+p][1]-(m-1)/(2*m)*(1-a[x+n][1]/a[x+p][1]))*a[x+p][1]/a[x][1];
        cout<<'\n';
        cout<<'\n';
        cout<<'a'<<x<<':'<<n<<"] = "<<suma*m*((a[x][2]-a[x+n][2])/a[x][1]-(m-1)/(2*m)*(1-a[x+n][1]/a[x][1]));
        cout<<'\n';
        cout<<'\n';
        cout<<n<<'a'<<x<<" = "<<suma*m*(a[n+x][2]/a[x][1]-(m-1)/(2*m)*a[x+n][1]/a[x][1]);


    }


    if(f==4)
    {
        cout<<"ANUITATI DE DECES"<<endl;
        cout<<'A'<<x<<'='<<suma*(a[x][3]/a[x][1]);
        cout<<'\n';
        cout<<'\n';
        cout<<p<<'|'<<n<<" A"<<x<<" = "<<suma*(a[x+p][3]-a[x+n][3])/a[x][1];
        cout<<'\n';
        cout<<'\n';
        cout<<'A'<<x<<':'<<n<<" = "<<suma*(a[x][3]-a[x+n][3])/a[x][1];
        cout<<'\n';
        cout<<'\n';
        cout<<n<<'A'<<x<<" = "<<suma*a[x+n][3]/a[x][1];
    }
    if(f==-1)
    {
        if(suma==1)
        {
            cout<<"Factor de actualizare viager este "<<endl;
            cout<<n<<"E"<<x<<" = "<<a[x+n][1]/a[x][1];
        }
        else
        {
            cout<<"Factor de actualizare viager este "<<endl;
            cout<<n<<"E"<<x<<" = "<<suma*a[x+n][1]/a[x][1];
        }
    }
    if(f==-2)
    {
        cout<<"Factor de actualizare de deces este "<<endl;
        cout<<n<<"D"<<x<<" = "<<sqrt(1/v)*(v*a[x+n][1]-a[x+n+1][1])/a[x][1];
    }
    if(f==-3)
    {
        cout<<"Factor de actualizare fractionat"<<endl;
        cout<<"Frecventa platilor pe an j= ";
        cin>>fractionat;
        ok=fractionat;
        cout<<n<<'+'<<ok<<"/12 E"<<x<<" = "<<suma*1/a[x][1]*((fractionat/12)*(a[n+x+1][1]-a[n+x][1])+a[n+x][1]);

    }
    if(f==5)
    {
        cout<<"Anuitate viagera fractionata dublu limitata pe perioada de sub un an"<<endl;
        cout<<"Frecventa platilor pe an j= ";
        cin>>fractionat;
        cout<<'\n';
        cout<<"Caz posticipat:"<<'\n';
        cout<<"a = "<<fractionat*(fractionat+1)/(2*pow(m,2))*a[n+x+1][1]/a[x][1]+(2*m*fractionat-fractionat*(fractionat+1))/(2*pow(m,2))*a[x+n][1]/a[n][1];
        cout<<'\n';
        cout<<'\n';
        cout<<"Caz anticipat:"<<'\n';
        cout<<"a = "<<fractionat*(fractionat-1)/(2*pow(m,2))*a[n+x+1][1]/a[x][1]+(2*m*fractionat-fractionat*(fractionat-1))/(2*pow(m,2))*a[x+n][1]/a[n][1];
    }



    return 0;
}
