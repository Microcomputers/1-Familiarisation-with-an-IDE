/* Fourth program for the CLIC3 board. CAM20140703
Perform timing functions on some code.
Uses clic3.h v3.02, clic3_b.c.v3.02
Uses TimeTest.h v3.01, TimeTest.c v3.01
******************************************************************** */
#include "clic3.h" 
#include "TimeTest.h"

static TimeTest TT = {0, 0, 65535, 0, 0, 0, 0};

extern ui_16 BusAddress, BusData;

int main(void)
{ 
	ui_16 i, j;
	//Initialise();
	TimeTestInit();
	P4DIR |=BIT3; // Get a probe point
	P4OUT &= ~BIT3; // clear it to start low
	//while(1) { // do it forever
	// Do the timing test 10 times
	for(i=0;i<1000;i++) 
	{
		// Start time measurement
		//TimeTestStart(&TT);
		//P4OUT ^= BIT3; // toggle it
		// Something to time test
		for(j=0;j<100;j++){}
		// BusAddress = LedsAddr;
		//BusRead();
		// BusWrite();
		//}
	  	P4OUT ^= BIT3; // toggle it
		// End time measurement
		// TimeTestEnd(&TT);
	}
	// Hang around until the user stops the code running
	while (1) {}
}
