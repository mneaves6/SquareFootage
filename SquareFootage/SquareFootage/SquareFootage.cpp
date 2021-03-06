/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: SquareFootage
 * This program accepts as input the base price and finished area in
 * square feet of three house models, then it outputs the model(s)
 * with the least price per square foot.
 */

/*
 * Pseudo Code
 * BEGIN
 * 1. BasePrice variables 
 * 2. SquareFeet variables
 * 3. Total variables
 * 4. Model: Colonial
 * 5. Enter BasePriceColonial
 * 6. Enter SquareFeetColonial
 * 7. TotalColonial = BasePriceColonial * SquareFeetColonial
 * 8. Model: Split Entry
 * 9. Enter BasePriceSplit
 * 10. Enter SquareFeetSplit
 * 11. TotalSplit = BasePriceSplit * SquareFeetSplit
 * 12. Model: Single Story
 * 13. Enter BasePriceSingle
 * 14. Enter SquareFeetSingle
 * 15. TotalSingle = BasePriceSingle * SquareFeetSingle
 * 16. If TotalColonial < TotalSplit
 *     {
 *         If TotalSplit < TotalSingle
 *         {
 *             Then colonial model is cheaper
 *         }
 *         Else
 *         {
 *             Then single story model is cheaper
 *         }
 *     }
 *     Else
 *     {
 *         If TotalSplit < TotalSingle
 *         {
 *             Then split entry model is cheaper
 *         }
 *         Else
 *         {
 *             Then single story model is cheaper
 *         }
 *     }
 * END
 */

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double dblBasePriceColonial = 100, dblBasePriceSplit = 200, dblBasePriceSingle = 300;
	double dblSquareFeetColonial = 10, dblSquareFeetSplit = 20, dblSquareFeetSingle = 30;
	double dblTotalColonial = 1000, dblTotalSplit = 2000, dblTotalSingle = 3000;

	cout << "Model name: Colonial" << endl;
	cout << "Enter base price: ";
	cin >> dblBasePriceColonial;
	cout << "Enter square feet: ";
	cin >> dblSquareFeetColonial;
	dblTotalColonial = dblBasePriceColonial * dblSquareFeetColonial;
	cout << " " << endl;

	cout << "Model name: Split Entry" << endl;
	cout << "Enter base price: ";
	cin >> dblBasePriceSplit;
	cout << "Enter square feet: ";
	cin >> dblSquareFeetSplit;
	dblTotalSplit = dblBasePriceSplit * dblSquareFeetSplit;
	cout << " " << endl;

	cout << "Model name: Single Story" << endl;
	cout << "Enter base price: ";
	cin >> dblBasePriceSingle;
	cout << "Enter square feet: ";
	cin >> dblSquareFeetSingle;
	dblTotalSingle = dblBasePriceSingle * dblSquareFeetSingle;
	cout << " " << endl;

	if (dblTotalColonial < dblTotalSplit)
	{
		if (dblTotalSplit < dblTotalSingle)
		{
			cout << " " << endl;
			cout << "Colonial model is cheaper." << endl;
		}
		else
		{
			cout << " " << endl;
			cout << "Single story model is cheaper." << endl;
		}
	}
	else
	{
		if (dblTotalSplit < dblTotalSingle)
		{
			cout << " " << endl;
			cout << "Split entry model is cheaper." << endl;
		}
		else
		{
			cout << " " << endl;
			cout << "Single story model is cheaper." << endl;
		}
	}

    return 0;
}

