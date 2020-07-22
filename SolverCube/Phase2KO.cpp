#include"Phase2KO.h"

void UcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[3];
	tab[1] = tableau[0];
	tab[2] = tableau[1];
	tab[3] = tableau[2];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void ucpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[1];
	tab[1] = tableau[2];
	tab[2] = tableau[3];
	tab[3] = tableau[0];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void ycpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[2];
	tab[1] = tableau[3];
	tab[2] = tableau[0];
	tab[3] = tableau[1];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void DcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[5];
	tab[5] = tableau[6];
	tab[6] = tableau[7];
	tab[7] = tableau[4];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void dcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[7];
	tab[5] = tableau[4];
	tab[6] = tableau[5];
	tab[7] = tableau[6];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void tcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[6];
	tab[5] = tableau[7];
	tab[6] = tableau[4];
	tab[7] = tableau[5];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void RcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[4];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[0];
	tab[4] = tableau[7];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[3];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void rcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[3];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[7];
	tab[4] = tableau[0];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[4];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void qcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[7];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[4];
	tab[4] = tableau[3];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[0];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void LcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[2];
	tab[2] = tableau[6];
	tab[3] = tableau[3];
	tab[4] = tableau[4];
	tab[5] = tableau[1];
	tab[6] = tableau[5];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
		
		}
		total = total + a * res[i];
	}
	n = total;
}
void lcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[5];
	tab[2] = tableau[1];
	tab[3] = tableau[3];
	tab[4] = tableau[4];
	tab[5] = tableau[6];
	tab[6] = tableau[2];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void kcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[6];
	tab[2] = tableau[5];
	tab[3] = tableau[3];
	tab[4] = tableau[4];
	tab[5] = tableau[2];
	tab[6] = tableau[1];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void FcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[1];
	tab[1] = tableau[5];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[0];
	tab[5] = tableau[4];
	tab[6] = tableau[6];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void fcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[4];
	tab[1] = tableau[0];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[5];
	tab[5] = tableau[1];
	tab[6] = tableau[6];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void scpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[5];
	tab[1] = tableau[4];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[1];
	tab[5] = tableau[0];
	tab[6] = tableau[6];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void BcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[3];
	tab[3] = tableau[7];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[2];
	tab[7] = tableau[6];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void bcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[6];
	tab[3] = tableau[2];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[7];
	tab[7] = tableau[3];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void pcpKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[7];
	tab[3] = tableau[6];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[3];
	tab[7] = tableau[2];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;
			
		}
		total = total + a * res[i];
	}
	n = total;
}
void fairecpKO(int& n, int(&tableau)[8], string mvts)
{
	for (int i = 0; i < mvts.size(); i++)
	{
		if (mvts[i] == 'R')
			RcpKO(n, tableau);
		else if (mvts[i] == 'r')
			rcpKO(n, tableau);
		else if (mvts[i] == 'q')
			qcpKO(n, tableau);
		else if (mvts[i] == 'L')
			LcpKO(n, tableau);
		else if (mvts[i] == 'l')
			lcpKO(n, tableau);
		else if (mvts[i] == 'k')
			kcpKO(n, tableau);
		else if (mvts[i] == 'U')
			UcpKO(n, tableau);
		else if (mvts[i] == 'u')
			ucpKO(n, tableau);
		else if (mvts[i] == 'y')
			ycpKO(n, tableau);
		else if (mvts[i] == 'D')
			DcpKO(n, tableau);
		else if (mvts[i] == 'd')
			dcpKO(n, tableau);
		else if (mvts[i] == 't')
			tcpKO(n, tableau);
		else if (mvts[i] == 'F')
			FcpKO(n, tableau);
		else if (mvts[i] == 'f')
			fcpKO(n, tableau);
		else if (mvts[i] == 's')
			scpKO(n, tableau);
		else if (mvts[i] == 'B')
			BcpKO(n, tableau);
		else if (mvts[i] == 'b')
			bcpKO(n, tableau);
		else if (mvts[i] == 'p')
			pcpKO(n, tableau);
	}
}
string chercherP2KOcp(int cas)
{
	ifstream MvtsPhase1;
	MvtsPhase1.open("MovesP2KOcp.txt");
	MvtsPhase1.seekg(0, ios::beg);
	//MvtsPhase1.ignore();
	while (!ws(MvtsPhase1).eof()) {
		int val;
		string mot;
		MvtsPhase1 >> val;
		MvtsPhase1 >> mot;
		if (val == cas)
			return mot;
	}
	return "introuvable!!!";
}

void decoderP2VersP2KO(int& P3, int(tableauP2)[12], int(&tableauP3)[8])
{
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	for (int i = 0; i < 8; i++) {
		if (tableauP2[i] == 0)
			tableauP3[i] = 0;
		else if (tableauP2[i] == 1)
			tableauP3[i] = 1;
		else if (tableauP2[i] == 2)
			tableauP3[i] = 2;
		else if (tableauP2[i] == 3)
			tableauP3[i] = 3;
		else if (tableauP2[i] == 4)
			tableauP3[i] = 4;
		else if (tableauP2[i] == 5)
			tableauP3[i] = 5;
		else if (tableauP2[i] == 6)
			tableauP3[i] = 6;
		else if (tableauP2[i] == 7)
			tableauP3[i] = 7;
	}

	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableauP3[i] < tableauP3[j])
				a++;

		}
		total = total + a * res[i];
	}
	P3 = total;
}

void decoderP2VersP2KOUD(int(&tableauP2)[12], string& cas)
{
	string texte = "";
	for (int i = 8; i < 12; i++)
	{
		if (tableauP2[i] == 8)
			texte += "a";
		else if (tableauP2[i] == 9)
			texte += "b";
		else if (tableauP2[i] == 10)
			texte += "c";
		else if (tableauP2[i] == 11)
			texte += "d";
	}
	cas = texte;
}

void UepKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[3];
	tab[1] = tableau[0];
	tab[2] = tableau[1];
	tab[3] = tableau[2];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;

		}
		total = total + a * res[i];
	}
	n = total;
}
void uepKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[1];
	tab[1] = tableau[2];
	tab[2] = tableau[3];
	tab[3] = tableau[0];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;

		}
		total = total + a * res[i];
	}
	n = total;
}
void yepKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[2];
	tab[1] = tableau[3];
	tab[2] = tableau[0];
	tab[3] = tableau[1];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;

		}
		total = total + a * res[i];
	}
	n = total;
}
void DepKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[5];
	tab[5] = tableau[6];
	tab[6] = tableau[7];
	tab[7] = tableau[4];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;

		}
		total = total + a * res[i];
	}
	n = total;
}
void depKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[7];
	tab[5] = tableau[4];
	tab[6] = tableau[5];
	tab[7] = tableau[6];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;

		}
		total = total + a * res[i];
	}
	n = total;
}
void tepKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[6];
	tab[5] = tableau[7];
	tab[6] = tableau[4];
	tab[7] = tableau[5];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;

		}
		total = total + a * res[i];
	}
	n = total;
}
void qepKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[4];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[0];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;

		}
		total = total + a * res[i];
	}
	n = total;
}
void kepKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[6];
	tab[3] = tableau[3];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[2];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;

		}
		total = total + a * res[i];
	}
	n = total;
}
void sepKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[5];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[4];
	tab[5] = tableau[1];
	tab[6] = tableau[6];
	tab[7] = tableau[7];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;

		}
		total = total + a * res[i];
	}
	n = total;
}
void pepKO(int& n, int(&tableau)[8])
{
	int tab[8];
	int total = 0;
	int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[7];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[3];

	for (int i = 0; i < 8; i++)
	{
		tableau[i] = tab[i];
	}
	for (int i = 0; i < 8; i++)
	{
		int a = 0;
		for (int j = 0; j < i; j++)
		{
			if (tableau[i] < tableau[j])
				a++;

		}
		total = total + a * res[i];
	}
	n = total;
}

void faireepKO(int& n, int(&tableau)[8], string mvts)
{
	for (int i = 0; i < mvts.size(); i++)
	{
		if (mvts[i] == 'q')
			qepKO(n, tableau);
		else if (mvts[i] == 'k')
			kepKO(n, tableau);
		else if (mvts[i] == 'U')
			UepKO(n, tableau);
		else if (mvts[i] == 'u')
			uepKO(n, tableau);
		else if (mvts[i] == 'y')
			yepKO(n, tableau);
		else if (mvts[i] == 'D')
			DepKO(n, tableau);
		else if (mvts[i] == 'd')
			depKO(n, tableau);
		else if (mvts[i] == 't')
			tepKO(n, tableau);
		else if (mvts[i] == 's')
			sepKO(n, tableau);
		else if (mvts[i] == 'p')
			pepKO(n, tableau);
	}
}
string chercherP2KOep(int cas)
{
	ifstream MvtsPhase1;
	MvtsPhase1.open("MovesP2KOep.txt");
	MvtsPhase1.seekg(0, ios::beg);
	//MvtsPhase1.ignore();
	while (!ws(MvtsPhase1).eof()) {
		int val;
		string mot;
		MvtsPhase1 >> val;
		MvtsPhase1 >> mot;
		if (val == cas)
			return mot;
	}
	return "introuvable!!!";
}

void UP2KOM(string& cas)
{

}
void uP2KOM(string& cas)
{

}
void yP2KOM(string& cas)
{

}
void DP2KOM(string& cas)
{

}
void dP2KOM(string& cas)
{

}
void tP2KOM(string& cas)
{

}
void qP2KOM(string& cas)
{
	string temp = "";

	temp += cas[3];
	temp += cas[1];
	temp += cas[2];
	temp += cas[0];
	cas = temp;
}
void kP2KOM(string& cas)
{
	string temp = "";

	temp += cas[0];
	temp += cas[2];
	temp += cas[1];
	temp += cas[3];
	cas = temp;
}
void sP2KOM(string& cas)
{
	string temp = "";

	temp += cas[1];
	temp += cas[0];
	temp += cas[2];
	temp += cas[3];
	cas = temp;
}
void pP2KOM(string& cas)
{
	string temp = "";

	temp += cas[0];
	temp += cas[1];
	temp += cas[3];
	temp += cas[2];
	cas = temp;
}
void faireP2KOM(string cas, string mvts)
{
	for (int i = 0; i < mvts.size(); i++)
	{
		if (mvts[i] == 'q')
			qP2KOM(cas);
		else if (mvts[i] == 'k')
			kP2KOM(cas);
		else if (mvts[i] == 'U')
			UP2KOM(cas);
		else if (mvts[i] == 'u')
			uP2KOM(cas);
		else if (mvts[i] == 'y')
			yP2KOM(cas);
		else if (mvts[i] == 'D')
			DP2KOM(cas);
		else if (mvts[i] == 'd')
			dP2KOM(cas);
		else if (mvts[i] == 't')
			tP2KOM(cas);
		else if (mvts[i] == 's')
			sP2KOM(cas);
		else if (mvts[i] == 'p')
			pP2KOM(cas);
	}
}


