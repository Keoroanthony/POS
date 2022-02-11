/**
 * Utils.c
 *
 * This file manage utilities.
 *
 */

#include "Utils.h"

/*+************* #DEFINES **************************************************+*/

/*+************* CONSTANTS *************************************************+*/

/*+************* STRUCTURES ************************************************+*/

/*+************* VARIABLES *************************************************+*/

/*+************* FUNCTION PROTOTYPES ***************************************+*/

/**
 * This function checks if the date entered by the user is valid.
 *
 *
 * \param inputSale The input date structure
 *
 * \return 1 if the input date is valid, 0 otherwise
 */
int utilsCheckSale(sale_s *inputSale)
{
  int isSaleCorrect = 1;

  // sale must be between 1 and 5000
  if ((inputSale->sale < 1) || (inputSale->sale > 5000))
  {
    isSaleCorrect = 0;
  }

  return isSaleCorrect;
}
int utilsCheckBill(bill_b *inputBill){
   int isBillCorrect = 1;

   // bill must be max 8 chars
   if( inputBill <= 99999999){

	   isBillCorrect = 0;
	  }

   return isBillCorrect;
}
int utilsCheckSaleAmount(cash_b *inputSaleAmount)
{
  int isSaleAmountCorrect = 1;

  // sale must be between 1 and 5000
  if ((inputSaleAmount->saleAmount < 1) || (inputSaleAmount->saleAmount > 5000))
  {
	  isSaleAmountCorrect = 0;
  }

  return isSaleAmountCorrect;
}
