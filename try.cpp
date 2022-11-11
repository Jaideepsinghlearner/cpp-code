  #include<iostream>
using namespace std;
int main()
{
 int nos,i,no,k,l=0,m=0,n=0,o=0;
 cout<<"enter length  of series";
 cin>>nos;
 cout<<"enter first value to compare others";
 cin>>k;
	for(i=1;i<nos;i++)
 	{
 		 cout<<"enter values ";
 		cin>>no;
 		if(no>k)
 		{
 			l=l+1;
 			k=no;
		 }
		 
		else if(no=k)
		{
			l=l+1;
			m=l;
			k=no;
		}
		else if(no<0)
		{
			l=l+1;
			n=l;
			k=no;
		}
		else if(no<k)
		{
			l=l+1;
			o=l;
			k=no;
		}
	}		
	
	 	 if(l>m)
		  {
		  	if(l>o)
		  	{
		  		if(l>n)
		  		{
		  			l=l+1;
		  			cout<<"longest series is:"<<l;
				  }
			  }
		  }
		  
		  
		  if(m>l)
		  {
		  	if(m>n)
		  	{
		  		if(m>o)
		  		{
		  			m=m+1;
		  			cout<<"longest series is :"<<m;
				  }
			  }
		  }
		  
		  
		  if (n>l) 
		  {
		  	if(n>m)
		  	{
		  		if(n>o)
		  		{
		  			n=n+1;
		  			cout<<"longest series is :"<<n;
				  }
			  }
		  }
		 
		 if (o>l)
		 {
		 	if(o>m)
		 	{
		 		if(o>n)
		 		{
		 			o=o+1;
		 			cout<<"longest series is :"<<o;
		 			
				 }
			 }
		 }
}
