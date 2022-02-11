/**
 * Utils.h
 *
 * Header for the utilities source file.
 *
 */
#ifndef __UTILS_H
#define __UTILS_H

/*+************* #DEFINES **************************************************+*/

/*+************* CONSTANTS *************************************************+*/

/*+************* STRUCTURES ************************************************+*/
/**
 * Structure used to store the sale entered by the user
 */
typedef struct
{
  int sale;
} sale_s;
/**
 * Structure used to store the bill entered by the user
 */
typedef struct
{
  int bill;
} bill_b;
/**
 * Structure used to store the bill entered by the user
 */
typedef struct
{
  int saleAmount;
} cash_b;

/*+************* VARIABLES *************************************************+*/

/*+************* FUNCTION PROTOTYPES ***************************************+*/
extern int utilsCheckSale(sale_s *inputSale);
extern int utilsCheckBill(bill_b *inputBill);
extern int utilsCheckSaleAmount(cash_b *inputSaleAmount);


#endif //__UTILS_H
