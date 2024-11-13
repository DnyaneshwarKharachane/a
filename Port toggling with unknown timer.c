//Ritesh Bhosale
//TE-A Batch-A 
//Roll no.3401011

//Practical 2 Case 1: Program for Toggle bits of Port Using Unknown Timer.
// Program for Toggle All bits of Port

#include<reg51.h>
void Delay(void);
void main (void)
{
 while(1) // infinite loop
 {
	 P3 = 0x00; // LED ON
	 Delay();
	 P3 = 0xff; // LED OFF
	 Delay();
 }
}
void Delay(void)
{
	 int i,j;
	 for(i=0;i<10;i++)
		 {
				for(j=0;j<10000;j++){}
		 }
}