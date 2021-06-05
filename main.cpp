#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a[]={ 39 ,38, 43 ,43, 38 ,47 ,42 ,45 ,41, 42, 44, 42 ,
	42 ,44, 45, 43, 46, 43, 46, 40 ,39 ,42 ,41 ,42 ,46 ,39 ,39, 46, 45 ,38, 38 ,43 ,42 ,42, 46 ,43, 41, 38 ,44, 40, 44, 47, 40 ,46, 41 ,44, 45 ,45 ,
	41 ,44 ,44 ,42 ,41 ,41 ,42 ,46 ,45 ,45 ,45, 44, 46, 45, 44, 39, 39, 40
	 ,41 ,43, 45 ,44, 44 ,40 ,45, 42, 46, 42, 42 ,45, 43, 44 ,39, 42, 44 ,43 ,39 ,43 ,47 ,42, 41 ,45, 42 ,43, 44 ,40 ,45 ,44, 41, 41, 43 ,42 ,42, 41};
	int len=sizeof(a)/sizeof(a[0]);
	int broj38=0;
	int broj39=0;
	int broj40=0;
	int broj41=0;
	int broj42=0;
	int broj43=0;
	int broj44=0;
	int broj45=0;
	int broj46=0;
	int broj47=0;
	
	int b38=38;
	int b39=39;
	int b40=40;
	int b41=41;
	int b42=42;
	int b43=43;
	int b44=44;
	int b45=45;
	int b46=46;
	int b47=47;
	
	 for(int i = 0;i<len;i++){
	 	if(a[i]==b38){
	 		broj38++;
	 	}
	 	if(a[i]==b39){
	 		broj39++;
	 	}
	 	if(a[i]==b40){
	 		broj40++;
	 	}
	 	if(a[i]==b41){
	 		broj41++;
	 	}
	 	if(a[i]==b42){
	 		broj42++;
	 	}
	 	if(a[i]==b43){
	 		broj43++;
	 	}
	 	if(a[i]==b44){
	 		broj44++;
	 	}
	 	if(a[i]==b45){
	 		broj45++;
	 	}
	 	if(a[i]==b46){
	 		broj46++;
	 	}
	 	if(a[i]==b47){
	 		broj47++;
	 	}
	 }
	 
	 cout<<"broj38 "<<broj38<<endl;
	 cout<<"broj39 "<<broj39<<endl;
	 cout<<"broj40 "<<broj40<<endl;
	 cout<<"broj41 "<<broj41<<endl;
	 cout<<"broj42 "<<broj42<<endl;
	 cout<<"broj43 "<<broj43<<endl;
	 cout<<"broj44 "<<broj44<<endl;
	 cout<<"broj45 "<<broj45<<endl;
	 cout<<"broj46 "<<broj46<<endl;
	 cout<<"broj47 "<<broj47<<endl;
	 
}

