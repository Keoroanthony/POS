
#include <sdk_tplus.h>
#include "Menu.h"

static const char szDate[] = "Date:%.2s/%.2s/%.2s  %.2s:%.2s\n";
static const char currency[] = "KSHS";
char cardDetails[150];

void cashBackScreenResource(void){
	char saleAmount[100];
	char cashBack[100];
	char mask[256];
	char Pin[10];
	char total[200];


	memset(saleAmount , 0, sizeof(saleAmount));
	memset(cashBack , 0, sizeof(cashBack));
	memset(mask , 0, sizeof(mask));
	memset(Pin , 0, sizeof(Pin));
	memset(total , 0, sizeof(total));
	memset(cardDetails, 0, sizeof(cardDetails));

	 GL_Dialog_Amount(gGoalGraphicLibInstance, "SALE WITH CASH BACK", "Enter sale amount:", "/d/d/d,/d/d/d,/d/d/D", saleAmount, sizeof(saleAmount), currency, GL_ALIGN_LEFT, GL_TIME_MINUTE);

	 GL_Dialog_Amount(gGoalGraphicLibInstance, "SALE WITH CASH BACK", "Enter cashBack amount:", "/d/d/d,/d/d/d,/d/d/D", cashBack, sizeof(cashBack), currency, GL_ALIGN_LEFT, GL_TIME_MINUTE);

	 waitCard(cardDetails);

	 GL_Dialog_Password(gGoalGraphicLibInstance, "Pin", "Enter Pin:", mask,Pin, sizeof(Pin), GL_TIME_MINUTE);

	 int a = atoi(saleAmount);
	 int b = atoi(cashBack);

	 int c = a + b;

      sprintf(total, "%d", c);

	  Telium_Date_t date;
	  Telium_File_t *hPrinter;
	  hPrinter = Telium_Fopen("PRINTER", "w-*"); // Open printer driver
		if (hPrinter != NULL){

		Telium_Pprintf("         SUCCESS!         \n"
				                 "Project By:\n"
				                 "Keoro Anthony\n"
				        		 "SALE WITH CASH BACK\n");
				         Telium_Read_date(&date); // Print date and time
				         Telium_Pprintf(szDate, date.day, date.month, date.year, date.hour, date.minute);
				         Telium_Pprintf("Sale amount is: %s\n", saleAmount);
				         Telium_Pprintf("CashBack amount is: %s\n", cashBack);
				         Telium_Pprintf("The Total is: %s\n", total);
				         Telium_Pprintf("Card Number: %s\n", cardDetails);
				         Telium_Ttestall(PRINTER, 0);

				         Telium_Fclose(hPrinter); // Close printer driver
				     }

}

