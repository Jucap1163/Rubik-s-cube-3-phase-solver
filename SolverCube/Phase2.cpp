#include"Phase2.h"



string chercherP2UD(int cas)
{
	ifstream MvtsPhase1;
    MvtsPhase1.open("C:\\Users\\jucap\\Documents\\SolverCube\\MovesUDP2.txt");
	MvtsPhase1.seekg(0, ios::beg);
	MvtsPhase1.ignore();
	while (!ws(MvtsPhase1).eof()) {
		int val;
		string mot;
		MvtsPhase1 >> val;
		MvtsPhase1 >> mot;
		if (val == cas)
			return mot;
	}
	return "introuvable";
}

string chercherP2CO(int cas)
{
	ifstream MvtsPhase1;
    MvtsPhase1.open("C:\\Users\\jucap\\Documents\\SolverCube\\MovesP2CO.txt");
	MvtsPhase1.seekg(0, ios::beg);
	MvtsPhase1.ignore();
	while (!ws(MvtsPhase1).eof()) {
		int val;
		string mot;
		MvtsPhase1 >> val;
		MvtsPhase1 >> mot;
		if (val == cas)
			return mot;
	}
	return "introuvable";
}

int NChooseM(int N, int M) {
	if (M < 0)
		return 0;

	int NoverMfact = N;	// Iterates from N down to M+1 to
				//   compute N! / (N-M)!
	int Mfact = 1;		// Iterates from 1 to M to divide
				//   out the M! term
	int Result = 1;		// Holds the result of N choose M
	if (N < M)
		return 0;	// M must be a subset of M
	if (M > N / 2)
		M = N - M;	// Optimization
	while (NoverMfact > M) {
		Result *= NoverMfact--;	// Work on the N! / (N-M)! part
		Result /= Mfact++;	// Divide out the M! part
	}
	return Result;
}
void U(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[3];
	tab[1] = tableau[0];
	tab[2] = tableau[1];
	tab[3] = tableau[2];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];
	tab[8] = tableau[8];
	tab[9] = tableau[9];
	tab[10] = tableau[10];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}

	n = res;
}

void u(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[1];
	tab[1] = tableau[2];
	tab[2] = tableau[3];
	tab[3] = tableau[0];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];
	tab[8] = tableau[8];
	tab[9] = tableau[9];
	tab[10] = tableau[10];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void Y(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[2];
	tab[1] = tableau[3];
	tab[2] = tableau[0];
	tab[3] = tableau[1];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];
	tab[8] = tableau[8];
	tab[9] = tableau[9];
	tab[10] = tableau[10];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void D(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[5];
	tab[5] = tableau[6];
	tab[6] = tableau[7];
	tab[7] = tableau[4];
	tab[8] = tableau[8];
	tab[9] = tableau[9];
	tab[10] = tableau[10];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void d(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[7];
	tab[5] = tableau[4];
	tab[6] = tableau[5];
	tab[7] = tableau[6];
	tab[8] = tableau[8];
	tab[9] = tableau[9];
	tab[10] = tableau[10];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void t(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[6];
	tab[5] = tableau[7];
	tab[6] = tableau[4];
	tab[7] = tableau[5];
	tab[8] = tableau[8];
	tab[9] = tableau[9];
	tab[10] = tableau[10];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void R(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[8];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[11];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];
	tab[8] = tableau[4];
	tab[9] = tableau[9];
	tab[10] = tableau[10];
	tab[11] = tableau[0];

	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void r(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[11];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[8];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];
	tab[8] = tableau[0];
	tab[9] = tableau[9];
	tab[10] = tableau[10];
	tab[11] = tableau[4];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void q(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[4];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[0];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[7];
	tab[8] = tableau[11];
	tab[9] = tableau[9];
	tab[10] = tableau[10];
	tab[11] = tableau[8];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void L(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[10];
	tab[3] = tableau[3];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[9];
	tab[7] = tableau[7];
	tab[8] = tableau[8];
	tab[9] = tableau[2];
	tab[10] = tableau[6];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void l(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[9];
	tab[3] = tableau[3];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[10];
	tab[7] = tableau[7];
	tab[8] = tableau[8];
	tab[9] = tableau[6];
	tab[10] = tableau[2];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void k(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[6];
	tab[3] = tableau[3];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[2];
	tab[7] = tableau[7];
	tab[8] = tableau[8];
	tab[9] = tableau[10];
	tab[10] = tableau[9];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void F(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[9];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[4];
	tab[5] = tableau[8];
	tab[6] = tableau[6];
	tab[7] = tableau[7];
	tab[8] = tableau[1];
	tab[9] = tableau[5];
	tab[10] = tableau[10];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void f(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[8];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[4];
	tab[5] = tableau[9];
	tab[6] = tableau[6];
	tab[7] = tableau[7];
	tab[8] = tableau[5];
	tab[9] = tableau[1];
	tab[10] = tableau[10];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void s(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[5];
	tab[2] = tableau[2];
	tab[3] = tableau[3];
	tab[4] = tableau[4];
	tab[5] = tableau[1];
	tab[6] = tableau[6];
	tab[7] = tableau[7];
	tab[8] = tableau[9];
	tab[9] = tableau[8];
	tab[10] = tableau[10];
	tab[11] = tableau[11];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void B(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[11];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[10];
	tab[8] = tableau[8];
	tab[9] = tableau[9];
	tab[10] = tableau[3];
	tab[11] = tableau[7];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void b(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[10];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[11];
	tab[8] = tableau[8];
	tab[9] = tableau[9];
	tab[10] = tableau[7];
	tab[11] = tableau[3];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void p(int& n, int(&tableau)[12])
{
	int tab[12];
	int compte = -1;
	int res = 0;
	tab[0] = tableau[0];
	tab[1] = tableau[1];
	tab[2] = tableau[2];
	tab[3] = tableau[7];
	tab[4] = tableau[4];
	tab[5] = tableau[5];
	tab[6] = tableau[6];
	tab[7] = tableau[3];
	tab[8] = tableau[8];
	tab[9] = tableau[9];
	tab[10] = tableau[11];
	tab[11] = tableau[10];
	for (int i = 0; i < 12; i++)
	{
		tableau[i] = tab[i];
	}

	for (int i = 0; i < 12; i++)
	{
		if (tableau[i] < 8) {
			res = res + NChooseM(i, compte);
		}
		else
			compte++;
	}
	n = res;
}

void faireUDSansFB(int& n, int(&tableau)[12], std::string mvts)
{
	for (int i = 0; i < mvts.size(); i++)
	{
		if (mvts[i] == 'R')
			R(n, tableau);
		else if (mvts[i] == 'r')
			r(n, tableau);
		else if (mvts[i] == 'q')
			q(n, tableau);
		else if (mvts[i] == 'L')
			L(n, tableau);
		else if (mvts[i] == 'l')
			l(n, tableau);
		else if (mvts[i] == 'k')
			k(n, tableau);
		else if (mvts[i] == 'U')
			U(n, tableau);
		else if (mvts[i] == 'u')
			u(n, tableau);
		else if (mvts[i] == 'y')
            Y(n, tableau);
		else if (mvts[i] == 'D')
			D(n, tableau);
		else if (mvts[i] == 'd')
			d(n, tableau);
		else if (mvts[i] == 't')
			t(n, tableau);
		else if (mvts[i] == 's')
			s(n, tableau);
		else if (mvts[i] == 'p')
			p(n, tableau);
	}
}

void faireUD(int& n, int(&tableau)[12], std::string mvts)
{
	for (int i = 0; i < mvts.size(); i++)
	{
		if (mvts[i] == 'R')
			R(n, tableau);
		else if (mvts[i] == 'r')
			r(n, tableau);
		else if (mvts[i] == 'q')
			q(n, tableau);
		else if (mvts[i] == 'L')
			L(n, tableau);
		else if (mvts[i] == 'l')
			l(n, tableau);
		else if (mvts[i] == 'k')
			k(n, tableau);
		else if (mvts[i] == 'U')
			U(n, tableau);
		else if (mvts[i] == 'u')
			u(n, tableau);
		else if (mvts[i] == 'y')
            Y(n, tableau);
		else if (mvts[i] == 'D')
			D(n, tableau);
		else if (mvts[i] == 'd')
			d(n, tableau);
		else if (mvts[i] == 't')
			t(n, tableau);
		else if (mvts[i] == 'F')
			F(n, tableau);
		else if (mvts[i] == 'f')
			f(n, tableau);
		else if (mvts[i] == 's')
			s(n, tableau);
		else if (mvts[i] == 'B')
			B(n, tableau);
		else if (mvts[i] == 'b')
			b(n, tableau);
		else if (mvts[i] == 'p')
			p(n, tableau);
	}
}

void Uco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = UBRa;
	int UFL = URFa;
	int ULB = UFLa;
	int UBR = ULBa;
	int DFR = DFRa;
	int DLF = DLFa;
	int DBL = DBLa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void uco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = UFLa;
	int UFL = ULBa;
	int ULB = UBRa;
	int UBR = URFa;
	int DFR = DFRa;
	int DLF = DLFa;
	int DBL = DBLa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void yco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = ULBa;
	int UFL = UBRa;
	int ULB = URFa;
	int UBR = UFLa;
	int DFR = DFRa;
	int DLF = DLFa;
	int DBL = DBLa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void Dco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = URFa;
	int UFL = UFLa;
	int ULB = ULBa;
	int UBR = UBRa;
	int DFR = DLFa;
	int DLF = DBLa;
	int DBL = DRBa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void dco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = URFa;
	int UFL = UFLa;
	int ULB = ULBa;
	int UBR = UBRa;
	int DFR = DRBa;
	int DLF = DFRa;
	int DBL = DLFa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void tco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = URFa;
	int UFL = UFLa;
	int ULB = ULBa;
	int UBR = UBRa;
	int DFR = DBLa;
	int DLF = DRBa;
	int DBL = DFRa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void Rco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = (DFRa + 2) % 3;
	int UFL = UFLa;
	int ULB = ULBa;
	int UBR = (URFa + 1) % 3;
	int DFR = (DRBa + 1) % 3;
	int DLF = DLFa;
	int DBL = DBLa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void rco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = (UBRa + 2) % 3;
	int UFL = UFLa;
	int ULB = ULBa;
	int UBR = (DRBa + 1) % 3;
	int DFR = (URFa + 1) % 3;
	int DLF = DLFa;
	int DBL = DBLa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void qco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = DRBa;
	int UFL = UFLa;
	int ULB = ULBa;
	int UBR = DFRa;
	int DFR = UBRa;
	int DLF = DLFa;
	int DBL = DBLa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void Lco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = URFa;
	int UFL = (ULBa + 1) % 3;
	int ULB = (DBLa + 2) % 3;
	int UBR = UBRa;
	int DFR = DFRa;
	int DLF = (UFLa + 2) % 3;
	int DBL = (DLFa + 1) % 3;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void lco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = URFa;
	int UFL = (DLFa + 1) % 3;
	int ULB = (UFLa + 2) % 3;
	int UBR = UBRa;
	int DFR = DFRa;
	int DLF = (DBLa + 2) % 3;
	int DBL = (ULBa + 1) % 3;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}
void kco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = URFa;
	int UFL = DBLa;
	int ULB = DLFa;
	int UBR = UBRa;
	int DFR = DFRa;
	int DLF = ULBa;
	int DBL = UFLa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void sco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = DLFa;
	int UFL = DFRa;
	int ULB = ULBa;
	int UBR = UBRa;
	int DFR = UFLa;
	int DLF = URFa;
	int DBL = DBLa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void pco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int terme7 = terme6 / 3;
	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = URFa;
	int UFL = UFLa;
	int ULB = DRBa;
	int UBR = DBLa;
	int DFR = DFRa;
	int DLF = DLFa;
	int DBL = UBRa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
}

void Fco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = (UFLa + 1) % 3;
	int UFL = (DLFa + 2) % 3;
	int DLF = (DFRa + 1) % 3;
	int DFR = (URFa + 2) % 3;
	int ULB = ULBa;
	int UBR = UBRa;
	int DBL = DBLa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL;
}
void fco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int URF = (DFRa + 1) % 3;
	int UFL = (URFa + 2) % 3;
	int DLF = (UFLa + 1) % 3;
	int DFR = (DLFa + 2) % 3;
	int ULB = ULBa;
	int UBR = UBRa;
	int DBL = DBLa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL;
}

void Bco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int UBR = (DRBa + 2) % 3;
	int ULB = (UBRa + 1) % 3;
	int DBL = (ULBa + 2) % 3;
	int DRB = (DBLa + 1) % 3;
	int URF = URFa;
	int UFL = UFLa;
	int DFR = DFRa;
	int DLF = DLFa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL;
}
void bco(int& n)
{
	int terme1 = n / 3;
	int DBLa = n % 3;

	int terme2 = terme1 / 3;
	int DLFa = terme1 % 3;

	int terme3 = terme2 / 3;
	int DFRa = terme2 % 3;

	int terme4 = terme3 / 3;
	int UBRa = terme3 % 3;

	int terme5 = terme4 / 3;
	int ULBa = terme4 % 3;

	int terme6 = terme5 / 3;
	int UFLa = terme5 % 3;

	int URFa = terme6 % 3;

	int DRBa = 0;

	int somme = DBLa + DLFa + DFRa + UBRa + ULBa + UFLa + URFa;
	if ((somme % 3) != 0) {
		DRBa = 1;
		somme++;
	}
	if ((somme % 3) != 0)
		DRBa = 2;

	int UBR = (ULBa + 2) % 3;
	int ULB = (DBLa + 1) % 3;
	int DBL = (DRBa + 2) % 3;
	int DRB = (UBRa + 1) % 3;
	int URF = URFa;
	int UFL = UFLa;
	int DFR = DFRa;
	int DLF = DLFa;

	n = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL;
}

void faireCoSansFB(int& n, std::string mvts)
{
	for (int i = 0; i < mvts.size(); i++)
	{
		if (mvts[i] == 'R')
			Rco(n);
		else if (mvts[i] == 'r')
			rco(n);
		else if (mvts[i] == 'q')
			qco(n);
		else if (mvts[i] == 'L')
			Lco(n);
		else if (mvts[i] == 'l')
			lco(n);
		else if (mvts[i] == 'k')
			kco(n);
		else if (mvts[i] == 'U')
			Uco(n);
		else if (mvts[i] == 'u')
			uco(n);
		else if (mvts[i] == 'y')
			yco(n);
		else if (mvts[i] == 'D')
			Dco(n);
		else if (mvts[i] == 'd')
			dco(n);
		else if (mvts[i] == 't')
			tco(n);
		else if (mvts[i] == 's')
			sco(n);
		else if (mvts[i] == 'p')
			pco(n);
	}
}

void faireCo(int& n, string mvts)
{
	for (int i = 0; i < mvts.size(); i++)
	{
		if (mvts[i] == 'R')
			Rco(n);
		else if (mvts[i] == 'r')
			rco(n);
		else if (mvts[i] == 'q')
			qco(n);
		else if (mvts[i] == 'L')
			Lco(n);
		else if (mvts[i] == 'l')
			lco(n);
		else if (mvts[i] == 'k')
			kco(n);
		else if (mvts[i] == 'U')
			Uco(n);
		else if (mvts[i] == 'u')
			uco(n);
		else if (mvts[i] == 'y')
			yco(n);
		else if (mvts[i] == 'D')
			Dco(n);
		else if (mvts[i] == 'd')
			dco(n);
		else if (mvts[i] == 't')
			tco(n);
		else if (mvts[i] == 'F')
			Fco(n);
		else if (mvts[i] == 'f')
			fco(n);
		else if (mvts[i] == 's')
			sco(n);
		else if (mvts[i] == 'B')
			Bco(n);
		else if (mvts[i] == 'b')
			bco(n);
		else if (mvts[i] == 'p')
			pco(n);
	}
}

string scrambleCoSansFB()
{
	string melange = "";
	int nbAleatoire = 0;
	nbAleatoire = rand() % 14;
	for (int i = 0; i < 30; i++)
	{
		if (nbAleatoire == 0)
			melange += 'R';
		else if (nbAleatoire == 1)
			melange += 'r';
		else if (nbAleatoire == 2)
			melange += 'q';
		else if (nbAleatoire == 3)
			melange += 'L';
		else if (nbAleatoire == 4)
			melange += 'l';
		else if (nbAleatoire == 5)
			melange += 'k';
		else if (nbAleatoire == 6)
			melange += 'U';
		else if (nbAleatoire == 7)
			melange += 'u';
		else if (nbAleatoire == 8)
			melange += 'y';
		else if (nbAleatoire == 9)
			melange += 'D';
		else if (nbAleatoire == 10)
			melange += 'd';
		else if (nbAleatoire == 11)
			melange += 't';
		else if (nbAleatoire == 12)
			melange += 's';
		else if (nbAleatoire == 13)
			melange += 'p';
		nbAleatoire = rand() % 14;
	}
	return melange;
}

