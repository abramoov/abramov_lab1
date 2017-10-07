 
#include <stdio.h> 
#include <stdlib.h> 


void Cel(double P) 
{ 
	double F = P * 1.8 + 32 ; 
	double K = P + 273.15 ; 
	printf("%.2f C: \n",P); 
	printf("%.2f F \n",F); 
	printf("%.2f K \n",K); 
} 

void Far(double P) 
{  
	double C =(P - 32) / 1.8; 
	double K = C + 273.15; 
	printf("%.2f F:\n",P); 
	printf("%.2f C\n",C); 
	printf("%.2f K\n",K); 
} 

void Kel(double P) 
{  
	double C = P - 273.15; 
	double F = C * 1.8 + 32; 
	printf("%.2f K:\n",P); 
	printf("%.2f C\n",C); 
	printf("%.2f F\n",F); 
} 

int main(int argc, char *argv[]) 
{
	if (argc == 3){
		if (*argv[2]=='C') { 
		Cel(atof(argv[1])); 
	} else if (*argv[2] == 'F') { 
		Far(atof(argv[1])); 
	} else if (*argv[2] == 'K') { 
		Kel(atof(argv[1])); 
	}
} else { 
		Cel(atof(argv[1])); 
		Far(atof(argv[1])); 
		Kel(atof(argv[1])); 
	} 
	return(0); 
}