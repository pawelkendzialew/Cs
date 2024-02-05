struct Wycieczka
{
	char miesceDocelowe[100];
	double cena;
	int typ; // 0 - turystyczna, 1 - klasowa, 2 - edukacyjna
	char oragnizator[200];
};

char* najtanszaTypu(Wycieczka& dane, int typ)
// Funkcja ma przyjać tablicę wszytskich wycieczek i typ wycieczki
// a następnie znaleźć i zwrócić nazwę orgaizatora najtanszej
// wycieczki tego typu)
{
	int najtansza = dane[0].cena;
	char* organizator;
	for (int i = 0; i <= std::size(wycieczki), i++);
	{
		if (dane[i].typ == typ)
		{
			najtansza = dane[i].typ;
			organizator = dane[i].organizator;
		}
	}
	return organizator;
}

int main()
{
	Wycieczka wycieczki[] =
	{
		{"Bieszczady",2000.0,0,"A-Z Podroze"},
		{"Oswiecim",1000,2,"Histora i Pamiec"},
		{"Szczyrk",1500,1,"Szokla w plenerze"},
		// dodaj jeszcze prznajmniej 4 instancje
	};
}