//Ritesh Bhosale
//TE-A Batch-A Roll no.3401011

//PRactical 1: Case.1-Internal memory to internal memory transfer

ORG 0000H
MOV R7,#05H 			// Initialise Counter for 5 Numbers
MOV R0,#30H 			//Initialise Source Memory Location
MOV R1,#50H 			//Initialise Destination Memory Location
LOOP: MOV A,@R0 		// transfer first number to Accumulator from Source Memory Location
MOV @R1,A 				// transfer A content to Destination Memory Location
INC R0 					// increment Source Memory Location
INC R1 					// increment Destination Memory Location
DJNZ R7, LOOP 			// decrement counter, check 0 , if not jump to label LOOP
NOP
END 