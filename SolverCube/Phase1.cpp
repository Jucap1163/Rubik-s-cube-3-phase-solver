#include "Phase1.h"

string chercherP1(int cas)
{
	ifstream MvtsPhase1;
    MvtsPhase1.open("C:\\Users\\jucap\\Documents\\SolverCube\\MovesP1.txt");
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

void Ueo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = UBa;
	int UF = URa;
	int UL = UFa;
	int UB = ULa;
	int DR = DRa;
	int DF = DFa;
	int DL = DLa;
	int DB = DBa;
	int FR = FRa;
	int FL = FLa;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}

void ueo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = UFa;
	int UF = ULa;
	int UL = UBa;
	int UB = URa;
	int DR = DRa;
	int DF = DFa;
	int DL = DLa;
	int DB = DBa;
	int FR = FRa;
	int FL = FLa;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void yeo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = ULa;
	int UF = UBa;
	int UL = URa;
	int UB = UFa;
	int DR = DRa;
	int DF = DFa;
	int DL = DLa;
	int DB = DBa;
	int FR = FRa;
	int FL = FLa;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void Deo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = UFa;
	int UL = ULa;
	int UB = UBa;
	int DR = DFa;
	int DF = DLa;
	int DL = DBa;
	int DB = DRa;
	int FR = FRa;
	int FL = FLa;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void deo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = UFa;
	int UL = ULa;
	int UB = UBa;
	int DR = DBa;
	int DF = DRa;
	int DL = DFa;
	int DB = DLa;
	int FR = FRa;
	int FL = FLa;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void teo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = UFa;
	int UL = ULa;
	int UB = UBa;
	int DR = DLa;
	int DF = DBa;
	int DL = DRa;
	int DB = DFa;
	int FR = FRa;
	int FL = FLa;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void Reo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = FRa;
	int UF = UFa;
	int UL = ULa;
	int UB = UBa;
	int DR = BRa;
	int DF = DFa;
	int DL = DLa;
	int DB = DBa;
	int FR = DRa;
	int FL = FLa;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void reo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = BRa;
	int UF = UFa;
	int UL = ULa;
	int UB = UBa;
	int DR = FRa;
	int DF = DFa;
	int DL = DLa;
	int DB = DBa;
	int FR = URa;
	int FL = FLa;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void qeo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = DRa;
	int UF = UFa;
	int UL = ULa;
	int UB = UBa;
	int DR = URa;
	int DF = DFa;
	int DL = DLa;
	int DB = DBa;
	int FR = BRa;
	int FL = FLa;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void Leo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = UFa;
	int UL = BLa;
	int UB = UBa;
	int DR = DRa;
	int DF = DFa;
	int DL = FLa;
	int DB = DBa;
	int FR = FRa;
	int FL = ULa;
	int BL = DLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void leo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = UFa;
	int UL = FLa;
	int UB = UBa;
	int DR = DRa;
	int DF = DFa;
	int DL = BLa;
	int DB = DBa;
	int FR = FRa;
	int FL = DLa;
	int BL = ULa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void keo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = UFa;
	int UL = DLa;
	int UB = UBa;
	int DR = DRa;
	int DF = DFa;
	int DL = ULa;
	int DB = DBa;
	int FR = FRa;
	int FL = BLa;
	int BL = FLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void Feo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = (FLa + 1) % 2;
	int UL = ULa;
	int UB = UBa;
	int DR = DRa;
	int DF = (FRa + 1) % 2;
	int DL = DLa;
	int DB = DBa;
	int FR = (UFa + 1) % 2;
	int FL = (DFa + 1) % 2;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;

}
void feo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = (FRa + 1) % 2;
	int UL = ULa;
	int UB = UBa;
	int DR = DRa;
	int DF = (FLa + 1) % 2;
	int DL = DLa;
	int DB = DBa;
	int FR = (DFa + 1) % 2;
	int FL = (UFa + 1) % 2;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;

}
void seo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = DFa;
	int UL = ULa;
	int UB = UBa;
	int DR = DRa;
	int DF = UFa;
	int DL = DLa;
	int DB = DBa;
	int FR = FLa;
	int FL = FRa;
	int BL = BLa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}
void Beo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = UFa;
	int UL = ULa;
	int UB = (BRa + 1) % 2;
	int DR = DRa;
	int DF = DFa;
	int DL = DLa;
	int DB = (BLa + 1) % 2;
	int FR = FRa;
	int FL = FLa;
	int BL = (UBa + 1) % 2;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;

}
void beo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = UFa;
	int UL = ULa;
	int UB = (BLa + 1) % 2;
	int DR = DRa;
	int DF = DFa;
	int DL = DLa;
	int DB = (BRa + 1) % 2;
	int FR = FRa;
	int FL = FLa;
	int BL = (DBa + 1) % 2;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;

}
void peo(int& n)
{
	int terme1 = n / 2;
	int BLa = n % 2;

	int terme2 = terme1 / 2;
	int FLa = terme1 % 2;

	int terme3 = terme2 / 2;
	int FRa = terme2 % 2;

	int terme4 = terme3 / 2;
	int DBa = terme3 % 2;

	int terme5 = terme4 / 2;
	int DLa = terme4 % 2;

	int terme6 = terme5 / 2;
	int DFa = terme5 % 2;

	int terme7 = terme6 / 2;
	int DRa = terme6 % 2;

	int terme8 = terme7 / 2;
	int UBa = terme7 % 2;

	int terme9 = terme8 / 2;
	int ULa = terme8 % 2;

	int terme10 = terme9 / 2;
	int UFa = terme9 % 2;

	int URa = terme10 % 2;

	int BRa = 0;

	int somme = URa + UFa + ULa + UBa + DRa + DFa + DLa + DBa + FRa + FLa + BLa;
	if ((somme % 2) != 0)
		BRa = 1;

	int UR = URa;
	int UF = UFa;
	int UL = ULa;
	int UB = DBa;
	int DR = DRa;
	int DF = DFa;
	int DL = DLa;
	int DB = UBa;
	int FR = FRa;
	int FL = FLa;
	int BL = BRa;

	n = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
}

void faireEO(int& n, string mvts)
{
	for (int i = 0; i < mvts.size(); i++)
	{
		if (mvts[i] == 'R')
			Reo(n);
		else if (mvts[i] == 'r')
			reo(n);
		else if (mvts[i] == 'q')
			qeo(n);
		else if (mvts[i] == 'L')
			Leo(n);
		else if (mvts[i] == 'l')
			leo(n);
		else if (mvts[i] == 'k')
			keo(n);
		else if (mvts[i] == 'U')
			Ueo(n);
		else if (mvts[i] == 'u')
			ueo(n);
		else if (mvts[i] == 'y')
			yeo(n);
		else if (mvts[i] == 'D')
			Deo(n);
		else if (mvts[i] == 'd')
			deo(n);
		else if (mvts[i] == 't')
			teo(n);
		else if (mvts[i] == 'F')
			Feo(n);
		else if (mvts[i] == 'f')
			feo(n);
		else if (mvts[i] == 's')
			seo(n);
		else if (mvts[i] == 'B')
			Beo(n);
		else if (mvts[i] == 'b')
			beo(n);
		else if (mvts[i] == 'p')
			peo(n);
	}
}

string scramble()
{
	string melange = "";
	int nbAleatoire = 0;
	int key = 0;
	nbAleatoire = rand() % 18;
	while (melange.size() != 30)
	{
		if ((nbAleatoire == 0) && (key != 1))
		{
			melange += 'R';
			key = 1;
		}
		else if ((nbAleatoire == 1) && (key != 1))
		{
			melange += 'r';
			key = 1;
		}
		else if ((nbAleatoire == 2) && (key != 1))
		{
			melange += 'q';
			key = 1;
		}
		else if ((nbAleatoire == 3) && (key != 2))
		{
			melange += 'L';
			key = 2;
		}
		else if ((nbAleatoire == 4) && (key != 2))
		{
			melange += 'l';
			key = 2;
		}
		else if ((nbAleatoire == 5) && (key != 2))
		{
			melange += 'k';
			key = 2;
		}
		else if ((nbAleatoire == 6) && (key != 3))
		{
			melange += 'U';
			key = 3;
		}
		else if ((nbAleatoire == 7) && (key != 3))
		{
			melange += 'u';
			key = 3;
		}
		else if ((nbAleatoire == 8) && (key != 3))
		{
			melange += 'y';
			key = 3;
		}
		else if ((nbAleatoire == 9) && (key != 4))
		{
			melange += 'D';
			key = 4;
		}
		else if ((nbAleatoire == 10) && (key != 4))
		{
			melange += 'd';
			key = 4;
		}
		else if ((nbAleatoire == 11) && (key != 4))
		{
			melange += 't';
			key = 4;
		}
		else if ((nbAleatoire == 12) && (key != 5))
		{
			melange += 'F';
			key = 5;
		}
		else if ((nbAleatoire == 13) && (key != 5))
		{
			melange += 'f';
			key = 5;
		}
		else if ((nbAleatoire == 14) && (key != 5))
		{
			melange += 's';
			key = 5;
		}
		else if ((nbAleatoire == 15) && (key != 6))
		{
			melange += 'B';
			key = 6;
		}
			
		else if ((nbAleatoire == 16) && (key != 6))
		{
			melange += 'b';
			key = 6;
		}
		else if ((nbAleatoire == 17) && (key != 6))
		{
			melange += 'p';
			key = 6;
		}
		nbAleatoire = rand() % 18;
	}
	return melange;
}
string donnerBonneRep(string rep)
{
	string ordre = "";
	for (int i = rep.size()-1; i >= 0; i--)
	{
		ordre += rep[i];
	}
	string BonneRep = "";
	for (int j = 0; j < rep.size(); j++)
	{
		if (ordre[j] == 'R')
			BonneRep += 'r';
		else if (ordre[j] == 'r')
			BonneRep += 'R';
		else if (ordre[j] == 'q')
			BonneRep += 'q';
		else if (ordre[j] == 'L')
			BonneRep += 'l';
		else if (ordre[j] == 'l')
			BonneRep += 'L';
		else if (ordre[j] == 'k')
			BonneRep += 'k';
		else if (ordre[j] == 'U')
			BonneRep += 'u';
		else if (ordre[j] == 'u')
			BonneRep += 'U';
		else if (ordre[j] == 'y')
			BonneRep += 'y';
		else if (ordre[j] == 'D')
			BonneRep += 'd';
		else if (ordre[j] == 'd')
			BonneRep += 'D';
		else if (ordre[j] == 't')
			BonneRep += 't';
		else if (ordre[j] == 'F')
			BonneRep += 'f';
		else if (ordre[j] == 'f')
			BonneRep += 'F';
		else if (ordre[j] == 's')
			BonneRep += 's';
		else if (ordre[j] == 'B')
			BonneRep += 'b';
		else if (ordre[j] == 'b')
			BonneRep += 'B';
		else if (ordre[j] == 'p')
			BonneRep += 'p';
	}
	return BonneRep;
}
