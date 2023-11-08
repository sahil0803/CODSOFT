#include<iostream>

using namespace std;
int main()
{
	int a,b,sum,sub,div,mul,choice;
	
	top:cout<<"\n Enter the first number \n ";
		        cin>>a;
	cout<<"\n Enter the second number  \n ";
		        cin>>b;	        
	
	cout<<"\n | MODES           |";
	    cout<<"\n |1 ADDITION       |";
	    cout<<"\n |2 SUBTRACTION    |"; 
	    cout<<"\n |3 MULTIPLICATION |";
	    cout<<"\n |4 DIVISION       |";
	    cout<<"\n |5......EXIT......|";
	    cout<<"\n \tENTER YOUR CHOICE\t";
	    cin>>choice;
	switch(choice)
	{
		case 1 :
		        sum=a+b;
		        cout<<"\n addition of two numbers is "<<sum;
		        break;
		        
		        
		        
		case 2 :
				sub=a-b;
				cout<<"\n subtraction of two numbers is "<<sub;
				break;
				
				
				
				
		case 3 :
				mul=a*b;
				cout<<"\n multiplicatioin of two numbers is "<<mul;	
				break;
				
				
				
				
				
		case 4 :
				div=a/b;
				cout<<"\n division of the two numbers is "<<div;  
				break;
				
				   
	    case 5 :cout<<"\n **********PROGRAM END**********";
		        
		
}
goto top;

	    
	
	
	
	
	return 0;
}
