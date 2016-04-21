#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void converse_polish_numerals(unsigned long int n);
int search(unsigned long int n);

int main(int argc, char *argv[])
{
	unsigned long int n = atoi(argv[1]);
	void converse_polish_numerals(unsigned long int n);
	int search(unsigned long int n);
	
}

void converse_polish_numerals(unsigned long int n)
{
	int digits[6];

	 string units[]={"", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec"};

	 string teens[]={"dziesiec", "jedenascie", "dwanascie","trzynascie", "czternascie", "pietnascie", "szesnascie", "siedemnascie", "osiemnascie", "dziewietnascie"};

     string tens[]={"", "dziesiec", "dwadziescia", "trzydziesci", "czterdziesci", "piecdziesiat", "szescdziesiat", " siedemdziesiat", "osiemdziesiat", "dziewiecdziesiat"};                      

	 string hundreads[]={"", "sto", "dwiescie", "trzysta", "czterysta", "piecset", "szescset", "siedemset", "osiemset", "dziewiecset"};
	 
	 string thousands[]={"tysiecy","","tysiace","tysiace","tysiace","tysiecy","tysiecy","tysiecy","tysiecy","tysiecy"};
	 if(n == 0) 
	 	cout<<"Podales zero";
	 if(n<0)
	 	cout<<"Podales liczbe mniejsza od zero";
	 if(n>1000000)
	 	cout<<"Liczba jest wieksza od miliona i nie ma jej w naszym slowniku";
	 if(n == 1000000)
	 	cout<<"Milion";

 	
     	for (int i=0, j=10; i<6; i++)
 		{
 			digits[i]=(n/(j^(i+1))%10);
 		}

 		string product = "";

 		product += hundreads[digits[5]] + " ";
 		
 		if(digits[4]==1)
 			
 			product+= units[digits[3]]+ " " + thousands[5]+ " ";
 			
 		
 		else 
 		{
 			product += teens[digits[4]] + " ";
 		    
 		
 		
 		if((digits[3] == 1 && (digits[4] && digits[5])!=0))
 			
 			
 			product += "tysiac ";

 		else if((digits[5] && digits[4] && digits[3]) != 0)
 		    product += units[digits[3]] + " " + thousands[digits[4]] + " ";
 		    
 		}	
		
		product += hundreads[digits[2]] + " ";
		
		if(digits[1]==1)
 			product += teens[digits[0]] + " ";
 			
 		
 		else 
 		product += tens[digits[1]] + " ";
 		

 		if(digits[0]==1)
 			{product +=units[digits[0]] + " ";}
 		
 	cout<<product<<endl;
}
int search(unsigned long int n)
{
	for(int k = 1;;k++)
	{
		n*=k
		while(n*k)
		{
			if(n%10 == 1 && n%10 == 0)
			break;
		
		n=n/10

		if(n == 1)
		return k
	}
}

