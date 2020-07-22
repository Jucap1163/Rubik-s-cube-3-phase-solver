#ifndef PHASE2_H
#define PHASE2_H

#include<iostream>
#include<string>
#include<ctime>
#include<fstream>


using namespace std;


string chercherP2UD(int cas);
string chercherP2CO(int cas);
int NChooseM(int N, int M);
void U(int& n, int(&tableau)[12]);
void u(int& n, int(&tableau)[12]);
void Y(int& n, int(&tableau)[12]);
void D(int& n, int(&tableau)[12]);
void d(int& n, int(&tableau)[12]);
void t(int& n, int(&tableau)[12]);
void R(int& n, int(&tableau)[12]);
void r(int& n, int(&tableau)[12]);
void q(int& n, int(&tableau)[12]);
void L(int& n, int(&tableau)[12]);
void l(int& n, int(&tableau)[12]);
void k(int& n, int(&tableau)[12]);
void F(int& n, int(&tableau)[12]);
void f(int& n, int(&tableau)[12]);
void s(int& n, int(&tableau)[12]);
void B(int& n, int(&tableau)[12]);
void b(int& n, int(&tableau)[12]);
void p(int& n, int(&tableau)[12]);

void faireUDSansFB(int& n, int(&tableau)[12], std::string mvts);
void faireUD(int& n, int(&tableau)[12], std::string mvts);

void Uco(int& n);
void uco(int& n);
void yco(int& n);
void Dco(int& n);
void dco(int& n);
void tco(int& n);
void Rco(int& n);
void rco(int& n);
void qco(int& n);
void Lco(int& n);
void lco(int& n);
void kco(int& n);
void sco(int& n);
void pco(int& n);
void Fco(int& n);
void fco(int& n);
void Bco(int& n);
void bco(int& n);

void faireCoSansFB(int& n, std::string mvts);
void faireCo(int& n, string mvts);
string scrambleCoSansFB();

#endif
