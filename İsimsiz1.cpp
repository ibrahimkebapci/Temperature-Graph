#include<iostream>
#include<ctime>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
float check(float);
void temperaturGraph(float);
void temperaturGraph(float x)
{	
		for (int i = 0; i<(x/10); i++)
			{
			cout << "*" ;
			}
			cout<<" "<<endl;
}
float check(float x)
{
	if (x > 85)
		{
			cout << "too hot,shutting down"<<endl;
			return 0;
		}
	else
		{
			temperaturGraph(x);
		}
	}
class Arguments
{
public:
	float temperature;
private:
protected:
};
int main()
{
	Arguments device1;
	Arguments device2;
	Arguments device3;
	Arguments device4;
	Arguments diz[4] = { device1,device2,device3,device4 };

		srand(time(0));
		for (int i = 1; i < 5; i++)
		{
			
			diz[i].temperature = rand() % 100+1;
			cout<<"device"<<i<<" ";
			check(diz[i].temperature);
		}
		cout<<"one * meaning 10 celcius ";
		return 0;
}
