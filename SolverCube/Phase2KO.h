#ifndef PHASE2KO_H
#define PHASE2KO_H

#include<iostream>
#include<string>
#include<ctime>
#include<fstream>

using namespace std;




void UcpKO(int& n, int(&tableau)[8]);
void ucpKO(int& n, int(&tableau)[8]);
void ycpKO(int& n, int(&tableau)[8]);
void DcpKO(int& n, int(&tableau)[8]);
void dcpKO(int& n, int(&tableau)[8]);
void tcpKO(int& n, int(&tableau)[8]);
void RcpKO(int& n, int(&tableau)[8]);
void rcpKO(int& n, int(&tableau)[8]);
void qcpKO(int& n, int(&tableau)[8]);
void LcpKO(int& n, int(&tableau)[8]);
void lcpKO(int& n, int(&tableau)[8]);
void kcpKO(int& n, int(&tableau)[8]);
void FcpKO(int& n, int(&tableau)[8]);
void fcpKO(int& n, int(&tableau)[8]);
void scpKO(int& n, int(&tableau)[8]);
void BcpKO(int& n, int(&tableau)[8]);
void bcpKO(int& n, int(&tableau)[8]);
void pcpKO(int& n, int(&tableau)[8]);
void fairecpKO(int& n, int(&tableau)[8], string mvts);
string chercherP2KOcp(int cas);

void UepKO(int& n, int(&tableau)[8]);
void uepKO(int& n, int(&tableau)[8]);
void yepKO(int& n, int(&tableau)[8]);
void DepKO(int& n, int(&tableau)[8]);
void depKO(int& n, int(&tableau)[8]);
void tepKO(int& n, int(&tableau)[8]);
void qepKO(int& n, int(&tableau)[8]);
void kepKO(int& n, int(&tableau)[8]);
void sepKO(int& n, int(&tableau)[8]);
void pepKO(int& n, int(&tableau)[8]);
void faireepKO(int& n, int(&tableau)[8], string mvts);
string chercherP2KOep(int cas);
void decoderP2VersP2KO(int& P3, int(tableauP2)[12], int(&tableauP3)[8]);
void decoderP2VersP2KOUD(int(&tableauP2)[12], string& cas);

void UP2KOM(string& cas);
void uP2KOM(string& cas);
void yP2KOM(string& cas);
void DP2KOM(string& cas);
void dP2KOM(string& cas);
void tP2KOM(string& cas);
void qP2KOM(string& cas);
void kP2KOM(string& cas);
void sP2KOM(string& cas);
void pP2KOM(string& cas);
void faireP2KOM(string cas, string mvts);


#endif
