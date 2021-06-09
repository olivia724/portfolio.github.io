/*##################################################################################
#
# Programmname: Rabatt_Kundentyp_2.cpp
# Beschreibung: Der Benutzer kann einen Betrag eingeben.
#				Das Programm berechnet den Bruttopreis nach einer Rabattsberechnung.
#				Rabatt gibt es je nach Kundentyp ab einem Betrag von 1000.-
#				Kundentyp A erh�lt bei einem Betrag �ber 1000.- einen Rabatt von 5%.
#				Kundentyp B erh�lt bei einem Betrag �ber 1000.- einen Rabatt von 3%.
#				Kundentyp C erh�lt keinen Rabatt.
#
# Version:      2.0
# Erstellt am:  03.05.2021
# Autor:        Husin Olivia
# Copyright:    Husin Olivia
#
# Aenderungen:	Am 03.05.2021 -> do-while eingebaut f�r eine erneute Abfrage
#
####################################################################################*/
#include <iostream>
using namespace std;

int main()
{
	char eingabe;
	do {
	    double betrag;
	    char kundentyp;
	    
	    cout << "Eingabe des Rechnungsbetrags: ";
	    cin >> betrag;
	
	    cout << "Kundentyp eingeben (A/B/C): ";
	    cin >> kundentyp;
	
	    if (betrag >= 1000)
		{
			if (kundentyp == 'A' || kundentyp == 'a')
	    	{
	        	cout << "Total: CHF " << betrag * 0.95;
			}
			if (kundentyp == 'B' || kundentyp == 'b')
	    	{
	        	cout << "Total: CHF " << betrag * 0.97;
			}
			if (kundentyp == 'C' || kundentyp == 'c')
	    	{
	        	cout << "Total: CHF " << betrag;
			}
		}
			else
				{
					cout << "Total: CHF " << betrag;
				}
				
		cout << "\nNochmal berechnen?\n" << "Druecke die Taste 'j' und Enter.\n";
	    cin >> eingabe;
	}
    while(eingabe == 'j' || 'J');
    return 0;
}
