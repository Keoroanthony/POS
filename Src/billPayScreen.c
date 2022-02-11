
#include <sdk_tplus.h>
#include "Menu.h"

static const char szDate[] = "Date:%.2s/%.2s/%.2s  %.2s:%.2s\n";
static const char currency[] = "KSHS";



void billPayScreenResource(void){


	 char billNumber[100];
	 char billAmount[100];

	memset(billNumber , 0, sizeof(billNumber));
	memset(billAmount , 0, sizeof(billAmount));

	 GL_Dialog_Amount(gGoalGraphicLibInstance, " Bill payment", "Enter bill number:", "/d/d/d/d/d/d/d/d/D", billNumber, sizeof(billNumber), currency, GL_ALIGN_LEFT, GL_TIME_MINUTE);


	  if( strlen(billNumber) <= 8 && strlen(billNumber) >=5){

		  GL_Dialog_Amount(gGoalGraphicLibInstance, "Bill payment", "Enter bill amount:", "/d/d/d,/d/d/d,/d/d/D", billAmount, sizeof(billAmount), currency, GL_ALIGN_LEFT, GL_TIME_MINUTE);


		  Telium_Date_t date;
		  Telium_File_t *hPrinter;
		  hPrinter = Telium_Fopen("PRINTER", "w-*"); // Open printer driver
		     if (hPrinter != NULL)
		     {
		         Telium_Pprintf("         SUCCESS!         \n"
		                 "Project By:\n"
		                 "Keoro Anthony\n"
		        		 "Blll Payment\n");
		         Telium_Read_date(&date); // Print date and time
		         Telium_Pprintf(szDate, date.day, date.month, date.year, date.hour, date.minute);
		         Telium_Pprintf("Bill number is: %s \nAmount is: %s\n\n\n", billNumber, billAmount);
		         Telium_Ttestall(PRINTER, 0);

		         Telium_Fclose(hPrinter); // Close printer driver
		     }


		} else {
			 Beep(0x09,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);
			 Beep(0x08,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);
			 Beep(0x09,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);
			 Beep(0x08,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);
			 Beep(0x09,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);
			 Beep(0x08,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);
			 GL_Dialog_Message(gGoalGraphicLibInstance, "Error",
						        "Please enter\na valid Bill Number \n5 - 8  ", GL_ICON_ERROR, GL_BUTTON_VALID, 3000);

		}
}

