//Ritesh Bhosale
//TE-A Batch-A 
//Roll no.3401011

//Case 3: Program for HEX counter.
#include <reg51.h>
void delay()
 {
 unsigned int i, j;
 for(i = 0; i < 255; i++)
 {
		for(j = 0; j < 255; j++)
		{
			// Empty loop for delay
 		}
 }
}
void main()
 {
		unsigned int z;
		while(1)
		{ 	// Infinite loop
				for(z = 0x00; z<=0xff; z++)
				{
					P1 = z; // Output count to Port 1 (LEDs)
					delay(); // Delay for visible change
				}
		}
} 