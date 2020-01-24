#include<iostream>
using namespace std;

int main()
{
	int ch,month,flag=0;
	weather obj;
	do{
		cout<<"----------------------WEATHER REPORT-------------------------"<<endl;
		cout<<"\t1.Default data\n\t2.Enter data\n\t3.Display entered data\n\t4.Exit\n\nEnter your choice:";
		cin>>ch;
		cout<<"-------------------------------------------------------------"<<endl;
		switch (ch)
		{
			case 1:
				cout<<"Select the month:\n\t1.January\n\t2.February\n\t3.March\n\t4.April\n\t5.May\n\t6.June\n\t7.July\n\t8.August\n\t9.September\n\t10.October\n\t11.November\n\t12.December\n\nEnter the month for which values are to be displayed:"<<endl;
				cin>>month;			
				obj.display(month);
			break;
			case 2:
				//cout<<"Enter the new data for the month:";
				obj.accept();
				flag=1;
			break;
			case 3:
				cout<<"Select the month:\n\t1.January\n\t2.February\n\t3.March\n\t4.April\n\t5.May\n\t6.June\n\t7.July\n\t8.August\n\t9.September\n\t10.October\n\t11.November\n\t12.December\n\nEnter the month for which values are to be displayed:"<<endl;
				cin>>month;
				if(flag==1)
					obj.display(month);
				else
				{
					cout<<"No Data is entered.\nDisplaying the default Data...\n\n"<<endl;
					obj.display(month);
				}
			break;
			case 4:
			break;
			default:
				cout<<"INVALID";
			break;
		}	
	}while(ch!=4);
}
