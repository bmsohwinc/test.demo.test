#include<bits/stdc++.h>
#include<unistd.h>

using namespace std;

int main()
{
	int x,y,z,i,j,k;
	
	
	cout << "--------- Welcome to simplex game.!!\n\n";
	while(1)
	{
		int dd,mm,yy;
		cout << "Enter your DOB (with spaces) ";
		cin >> dd >> mm >> yy;
				
		if(yy < 2000)
			cout << "Ooo Legend!!\n";
		sleep(1);
		if(yy>1900 && yy < 2014)
			cout << "Freedom Fighter!!\n";
		sleep(1);
		if(yy==2004)
			cout << "Idiot\n";
		sleep(1);
		if(yy<1800)
			cout << "You are limited by the technology of your time. Better luck next time!!\n";
		sleep(1);
		if(dd==23)
			cout << "Swalpa Hog bartheeni :D\n";
		sleep(1);
		if(dd == 16)
			cout << "You are a Soyabean. Thanks for confirming!!\n";
		sleep(1);
		if(dd<20)
			cout << "What?\n Asking significance and all a?\nDon't have better workaa?\nYaake??? Ikka andre gotthalla!!\n";
		sleep(3);
		if(dd<0 || dd >31 || mm <0 || mm > 12 || yy <0 || yy > 3000 )
		{
			cout << "Hat be... yeso thodi hotho hai......\n\nYou have damaged the software..\n";
			sleep(2);
			cout << "...\n";
			sleep(2);
			cout << "crashing...\n";
			sleep(2);
			cout << "...\n";
			for(i=0;i<1000000;i++)
			{
				cout << "AA";
				if(i%100==0)
					sleep(1.5);
			}
			cout << "\n";
			break;	
		}
		
	}

	return 0;
}
