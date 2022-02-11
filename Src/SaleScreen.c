
#include <sdk_tplus.h>
#include "Menu.h"

static const char szDate[] = "Date:%.2s/%.2s/%.2s  %.2s:%.2s\n";
static const char currency[] = "KSHS";
char cardDetails[150];


void saleScreenResource(void){

	char saleAmount[100];
	float amount = 0.00;
	char mask[256];
	char Pin[10];


	memset(saleAmount , 0, sizeof(saleAmount));
	memset(mask , 0, sizeof(mask));
	memset(Pin , 0, sizeof(Pin));
	memset(cardDetails, 0, sizeof(cardDetails));

	 GL_Dialog_Amount(gGoalGraphicLibInstance, "SALE", "Enter sale amount:", "/d/d/d,/d/d/d,/d/d/D", saleAmount, sizeof(saleAmount), currency, GL_ALIGN_LEFT, GL_TIME_MINUTE);


	 sscanf(saleAmount, "%f", &amount);  //reads formatted input from saleAmount.


	 if ((amount < 1) || (amount > 5000)){

		 Beep(0x09,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);
		 Beep(0x08,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);
		 Beep(0x09,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);
		 Beep(0x08,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);
		 Beep(0x09,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);
		 Beep(0x08,0x03,5,BEEP_ON|BEEP_WAIT|BEEP_OFF);

			 GL_Dialog_Message(gGoalGraphicLibInstance, "Error", "Please enter\na valid Sale Amount\n 1 - 5000 ", GL_ICON_ERROR, GL_BUTTON_VALID, 3000);


		} else {

			 waitCard(cardDetails);



			 GL_Dialog_Password(gGoalGraphicLibInstance, "Pin", "Enter Pin:", mask,Pin, sizeof(Pin), GL_TIME_MINUTE);



			  Telium_Date_t date;
			  Telium_File_t *hPrinter;
			  hPrinter = Telium_Fopen("PRINTER", "w-*"); // Open printer driver
			     if (hPrinter != NULL)
			     {
			         Telium_Pprintf("**********SALE**********\n"
			                 "Project By:\n"
			                 "Keoro Anthony\n");
			         Telium_Read_date(&date); // Print date and time
			         Telium_Pprintf(szDate, date.day, date.month, date.year, date.hour, date.minute);
			         Telium_Pprintf("Sale amount is: %s\n", saleAmount);
			         Telium_Pprintf("Card Number: %s\n", cardDetails);
			         Telium_Ttestall(PRINTER, 0);

			         Telium_Fclose(hPrinter); // Close printer driver
			     }

		}
}

