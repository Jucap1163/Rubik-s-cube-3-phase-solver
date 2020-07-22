#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

string UDSliceP2KO[24] = { "abcd", "abdc", "acbd", "acdb", "adbc", "adcb", "bacd", "badc", "bcad", "bcda", "bdac", "bdca", "cbad", "cbda", "cabd", "cadb", "cdba", "cdab", "dbca", "dbac", "dcba", "dcab", "dabc", "dacb" };
string prunageEPetUD[40320][24] = {};
string tempo[40320][24] = {};
int pruneUD[495] = {};
int pruneCO[2187] = {};
int moveTableEPKO[40320][10] = {};
int moveTableCPKO[40320][10] = {};
string tempTab[40320] = {};
string tempTab2[40320] = {};
int moveTable[24][10] = {};
string solution = "";
string solutionHumain = "";
int maximum = 1;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);
    // Face jaune
    ui->wc->setStyleSheet("background-color: yellow");
    clicWC = 3;
    ui->xc->setStyleSheet("background-color: yellow");
    clicXC = 3;
    ui->uc->setStyleSheet("background-color: yellow");
    clicUC = 3;
    ui->vc->setStyleSheet("background-color: yellow");
    clicVC = 3;
    ui->ke->setStyleSheet("background-color: yellow");
    clicKE = 3;
    ui->le->setStyleSheet("background-color: yellow");
    clicLE = 3;
    ui->ie->setStyleSheet("background-color: yellow");
    clicIE = 3;
    ui->je->setStyleSheet("background-color: yellow");
    clicJE = 3;
    ui->CentreJaune->setStyleSheet("background-color: yellow");
    // Face rouge
    ui->nc->setStyleSheet("background-color: red");
    clicNC = 2;
    ui->mc->setStyleSheet("background-color: red");
    clicMC = 2;
    ui->oc->setStyleSheet("background-color: red");
    clicOC = 2;
    ui->pc->setStyleSheet("background-color: red");
    clicPC = 2;
    ui->xe->setStyleSheet("background-color: red");
    clicXE = 2;
    ui->te->setStyleSheet("background-color: red");
    clicTE = 2;
    ui->pe->setStyleSheet("background-color: red");
    clicPE = 2;
    ui->se->setStyleSheet("background-color: red");
    clicSE = 2;
    ui->CentreRouge->setStyleSheet("background-color: red");
    // Face blanche
    ui->ac->setStyleSheet("background-color: white");
    clicAC = 0;
    ui->bc->setStyleSheet("background-color: white");
    clicBC = 0;
    ui->cc->setStyleSheet("background-color: white");
    clicCC = 0;
    ui->dc->setStyleSheet("background-color: white");
    clicDC = 0;
    ui->ae->setStyleSheet("background-color: white");
    clicAE = 0;
    ui->be->setStyleSheet("background-color: white");
    clicBE = 0;
    ui->ce->setStyleSheet("background-color: white");
    clicCE = 0;
    ui->de->setStyleSheet("background-color: white");
    clicDE = 0;
    ui->CentreBlanc->setStyleSheet("background-color: white");
    // Face orange
    ui->ec->setStyleSheet("background-color: orange");
    clicEC = 5;
    ui->fc->setStyleSheet("background-color: orange");
    clicFC = 5;
    ui->gc->setStyleSheet("background-color: orange");
    clicGC = 5;
    ui->hc->setStyleSheet("background-color: orange");
    clicHC = 5;
    ui->ne->setStyleSheet("background-color: orange");
    clicNE = 5;
    ui->qe->setStyleSheet("background-color: orange");
    clicQE = 5;
    ui->ve->setStyleSheet("background-color: orange");
    clicVE = 5;
    ui->re->setStyleSheet("background-color: orange");
    clicRE = 5;
    ui->CentreOrange->setStyleSheet("background-color: orange");
    // Face bleu
    ui->qc->setStyleSheet("background-color: blue");
    clicQC = 1;
    ui->rc->setStyleSheet("background-color: blue");
    clicRC = 1;
    ui->sc->setStyleSheet("background-color: blue");
    clicSC = 1;
    ui->tc->setStyleSheet("background-color: blue");
    clicTC = 1;
    ui->oe->setStyleSheet("background-color: blue");
    clicOE = 1;
    ui->fe->setStyleSheet("background-color: blue");
    clicFE = 1;
    ui->ge->setStyleSheet("background-color: blue");
    clicGE = 1;
    ui->we->setStyleSheet("background-color: blue");
    clicWE = 1;
    ui->CentreBleu->setStyleSheet("background-color: blue");
    // Face Verte
    ui->ic->setStyleSheet("background-color: green");
    clicIC = 4;
    ui->jc->setStyleSheet("background-color: green");
    clicJC = 4;
    ui->kc->setStyleSheet("background-color: green");
    clicKC = 4;
    ui->lc->setStyleSheet("background-color: green");
    clicLC = 4;
    ui->me->setStyleSheet("background-color: green");
    clicME = 4;
    ui->he->setStyleSheet("background-color: green");
    clicHE = 4;
    ui->ue->setStyleSheet("background-color: green");
    clicUE = 4;
    ui->ee->setStyleSheet("background-color: green");
    clicEE = 4;
    ui->CentreVert->setStyleSheet("background-color: green");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::gereClickage(int& clc, QPushButton* p)
{
    if(clc == 0){
        p->setStyleSheet("background-color: blue");
        clc++;
    }
    else if (clc == 1){
        p->setStyleSheet("background-color: red");
        clc++;
    }
    else if (clc == 2){
        p->setStyleSheet("background-color: yellow");
        clc++;
    }
    else if (clc == 3){
        p->setStyleSheet("background-color: green");
        clc++;
    }
    else if (clc == 4){
        p->setStyleSheet("background-color: orange");
        clc++;
    }
    else if (clc == 5){
        p->setStyleSheet("background-color: white");
        clc = 0;
    }
}
bool MainWindow::verifierSiValide()
{
    int blanc = 0;
    int bleu = 0;
    int rouge = 0;
    int vert = 0;
    int jaune = 0;
    int orange = 0;
    int tabTemporaireA[24] = { clicAE, clicBE, clicCE, clicDE, clicEE, clicFE, clicGE, clicHE, clicIE, clicJE, clicKE, clicLE, clicME, clicNE, clicOE, clicPE, clicQE, clicRE, clicSE, clicTE, clicUE, clicVE, clicWE, clicXE};
    int tabTemporaireC[24] = { clicAC, clicBC, clicCC, clicDC, clicEC, clicFC, clicGC, clicHC, clicIC, clicJC, clicKC, clicLC, clicMC, clicNC, clicOC, clicPC, clicQC, clicRC, clicSC, clicTC, clicUC, clicVC, clicWC, clicXC};

    for (int i = 0; i < 24; i++)
    {
        if (tabTemporaireA[i] == 0)
            blanc++;
        else if (tabTemporaireA[i] == 1)
            bleu++;
        else if (tabTemporaireA[i] == 2)
            rouge++;
        else if (tabTemporaireA[i] == 3)
            jaune++;
        else if (tabTemporaireA[i] == 4)
            vert++;
        else if (tabTemporaireA[i] == 5)
            orange++;
    }
    for (int i = 0; i < 24; i++)
    {
        if (tabTemporaireC[i] == 0)
            blanc++;
        else if (tabTemporaireC[i] == 1)
            bleu++;
        else if (tabTemporaireC[i] == 2)
            rouge++;
        else if (tabTemporaireC[i] == 3)
            jaune++;
        else if (tabTemporaireC[i] == 4)
            vert++;
        else if (tabTemporaireC[i] == 5)
            orange++;
    }
    if ((blanc != 8) || (bleu != 8) || (rouge != 8) || (jaune != 8) || (vert != 8) || (orange != 8))
    {
        QMessageBox::warning(this, "Warning Box", " You don't have the right amount of each color ");
        return false;
    }
    else {
        return true;
    }
}
void MainWindow::on_wc_clicked()
{
    gereClickage(clicWC, ui->wc);
}

void MainWindow::on_xc_clicked()
{
    gereClickage(clicXC, ui->xc);
}

void MainWindow::on_uc_clicked()
{
    gereClickage(clicUC, ui->uc);
}

void MainWindow::on_vc_clicked()
{
    gereClickage(clicVC, ui->vc);
}

void MainWindow::on_ke_clicked()
{
    gereClickage(clicKE, ui->ke);
}

void MainWindow::on_je_clicked()
{
    gereClickage(clicJE, ui->je);

}

void MainWindow::on_ie_clicked()
{
    gereClickage(clicIE, ui->ie);

}

void MainWindow::on_le_clicked()
{
    gereClickage(clicLE, ui->le);

}

void MainWindow::on_mc_clicked()
{
    gereClickage(clicMC, ui->mc);

}

void MainWindow::on_nc_clicked()
{
    gereClickage(clicNC, ui->nc);

}

void MainWindow::on_oc_clicked()
{
    gereClickage(clicOC, ui->oc);

}

void MainWindow::on_pc_clicked()
{
    gereClickage(clicPC, ui->pc);

}

void MainWindow::on_pe_clicked()
{
    gereClickage(clicPE, ui->pe);

}

void MainWindow::on_se_clicked()
{
    gereClickage(clicSE, ui->se);

}

void MainWindow::on_xe_clicked()
{
    gereClickage(clicXE, ui->xe);

}

void MainWindow::on_te_clicked()
{
    gereClickage(clicTE, ui->te);

}

void MainWindow::on_ac_clicked()
{
    gereClickage(clicAC, ui->ac);

}

void MainWindow::on_bc_clicked()
{
    gereClickage(clicBC, ui->bc);

}

void MainWindow::on_cc_clicked()
{
    gereClickage(clicCC, ui->cc);

}

void MainWindow::on_dc_clicked()
{
    gereClickage(clicDC, ui->dc);

}

void MainWindow::on_ae_clicked()
{
    gereClickage(clicAE, ui->ae);

}

void MainWindow::on_be_clicked()
{
    gereClickage(clicBE, ui->be);

}

void MainWindow::on_ce_clicked()
{
    gereClickage(clicCE, ui->ce);

}

void MainWindow::on_de_clicked()
{
    gereClickage(clicDE, ui->de);

}

void MainWindow::on_ec_clicked()
{
    gereClickage(clicEC, ui->ec);

}

void MainWindow::on_fc_clicked()
{
    gereClickage(clicFC, ui->fc);

}

void MainWindow::on_gc_clicked()
{
    gereClickage(clicGC, ui->gc);

}

void MainWindow::on_hc_clicked()
{
    gereClickage(clicHC, ui->hc);

}

void MainWindow::on_ne_clicked()
{
    gereClickage(clicNE, ui->ne);

}

void MainWindow::on_qe_clicked()
{
    gereClickage(clicQE, ui->qe);

}

void MainWindow::on_ve_clicked()
{
    gereClickage(clicVE, ui->ve);

}

void MainWindow::on_re_clicked()
{
    gereClickage(clicRE, ui->re);

}

void MainWindow::on_qc_clicked()
{
    gereClickage(clicQC, ui->qc);

}

void MainWindow::on_rc_clicked()
{
    gereClickage(clicRC, ui->rc);

}

void MainWindow::on_sc_clicked()
{
    gereClickage(clicSC, ui->sc);

}

void MainWindow::on_tc_clicked()
{
    gereClickage(clicTC, ui->tc);

}

void MainWindow::on_oe_clicked()
{
    gereClickage(clicOE, ui->oe);

}

void MainWindow::on_fe_clicked()
{
    gereClickage(clicFE, ui->fe);

}

void MainWindow::on_we_clicked()
{
    gereClickage(clicWE, ui->we);

}

void MainWindow::on_ge_clicked()
{
    gereClickage(clicGE, ui->ge);

}


void MainWindow::on_ic_clicked()
{
    gereClickage(clicIC, ui->ic);

}

void MainWindow::on_jc_clicked()
{
    gereClickage(clicJC, ui->jc);

}

void MainWindow::on_kc_clicked()
{
    gereClickage(clicKC, ui->kc);

}

void MainWindow::on_lc_clicked()
{
    gereClickage(clicLC, ui->lc);

}

void MainWindow::on_me_clicked()
{
    gereClickage(clicME, ui->me);

}

void MainWindow::on_he_clicked()
{
    gereClickage(clicHE, ui->he);

}

void MainWindow::on_ue_clicked()
{
    gereClickage(clicUE, ui->ue);

}

void MainWindow::on_ee_clicked()
{
    gereClickage(clicEE, ui->ee);

}

void MainWindow::remplissageTablesDePrunageP2()
{
    ifstream in;
    int num = 0;
    string mvt = "";
    in.open("C:\\Users\\jucap\\Documents\\SolverCube\\MovesP2COOrdonne.txt");
    for (int i = 0; i < 2187; i++)
    {
        in >> num;
        in >> mvt;
        pruneCO[i] = mvt.size();
    }
    ifstream in2;
    int num2 = 0;
    string mvt2 = "";
    in2.open("C:\\Users\\jucap\\Documents\\SolverCube\\MovesUDP2Ordonne.txt");
    for (int i = 0; i < 495; i++)
    {
        in2 >> num2;
        in2 >> mvt2;
        pruneUD[i] = mvt2.size();
    }
}

void MainWindow::remplissageTablesDePrunageP2KO()
{
    // remplissage des tables de prunage
    ifstream in1;
    int k = 0;
    int m = 0;

    ifstream input;
    input.open("C:\\Users\\jucap\\Documents\\SolverCube\\PrunageCPetUD.txt");
    input.seekg(0, ios::beg);
    for (int i = 0; i < 40320; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            int val;
            int val2;
            string mvts;
            input >> val;
            input >> val2;
            input >> mvts;
            tempo[val][val2] = mvts;
        }
    }
    input.close();

    ifstream input2;
    input2.open("C:\\Users\\jucap\\Documents\\SolverCube\\PrunageEPetUD.txt");
    input2.seekg(0, ios::beg);
    for (int i = 0; i < 40320; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            int val;
            int val2;
            string mvts;
            input2 >> val;
            input2 >> val2;
            input2 >> mvts;
            prunageEPetUD[val][val2] = mvts;
        }
    }
    input2.close();
    /*in1.open("MovesP2KOepOrdonne.txt");
    in1.seekg(0, ios::beg);
    while (!ws(in1).eof())
    {
        int val = 0;
        in1 >> val;
        donnees2[m++] = val;
    }*/
}

void MainWindow::remplissageTablesDeMouvementsP2KO()
{
    //remplissage des moveTables. Tout d<abord celle de UDSlice
    for (int j = 0; j < 24; j++)
    {
        string cas = UDSliceP2KO[j];
        for (int i = 0; i < 10; i++)
        {
            if ((i == 0)) {
                moveTable[j][0] = j;
            }
            else if ((i == 1)) {
                moveTable[j][1] = j;
            }
            else if ((i == 2)) {
                moveTable[j][2] = j;
            }
            else if ((i == 3)) {
                kP2KOM(cas);
                for (int n = 0; n < 24; n++)
                {
                    if (cas == UDSliceP2KO[n])
                        moveTable[j][3] = n;
                }
                kP2KOM(cas);
            }
            else if ((i == 4)) {
                qP2KOM(cas);
                for (int n = 0; n < 24; n++)
                {
                    if (cas == UDSliceP2KO[n])
                        moveTable[j][4] = n;
                }
                qP2KOM(cas);
            }
            else if ((i == 5)) {
                moveTable[j][5] = j;
            }
            else if ((i == 6)) {
                moveTable[j][6] = j;
            }
            else if ((i == 7)) {
                moveTable[j][7] = j;
            }
            else if ((i == 8)) {
                sP2KOM(cas);
                for (int n = 0; n < 24; n++)
                {
                    if (cas == UDSliceP2KO[n])
                        moveTable[j][8] = n;
                }
                sP2KOM(cas);
            }
            else if ((i == 9)) {
                pP2KOM(cas);
                for (int n = 0; n < 24; n++)
                {
                    if (cas == UDSliceP2KO[n])
                        moveTable[j][9] = n;
                }
                pP2KOM(cas);
            }
        }
    }
    //Remplissage de Move table de la permutation des coins
    int l = 0;
    ifstream input2;
    input2.open("C:\\Users\\jucap\\Documents\\SolverCube\\MovesP2KOcpPourPrunage.txt");
    input2.seekg(0, ios::beg);
    while (!ws(input2).eof())
    {
        string mvts = "";
        input2 >> mvts;
        tempTab[l++] = mvts;
    }
    for (int j = 0; j < 40320; j++)
    {
        int prunageCP = 0;
        int tabMoveCP[8];
        for (int i = 0; i < 8; i++)
        {
            tabMoveCP[i] = i;
        }
        string cas = tempTab[j];
        fairecpKO(prunageCP, tabMoveCP, cas);
        for (int i = 0; i < 10; i++)
        {
            if ((i == 0)) {
                int tempPrunageCP = prunageCP;
                int tempTabMoveCP[8] = { tabMoveCP[0], tabMoveCP[1], tabMoveCP[2], tabMoveCP[3], tabMoveCP[4], tabMoveCP[5], tabMoveCP[6], tabMoveCP[7] };
                UcpKO(prunageCP, tabMoveCP);
                moveTableCPKO[j][0] = prunageCP;
                prunageCP = tempPrunageCP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveCP[i] = tempTabMoveCP[i];
                }
            }
            else if ((i == 1)) {
                int tempPrunageCP = prunageCP;
                int tempTabMoveCP[8] = { tabMoveCP[0], tabMoveCP[1], tabMoveCP[2], tabMoveCP[3], tabMoveCP[4], tabMoveCP[5], tabMoveCP[6], tabMoveCP[7] };
                ucpKO(prunageCP, tabMoveCP);
                moveTableCPKO[j][1] = prunageCP;
                prunageCP = tempPrunageCP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveCP[i] = tempTabMoveCP[i];
                }
            }
            else if ((i == 2)) {
                int tempPrunageCP = prunageCP;
                int tempTabMoveCP[8] = { tabMoveCP[0], tabMoveCP[1], tabMoveCP[2], tabMoveCP[3], tabMoveCP[4], tabMoveCP[5], tabMoveCP[6], tabMoveCP[7] };
                ycpKO(prunageCP, tabMoveCP);
                moveTableCPKO[j][2] = prunageCP;
                prunageCP = tempPrunageCP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveCP[i] = tempTabMoveCP[i];
                }
            }
            else if ((i == 3)) {
                int tempPrunageCP = prunageCP;
                int tempTabMoveCP[8] = { tabMoveCP[0], tabMoveCP[1], tabMoveCP[2], tabMoveCP[3], tabMoveCP[4], tabMoveCP[5], tabMoveCP[6], tabMoveCP[7] };
                kcpKO(prunageCP, tabMoveCP);
                moveTableCPKO[j][3] = prunageCP;
                prunageCP = tempPrunageCP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveCP[i] = tempTabMoveCP[i];
                }
            }
            else if ((i == 4)) {
                int tempPrunageCP = prunageCP;
                int tempTabMoveCP[8] = { tabMoveCP[0], tabMoveCP[1], tabMoveCP[2], tabMoveCP[3], tabMoveCP[4], tabMoveCP[5], tabMoveCP[6], tabMoveCP[7] };
                qcpKO(prunageCP, tabMoveCP);
                moveTableCPKO[j][4] = prunageCP;
                prunageCP = tempPrunageCP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveCP[i] = tempTabMoveCP[i];
                }
            }
            else if ((i == 5)) {
                int tempPrunageCP = prunageCP;
                int tempTabMoveCP[8] = { tabMoveCP[0], tabMoveCP[1], tabMoveCP[2], tabMoveCP[3], tabMoveCP[4], tabMoveCP[5], tabMoveCP[6], tabMoveCP[7] };
                DcpKO(prunageCP, tabMoveCP);
                moveTableCPKO[j][5] = prunageCP;
                prunageCP = tempPrunageCP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveCP[i] = tempTabMoveCP[i];
                }
            }
            else if ((i == 6)) {
                int tempPrunageCP = prunageCP;
                int tempTabMoveCP[8] = { tabMoveCP[0], tabMoveCP[1], tabMoveCP[2], tabMoveCP[3], tabMoveCP[4], tabMoveCP[5], tabMoveCP[6], tabMoveCP[7] };
                dcpKO(prunageCP, tabMoveCP);
                moveTableCPKO[j][6] = prunageCP;
                prunageCP = tempPrunageCP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveCP[i] = tempTabMoveCP[i];
                }
            }
            else if ((i == 7)) {
                int tempPrunageCP = prunageCP;
                int tempTabMoveCP[8] = { tabMoveCP[0], tabMoveCP[1], tabMoveCP[2], tabMoveCP[3], tabMoveCP[4], tabMoveCP[5], tabMoveCP[6], tabMoveCP[7] };
                tcpKO(prunageCP, tabMoveCP);
                moveTableCPKO[j][7] = prunageCP;
                prunageCP = tempPrunageCP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveCP[i] = tempTabMoveCP[i];
                }
            }
            else if ((i == 8)) {
                int tempPrunageCP = prunageCP;
                int tempTabMoveCP[8] = { tabMoveCP[0], tabMoveCP[1], tabMoveCP[2], tabMoveCP[3], tabMoveCP[4], tabMoveCP[5], tabMoveCP[6], tabMoveCP[7] };
                scpKO(prunageCP, tabMoveCP);
                moveTableCPKO[j][8] = prunageCP;
                prunageCP = tempPrunageCP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveCP[i] = tempTabMoveCP[i];
                }
            }
            else if ((i == 9)) {
                int tempPrunageCP = prunageCP;
                int tempTabMoveCP[8] = { tabMoveCP[0], tabMoveCP[1], tabMoveCP[2], tabMoveCP[3], tabMoveCP[4], tabMoveCP[5], tabMoveCP[6], tabMoveCP[7] };
                pcpKO(prunageCP, tabMoveCP);
                moveTableCPKO[j][9] = prunageCP;
                prunageCP = tempPrunageCP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveCP[i] = tempTabMoveCP[i];
                }
            }
        }
    }
    //Remplissage de Move table de la permutation des arretes
    int x = 0;
    ifstream input3;
    input3.open("C:\\Users\\jucap\\Documents\\SolverCube\\MovesP2KOepPourPrunage.txt");
    input3.seekg(0, ios::beg);
    while (!ws(input3).eof())
    {
        string mvts = "";
        input3 >> mvts;
        tempTab2[x++] = mvts;
    }
    for (int j = 0; j < 40320; j++)
    {
        int prunageEP = 0;
        int tabMoveEP[8];
        for (int i = 0; i < 8; i++)
        {
            tabMoveEP[i] = i;
        }
        string cas = tempTab2[j];
        faireepKO(prunageEP, tabMoveEP, cas);
        for (int i = 0; i < 10; i++)
        {
            if ((i == 0)) {
                int tempPrunageEP = prunageEP;
                int tempTabMoveEP[8] = { tabMoveEP[0], tabMoveEP[1], tabMoveEP[2], tabMoveEP[3], tabMoveEP[4], tabMoveEP[5], tabMoveEP[6], tabMoveEP[7] };
                UepKO(prunageEP, tabMoveEP);
                moveTableEPKO[j][0] = prunageEP;
                prunageEP = tempPrunageEP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveEP[i] = tempTabMoveEP[i];
                }
            }
            else if ((i == 1)) {
                int tempPrunageEP = prunageEP;
                int tempTabMoveEP[8] = { tabMoveEP[0], tabMoveEP[1], tabMoveEP[2], tabMoveEP[3], tabMoveEP[4], tabMoveEP[5], tabMoveEP[6], tabMoveEP[7] };
                uepKO(prunageEP, tabMoveEP);
                moveTableEPKO[j][1] = prunageEP;
                prunageEP = tempPrunageEP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveEP[i] = tempTabMoveEP[i];
                }
            }
            else if ((i == 2)) {
                int tempPrunageEP = prunageEP;
                int tempTabMoveEP[8] = { tabMoveEP[0], tabMoveEP[1], tabMoveEP[2], tabMoveEP[3], tabMoveEP[4], tabMoveEP[5], tabMoveEP[6], tabMoveEP[7] };
                yepKO(prunageEP, tabMoveEP);
                moveTableEPKO[j][2] = prunageEP;
                prunageEP = tempPrunageEP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveEP[i] = tempTabMoveEP[i];
                }
            }
            else if ((i == 3)) {
                int tempPrunageEP = prunageEP;
                int tempTabMoveEP[8] = { tabMoveEP[0], tabMoveEP[1], tabMoveEP[2], tabMoveEP[3], tabMoveEP[4], tabMoveEP[5], tabMoveEP[6], tabMoveEP[7] };
                kepKO(prunageEP, tabMoveEP);
                moveTableEPKO[j][3] = prunageEP;
                prunageEP = tempPrunageEP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveEP[i] = tempTabMoveEP[i];
                }
            }
            else if ((i == 4)) {
                int tempPrunageEP = prunageEP;
                int tempTabMoveEP[8] = { tabMoveEP[0], tabMoveEP[1], tabMoveEP[2], tabMoveEP[3], tabMoveEP[4], tabMoveEP[5], tabMoveEP[6], tabMoveEP[7] };
                qepKO(prunageEP, tabMoveEP);
                moveTableEPKO[j][4] = prunageEP;
                prunageEP = tempPrunageEP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveEP[i] = tempTabMoveEP[i];
                }
            }
            else if ((i == 5)) {
                int tempPrunageEP = prunageEP;
                int tempTabMoveEP[8] = { tabMoveEP[0], tabMoveEP[1], tabMoveEP[2], tabMoveEP[3], tabMoveEP[4], tabMoveEP[5], tabMoveEP[6], tabMoveEP[7] };
                DepKO(prunageEP, tabMoveEP);
                moveTableEPKO[j][5] = prunageEP;
                prunageEP = tempPrunageEP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveEP[i] = tempTabMoveEP[i];
                }
            }
            else if ((i == 6)) {
                int tempPrunageEP = prunageEP;
                int tempTabMoveEP[8] = { tabMoveEP[0], tabMoveEP[1], tabMoveEP[2], tabMoveEP[3], tabMoveEP[4], tabMoveEP[5], tabMoveEP[6], tabMoveEP[7] };
                depKO(prunageEP, tabMoveEP);
                moveTableEPKO[j][6] = prunageEP;
                prunageEP = tempPrunageEP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveEP[i] = tempTabMoveEP[i];
                }
            }
            else if ((i == 7)) {
                int tempPrunageEP = prunageEP;
                int tempTabMoveEP[8] = { tabMoveEP[0], tabMoveEP[1], tabMoveEP[2], tabMoveEP[3], tabMoveEP[4], tabMoveEP[5], tabMoveEP[6], tabMoveEP[7] };
                tepKO(prunageEP, tabMoveEP);
                moveTableEPKO[j][7] = prunageEP;
                prunageEP = tempPrunageEP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveEP[i] = tempTabMoveEP[i];
                }
            }
            else if ((i == 8)) {
                int tempPrunageEP = prunageEP;
                int tempTabMoveEP[8] = { tabMoveEP[0], tabMoveEP[1], tabMoveEP[2], tabMoveEP[3], tabMoveEP[4], tabMoveEP[5], tabMoveEP[6], tabMoveEP[7] };
                sepKO(prunageEP, tabMoveEP);
                moveTableEPKO[j][8] = prunageEP;
                prunageEP = tempPrunageEP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveEP[i] = tempTabMoveEP[i];
                }
            }
            else if ((i == 9)) {
                int tempPrunageEP = prunageEP;
                int tempTabMoveEP[8] = { tabMoveEP[0], tabMoveEP[1], tabMoveEP[2], tabMoveEP[3], tabMoveEP[4], tabMoveEP[5], tabMoveEP[6], tabMoveEP[7] };
                pepKO(prunageEP, tabMoveEP);
                moveTableEPKO[j][9] = prunageEP;
                prunageEP = tempPrunageEP;
                for (int i = 0; i < 8; i++)
                {
                    tabMoveEP[i] = tempTabMoveEP[i];
                }
            }
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->progressBar->value() != 100)
    {
        ui->progressBar->setValue(5);
        remplissageTablesDePrunageP2();
        ui->progressBar->setValue(45);
        remplissageTablesDePrunageP2KO();
        ui->progressBar->setValue(75);
        remplissageTablesDeMouvementsP2KO();
        ui->progressBar->setValue(100);
    }
    else
        QMessageBox::warning(this, "Warning Box", " Files are already uploaded ");
}
bool MainWindow::trouverCasP1()
{
    int UR = 0;
    int UF = 0;
    int UL = 0;
    int UB = 0;
    int DR = 0;
    int DF = 0;
    int DL = 0;
    int DB = 0;
    int FR = 0;
    int FL = 0;
    int BL = 0;
    int BR = 0;

    if (((clicDE == 1) || (clicDE == 4)) && ((clicPE == 0) || (clicPE == 3)))
        UR = 1;
    if ((clicDE == 2) || (clicDE == 5))
        UR = 1;

    if (((clicAE == 1) || (clicAE == 4)) && ((clicME == 0) || (clicME == 3)))
        UF = 1;
    if ((clicAE == 2) || (clicAE == 5))
        UF = 1;

    if (((clicBE == 1) || (clicBE == 4)) && ((clicNE == 0) || (clicNE == 3)))
        UL = 1;
    if ((clicBE == 2) || (clicBE == 5))
        UL = 1;

    if (((clicCE == 1) || (clicCE == 4)) && ((clicOE == 0) || (clicOE == 3)))
        UB = 1;
    if ((clicCE == 2) || (clicCE == 5))
        UB = 1;

    if (((clicLE == 1) || (clicLE == 4)) && ((clicXE == 0) || (clicXE == 3)))
        DR = 1;
    if ((clicLE == 2) || (clicLE == 5))
        DR = 1;

    if (((clicIE == 1) || (clicIE == 4)) && ((clicUE == 0) || (clicUE == 3)))
        DF = 1;
    if ((clicIE == 2) || (clicIE == 5))
        DF = 1;

    if (((clicJE == 1) || (clicJE == 4)) && ((clicVE == 0) || (clicVE == 3)))
        DL = 1;
    if ((clicJE == 2) || (clicJE == 5))
        DL = 1;

    if (((clicKE == 1) || (clicKE == 4)) && ((clicWE == 0) || (clicWE == 3)))
        DB = 1;
    if ((clicKE == 2) || (clicKE == 5))
        DB = 1;

    if (((clicHE == 1) || (clicHE == 4)) && ((clicTE == 0) || (clicTE == 3)))
        FR = 1;
    if ((clicHE == 2) || (clicHE == 5))
        FR = 1;

    if (((clicEE == 1) || (clicEE == 4)) && ((clicQE == 0) || (clicQE == 3)))
        FL = 1;
    if ((clicEE == 2) || (clicEE == 5))
        FL = 1;

    if (((clicFE == 1) || (clicFE == 4)) && ((clicRE == 0) || (clicRE == 3)))
        BL = 1;
    if ((clicFE == 2) || (clicFE == 5))
        BL = 1;

    if (((clicGE == 1) || (clicGE == 4)) && ((clicSE == 0) || (clicSE == 3)))
        BR = 1;
    if ((clicGE == 2) || (clicGE == 5))
        BR = 1;

    EO = UR * 1024 + UF * 512 + UL * 256 + UB * 128 + DR * 64 + DF * 32 + DL * 16 + DB * 8 + FR * 4 + FL * 2 + BL * 1;
    if ((UR + UF + UL + UB + DR + DF + DL + DB + FR + FL + BL + BR) % 2 != 0)
    {
        QMessageBox::warning(this, "Warning Box", " Wrong edge orientation. Check your edges !!! ");
        return false;
    }
    else
        return true;
}

void MainWindow::on_Solve_clicked()
{
    // solution contient les mouvements servant a orienter le cube
    if (trouverCasP1() && trouverCasCO() && verifierSiValide() && (ui->progressBar->value() == 100))
    {
        string reponse = chercherP1(EO);
        solution = donnerBonneRep(reponse);
        ui->progressBar_2->setValue(20);

        trouverCasUDP2();
        faireCo(CO, solution);
        faireUD(UD, tabUD, solution);
        thistlethwaiteP2();
        ui->progressBar_2->setValue(60);

        trouverCasCP();
        decoderP2VersP2KO(EP, tabUD, tabEP);
        decoderP2VersP2KOUD(tabUD, P2KOUD);
        fairecpKO(CP, tabCP, solution);
        thistlethwaiteP2KO();
        ui->progressBar_2->setValue(100);

        solutionPourHumain();
        int size = solution.size();
        QString qstr = QString::fromStdString(solutionHumain);
        ui->label->setText(qstr);
        ui->label_2->setNum(size);
        ui->label_3->setText("mvts");
        solution = "";
        solutionHumain = "";
    }
    else
        QMessageBox::warning(this, "Warning Box", " You need to load the files before solving ");

}
void MainWindow::identifierArretes(int a, int b, int& c)
{
    if (((a == 0) && (b == 2)) || ((a == 2) && (b == 0)))
        c = 0;
    else if (((a == 0) && (b == 4)) || ((a == 4) && (b == 0)))
        c = 1;
    else if (((a == 0) && (b == 5)) || ((a == 5) && (b == 0)))
        c = 2;
    else if (((a == 0) && (b == 1)) || ((a == 1) && (b == 0)))
        c = 3;
    else if (((a == 3) && (b == 2)) || ((a == 2) && (b == 3)))
        c = 4;
    else if (((a == 3) && (b == 4)) || ((a == 4) && (b == 3)))
        c = 5;
    else if (((a == 3) && (b == 5)) || ((a == 5) && (b == 3)))
        c = 6;
    else if (((a == 3) && (b == 1)) || ((a == 1) && (b == 3)))
        c = 7;
    else if (((a == 4) && (b == 2)) || ((a == 2) && (b == 4)))
        c = 8;
    else if (((a == 4) && (b == 5)) || ((a == 5) && (b == 4)))
        c = 9;
    else if (((a == 1) && (b == 5)) || ((a == 5) && (b == 1)))
        c = 10;
    else if (((a == 1) && (b == 2)) || ((a == 2) && (b == 1)))
        c = 11;
}
void MainWindow::trouverCasUDP2()
{
    identifierArretes(clicDE, clicPE, tabUD[0]);
    identifierArretes(clicAE, clicME, tabUD[1]);
    identifierArretes(clicBE, clicNE, tabUD[2]);
    identifierArretes(clicCE, clicOE, tabUD[3]);
    identifierArretes(clicLE, clicXE, tabUD[4]);
    identifierArretes(clicIE, clicUE, tabUD[5]);
    identifierArretes(clicJE, clicVE, tabUD[6]);
    identifierArretes(clicKE, clicWE, tabUD[7]);
    identifierArretes(clicHE, clicTE, tabUD[8]);
    identifierArretes(clicEE, clicQE, tabUD[9]);
    identifierArretes(clicFE, clicRE, tabUD[10]);
    identifierArretes(clicGE, clicSE, tabUD[11]);

    int compte = -1;
    int res = 0;

    for (int i = 0; i < 12; i++)
    {
        if (tabUD[i] < 8) {
            res = res + NChooseM(i, compte);
        }
        else
            compte++;
    }
    UD = res;
}
bool MainWindow::trouverCasCO()
{
    int URF = 0;
    int UFL = 0;
    int ULB = 0;
    int UBR = 0;
    int DFR = 0;
    int DLF = 0;
    int DBL = 0;
    int DRB = 0;

    if ((clicCC != 0) || (clicCC != 3))
    {
          if ((clicJC == 0) || (clicJC == 3))
              URF = 2;
          if ((clicMC == 0) || (clicMC == 3))
              URF = 1;
    }
    if ((clicDC != 0) || (clicDC != 3))
    {
          if ((clicIC == 0) || (clicIC == 3))
              UFL = 1;
          if ((clicFC == 0) || (clicFC == 3))
              UFL = 2;
    }
    if ((clicAC != 0) || (clicAC != 3))
    {
          if ((clicEC == 0) || (clicEC == 3))
              ULB = 1;
          if ((clicRC == 0) || (clicRC == 3))
              ULB = 2;
    }
    if ((clicBC != 0) || (clicBC != 3))
    {
          if ((clicQC == 0) || (clicQC == 3))
              UBR = 1;
          if ((clicNC == 0) || (clicNC == 3))
              UBR = 2;
    }
    if ((clicVC != 0) || (clicVC != 3))
    {
          if ((clicKC == 0) || (clicKC == 3))
              DFR = 1;
          if ((clicPC == 0) || (clicPC == 3))
              DFR = 2;
    }
    if ((clicUC != 0) || (clicUC != 3))
    {
          if ((clicGC == 0) || (clicGC == 3))
              DLF = 1;
          if ((clicLC == 0) || (clicLC == 3))
              DLF = 2;
    }
    if ((clicXC != 0) || (clicXC != 3))
    {
          if ((clicSC == 0) || (clicSC == 3))
              DBL = 1;
          if ((clicHC == 0) || (clicHC == 3))
              DBL = 2;
    }
    if ((clicWC != 0) || (clicWC != 3))
    {
          if ((clicOC == 0) || (clicOC == 3))
              DRB = 1;
          if ((clicTC == 0) || (clicTC == 3))
              DRB = 2;
    }
    //cout << URF << " " << UFL << " " << ULB << " " << UBR << " " << DFR << " " << DLF << " " << DBL << " " << DRB << endl;
    CO = URF * 729 + UFL * 243 + ULB * 81 + UBR * 27 + DFR * 9 + DLF * 3 + DBL * 1;
    if ((URF + UFL + ULB + UBR + DFR + DBL + DRB + DLF) % 3 != 0)
    {
        QMessageBox::warning(this, "Warning Box", " Wrong corner orientation. Check your corners !!! ");
        return false;
    }
    else
        return true;
}

void MainWindow::treeSearchP2(int copieUD, int profondeur, string memo, int(&tab)[12], int copieCO, int& arret)
{
    string mvts = "UuyDdtRrqLlksp";
    if (profondeur > maximum)
        maximum = profondeur;

    if (profondeur == 0)
    {
        if ((copieUD == 0) && (copieCO == 0)) {
            solution +=  memo;
            for(int i = 0; i < 12;i++)
            {
                tabUD[i] = tab[i];
            }
            UD = copieUD;
            arret = 0;
        }

    }
    else if (profondeur == maximum) {
        for (int i = 0; i < 4; i++)
        {
            if ((i == 0)) {
                if (arret == 0)
                    break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                R(copieUD, tab);
                Rco(copieCO);
                memo += 'R';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                qco(copieCO);
            }
            else if ((i == 1)) {
                if (arret == 0)
                    break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                r(copieUD, tab);
                memo += 'r';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                Rco(copieCO);
            }

            else if ((i == 2)) {
                if (arret == 0)
                    break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                L(copieUD, tab);
                Lco(copieCO);
                memo += 'L';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                kco(copieCO);
            }
            else if ((i == 3)) {
                if (arret == 0)
                    break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                l(copieUD, tab);
                memo += 'l';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                Lco(copieCO);
            }
        }
    }
    else if ((profondeur > 0) && (pruneCO[copieCO] <= profondeur) && (pruneUD[copieUD] <= profondeur))
    {
        for (int i = 0; i < mvts.size(); i++)
        {
            if ((i == 0)) {
                if (arret == 0)
                    break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                U(copieUD, tab);
                Uco(copieCO);
                memo += 'U';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                yco(copieCO);
            }
            else if ((i == 1)) {
                if (arret == 0)
                    break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                u(copieUD, tab);
                memo += 'u';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                uco(copieCO);
            }
            else if ((i == 2)) {
                if (arret == 0)
                    break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                Y(copieUD, tab);
                memo += 'y';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                yco(copieCO);
            }
            else if ((i == 3)) {
                if (arret == 0)
                    break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                L(copieUD, tab);
                Lco(copieCO);
                memo += 'L';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                kco(copieCO);
            }
            else if ((i == 4)) {
                if (arret == 0)
                    break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                l(copieUD, tab);
                memo += 'l';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                lco(copieCO);
            }
            else if ((i == 5)) {
                if (arret == 0)
                    break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                k(copieUD, tab);
                memo += 'k';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                kco(copieCO);
            }
            else if ((i == 6)) {
                if (arret == 0)
                    break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                R(copieUD, tab);
                Rco(copieCO);
                memo += 'R';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                qco(copieCO);
            }
            else if ((i == 7)) {
            if (arret == 0)
                break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                r(copieUD, tab);
                memo += 'r';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                rco(copieCO);
            }
            else if ((i == 8)) {
            if (arret == 0)
                break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                q(copieUD, tab);
                memo += 'q';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                qco(copieCO);
            }
            else if ((i == 9)) {
            if (arret == 0)
                break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                D(copieUD, tab);
                Dco(copieCO);
                memo += 'D';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                tco(copieCO);
            }
            else if ((i == 10)) {
            if (arret == 0)
                break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                d(copieUD, tab);;
                memo += 'd';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                dco(copieCO);
            }
            else if ((i == 11)) {
            if (arret == 0)
                break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                t(copieUD, tab);
                memo += 't';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                tco(copieCO);
            }
            else if ((i == 12)) {
            if (arret == 0)
                break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                s(copieUD, tab);
                sco(copieCO);
                memo += 's';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                sco(copieCO);
            }
            else if ((i == 13)) {
            if (arret == 0)
                break;
                int tempPos = copieUD;
                int tempTab[12] = { tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11] };
                p(copieUD, tab);
                pco(copieCO);
                memo += 'p';
                treeSearchP2(copieUD, profondeur - 1, memo, tab, copieCO, arret);
                memo.erase(memo.size() - 1, 1);
                copieUD = tempPos;
                for (int i = 0; i < 12; i++) {
                    tab[i] = tempTab[i];
                }
                pco(copieCO);
            }
        }
    }
}

void MainWindow::thistlethwaiteP2()
{
    int arret = 12;
    int table[12];
    int copieUD = UD;
    int copieCO = CO;
    for (int j = 0; j < 12; j++)
    {
        table[j] = tabUD[j];
    }
    int minimum = chercherP2CO(CO).size();
    int inter = chercherP2UD(UD).size();
    if (inter > minimum)
        minimum = inter;
    string memo = "";
    for (int i = minimum; i < arret; i++)
    {

        treeSearchP2(copieUD, i, memo, table, copieCO, arret);

    }
}

void MainWindow::identifierPermutationCoins(int a, int b, int c, int& d)
{
    // a blanc-jaune/ b bleu-vert/ c rouge-orange
    if (a == 0)
    {
        if (b == 1)
        {
            if (c == 2)
                d = 3;
            else if (c == 5){
                d = 2;
            }
        }
        else if (b == 4)
            {
                if (c == 2)
                    d = 0;
                else if (c == 5){
                    d = 1;
                }
            }
      }
    else if (a == 3)
    {
        if (b == 1)
        {
            if (c == 2)
                d = 7;
            else if (c == 5){
                d = 6;
            }
        }
        else if (b == 4)
            {
                if (c == 2)
                    d = 4;
                else if (c == 5){
                    d = 5;
                }
            }
      }
    // a bleu-vert/ b blanc-jaune/ c rouge-orange
    if (a == 1)
    {
        if (b == 0)
        {
            if (c == 2)
                d = 3;
            else if (c == 5){
                d = 2;
            }
        }
        else if (b == 3)
            {
                if (c == 2)
                    d = 7;
                else if (c == 5){
                    d = 6;
                }
            }
      }
    else if (a == 4)
    {
        if (b == 0)
        {
            if (c == 2)
                d = 0;
            else if (c == 5){
                d = 1;
            }
        }
        else if (b == 3)
            {
                if (c == 2)
                    d = 4;
                else if (c == 5){
                    d = 5;
                }
            }
      }
    // a blanc-jaune/ b rouge-orange/ c bleu-vert
    if (a == 0)
    {
        if (b == 2)
        {
            if (c == 1)
                d = 3;
            else if (c == 4){
                d = 0;
            }
        }
        else if (b == 5)
            {
                if (c == 1)
                    d = 2;
                else if (c == 4){
                    d = 1;
                }
            }
      }
    else if (a == 3)
    {
        if (b == 2)
        {
            if (c == 1)
                d = 7;
            else if (c == 4){
                d = 4;
            }
        }
        else if (b == 5)
            {
                if (c == 1)
                    d = 6;
                else if (c == 4){
                    d = 5;
                }
            }
      }
    // a rouge-orange/ b blanc-jaune/ c bleu-vert
    if (a == 2)
    {
        if (b == 0)
        {
            if (c == 1)
                d = 3;
            else if (c == 4){
                d = 0;
            }
        }
        else if (b == 3)
            {
                if (c == 1)
                    d = 7;
                else if (c == 4){
                    d = 4;
                }
            }
      }
    else if (a == 5)
    {
        if (b == 0)
        {
            if (c == 1)
                d = 2;
            else if (c == 4){
                d = 1;
            }
        }
        else if (b == 3)
            {
                if (c == 1)
                    d = 6;
                else if (c == 4){
                    d = 5;
                }
            }
      }
    // a rouge-orange/ b bleu-vert/ c blanc-jaune
    if (a == 2)
    {
        if (b == 1)
        {
            if (c == 0)
                d = 3;
            else if (c == 3){
                d = 7;
            }
        }
        else if (b == 4)
            {
                if (c == 0)
                    d = 0;
                else if (c == 3){
                    d = 4;
                }
            }
      }
    else if (a == 5)
    {
        if (b == 1)
        {
            if (c == 0)
                d = 2;
            else if (c == 3){
                d = 6;
            }
        }
        else if (b == 4)
            {
                if (c == 0)
                    d = 1;
                else if (c == 3){
                    d = 5;
                }
            }
      }
    // a bleu-vert/ b rouge-orange/ c blanc-jaune
    if (a == 1)
    {
        if (b == 2)
        {
            if (c == 0)
                d = 3;
            else if (c == 3){
                d = 7;
            }
        }
        else if (b == 5)
            {
                if (c == 0)
                    d = 2;
                else if (c == 3){
                    d = 6;
                }
            }
      }
    else if (a == 4)
    {
        if (b == 2)
        {
            if (c == 0)
                d = 0;
            else if (c == 3){
                d = 4;
            }
        }
        else if (b == 5)
            {
                if (c == 0)
                    d = 1;
                else if (c == 3){
                    d = 5;
                }
            }
      }
}

void MainWindow::trouverCasCP()
{
    identifierPermutationCoins(clicAC, clicRC, clicEC, tabCP[2]);
    identifierPermutationCoins(clicBC, clicQC, clicNC, tabCP[3]);
    identifierPermutationCoins(clicCC, clicJC, clicMC, tabCP[0]);
    identifierPermutationCoins(clicDC, clicIC, clicFC, tabCP[1]);
    identifierPermutationCoins(clicUC, clicLC, clicGC, tabCP[5]);
    identifierPermutationCoins(clicVC, clicKC, clicPC, tabCP[4]);
    identifierPermutationCoins(clicWC, clicTC, clicOC, tabCP[7]);
    identifierPermutationCoins(clicXC, clicSC, clicHC, tabCP[6]);

    int total = 0;
    int res[8] = { 0, 1, 2, 6, 24, 120, 720, 5040 };

    for (int i = 0; i < 8; i++)
    {
        int a = 0;
        for (int j = 0; j < i; j++)
        {
            if (tabCP[i] < tabCP[j])
                a++;

        }
        total = total + a * res[i];
    }
    CP = total;
}
void MainWindow::thistlethwaiteP2KO()
{
    int copieCP = CP;
    int copieEP = EP;
    int copieUD = 0;
    for (int i = 0; i < 24; i++)
    {
        if (P2KOUD == UDSliceP2KO[i])
            copieUD = i;
    }
    string memo = "";
    int arret = 17;
    for (int i = 0; i < arret; i++)
    {
        //cout << "profondeur " << i << endl;
        treeSearchP2KO(copieCP, copieEP, i, memo, copieUD, 0, arret);

    }
}
void MainWindow::treeSearchP2KO(int copieCP, int copieEP, int profondeur, string memo, int copieUD, int key, int& arret)
{
    string mvts = "UuyDdtqksp";
    if (profondeur == 0)
    {
        if ((copieCP == 0) && (copieUD == 0) && (copieEP == 0)) {
            solution += memo;
            arret = 0;
            //cout << "Solution phase 2 Kociemba trouvee" << endl << memo << endl;
        }

    }
    else if ((profondeur > 0) && (tempo[copieCP][copieUD].size() <= profondeur) && (prunageEPetUD[copieEP][copieUD].size() <= profondeur))
    {
        for (int i = 0; i < mvts.size(); i++)
        {
            if ((i == 0) && (key != 1)) {
                if (arret == 0)
                    break;
                int tempPos = copieCP;
                int tempPos2 = copieEP;
                int tempUD = copieUD;
                int tempKey = key;
                copieUD = moveTable[copieUD][0];
                copieCP = moveTableCPKO[copieCP][0];
                copieEP = moveTableEPKO[copieEP][0];
                memo += 'U';
                key = 1;
                treeSearchP2KO(copieCP, copieEP, profondeur - 1, memo, copieUD, key, arret);
                memo.erase(memo.size() - 1, 1);
                copieCP = tempPos;
                copieEP = tempPos2;
                copieUD = tempUD;
                key = tempKey;
            }
            else if ((i == 1) && (key != 1)) {
                if (arret == 0)
                    break;
                int tempPos = copieCP;
                int tempPos2 = copieEP;
                int tempUD = copieUD;
                int tempKey = key;
                copieUD = moveTable[copieUD][1];
                copieCP = moveTableCPKO[copieCP][1];
                copieEP = moveTableEPKO[copieEP][1];
                memo += 'u';
                key = 1;
                treeSearchP2KO(copieCP, copieEP, profondeur - 1, memo, copieUD, key, arret);
                memo.erase(memo.size() - 1, 1);
                copieCP = tempPos;
                copieEP = tempPos2;
                copieUD = tempUD;
                key = tempKey;
            }
            else if ((i == 2) && (key != 1)) {
                if (arret == 0)
                    break;
                int tempPos = copieCP;
                int tempPos2 = copieEP;
                int tempUD = copieUD;
                int tempKey = key;
                copieUD = moveTable[copieUD][2];
                copieCP = moveTableCPKO[copieCP][2];
                copieEP = moveTableEPKO[copieEP][2];
                memo += 'y';
                key = 1;
                treeSearchP2KO(copieCP, copieEP, profondeur - 1, memo, copieUD, key, arret);
                memo.erase(memo.size() - 1, 1);
                copieCP = tempPos;
                copieEP = tempPos2;
                copieUD = tempUD;
                key = tempKey;
            }
            else if ((i == 3) && (key != 2)) {
                if (arret == 0)
                    break;
                int tempPos = copieCP;
                int tempPos2 = copieEP;
                int tempUD = copieUD;
                int tempKey = key;
                copieUD = moveTable[copieUD][3];
                copieCP = moveTableCPKO[copieCP][3];
                copieEP = moveTableEPKO[copieEP][3];
                memo += 'k';
                key = 2;
                treeSearchP2KO(copieCP, copieEP, profondeur - 1, memo, copieUD, key, arret);
                memo.erase(memo.size() - 1, 1);
                copieCP = tempPos;
                copieEP = tempPos2;
                copieUD = tempUD;
                key = tempKey;
            }
            else if ((i == 4) && (key != 3)) {
                if (arret == 0)
                    break;
                int tempPos = copieCP;
                int tempPos2 = copieEP;
                int tempUD = copieUD;
                int tempKey = key;
                copieUD = moveTable[copieUD][4];
                copieCP = moveTableCPKO[copieCP][4];
                copieEP = moveTableEPKO[copieEP][4];
                memo += 'q';
                key = 3;
                treeSearchP2KO(copieCP, copieEP, profondeur - 1, memo, copieUD, key, arret);
                memo.erase(memo.size() - 1, 1);
                copieCP = tempPos;
                copieEP = tempPos2;
                copieUD = tempUD;
                key = tempKey;
            }
            else if ((i == 5) && (key != 4)) {
                if (arret == 0)
                    break;
                int tempPos = copieCP;
                int tempPos2 = copieEP;
                int tempUD = copieUD;
                int tempKey = key;
                copieUD = moveTable[copieUD][5];
                copieCP = moveTableCPKO[copieCP][5];
                copieEP = moveTableEPKO[copieEP][5];
                memo += 'D';
                key = 4;
                treeSearchP2KO(copieCP, copieEP, profondeur - 1, memo, copieUD, key, arret);
                memo.erase(memo.size() - 1, 1);
                copieCP = tempPos;
                copieEP = tempPos2;
                copieUD = tempUD;
                key = tempKey;
            }
            else if ((i == 6) && (key != 4)) {
                if (arret == 0)
                    break;
                int tempPos = copieCP;
                int tempPos2 = copieEP;
                int tempUD = copieUD;
                int tempKey = key;
                copieUD = moveTable[copieUD][6];
                copieCP = moveTableCPKO[copieCP][6];
                copieEP = moveTableEPKO[copieEP][6];
                memo += 'd';
                key = 4;
                treeSearchP2KO(copieCP, copieEP, profondeur - 1, memo, copieUD,key, arret);
                memo.erase(memo.size() - 1, 1);
                copieCP = tempPos;
                copieEP = tempPos2;
                copieUD = tempUD;
                key = tempKey;
            }
            else if ((i == 7) && (key != 4)) {
                if (arret == 0)
                    break;
                int tempPos = copieCP;
                int tempPos2 = copieEP;
                int tempUD = copieUD;
                int tempKey = key;
                copieUD = moveTable[copieUD][7];
                copieCP = moveTableCPKO[copieCP][7];
                copieEP = moveTableEPKO[copieEP][7];
                memo += 't';
                key = 4;
                treeSearchP2KO(copieCP, copieEP, profondeur - 1, memo, copieUD, key, arret);
                memo.erase(memo.size() - 1, 1);
                copieCP = tempPos;
                copieEP = tempPos2;
                copieUD = tempUD;
                key = tempKey;
            }
            else if ((i == 8) && (key != 5)) {
                if (arret == 0)
                    break;
                int tempPos = copieCP;
                int tempPos2 =copieEP;
                int tempUD = copieUD;
                int tempKey = key;
                copieUD = moveTable[copieUD][8];
                copieCP = moveTableCPKO[copieCP][8];
                copieEP = moveTableEPKO[copieEP][8];
                memo += 's';
                key = 5;
                treeSearchP2KO(copieCP, copieEP, profondeur - 1, memo, copieUD, key, arret);
                memo.erase(memo.size() - 1, 1);
                copieCP = tempPos;
                copieEP = tempPos2;
                copieUD = tempUD;
                key = tempKey;
            }
            else if ((i == 9) && (key != 6)) {
                if (arret == 0)
                    break;
                int tempPos = copieCP;
                int tempPos2 = copieEP;
                int tempUD = copieUD;
                int tempKey = key;
                copieUD = moveTable[copieUD][9];
                copieCP = moveTableCPKO[copieCP][9];
                copieEP = moveTableEPKO[copieEP][9];
                memo += 'p';
                key = 6;
                treeSearchP2KO(copieCP, copieEP, profondeur - 1, memo, copieUD, key, arret);
                memo.erase(memo.size() - 1, 1);
                copieCP = tempPos;
                copieEP = tempPos2;
                copieUD = tempUD;
                key = tempKey;
            }
        }
    }
}
void MainWindow::solutionPourHumain()
{
    for(int i = 0; i < solution.size(); i++)
    {
        if(solution[i] == 'U')
            solutionHumain += "U ";
        else if(solution[i] == 'u')
            solutionHumain += "U' ";
        else if(solution[i] == 'y')
            solutionHumain += "U2 ";
        else if(solution[i] == 'D')
            solutionHumain += "D ";
        else if(solution[i] == 'd')
            solutionHumain += "D' ";
        else if(solution[i] == 't')
            solutionHumain += "D2 ";
        else if(solution[i] == 'R')
            solutionHumain += "R ";
        else if(solution[i] == 'r')
            solutionHumain += "R' ";
        else if(solution[i] == 'q')
            solutionHumain += "R2 ";
        else if(solution[i] == 'L')
            solutionHumain += "L ";
        else if(solution[i] == 'l')
            solutionHumain += "L' ";
        else if(solution[i] == 'k')
            solutionHumain += "L2 ";
        else if(solution[i] == 'F')
            solutionHumain += "F ";
        else if(solution[i] == 'f')
            solutionHumain += "F' ";
        else if(solution[i] == 's')
            solutionHumain += "F2 ";
        else if(solution[i] == 'B')
            solutionHumain += "B ";
        else if(solution[i] == 'b')
            solutionHumain += "B' ";
        else if(solution[i] == 'p')
            solutionHumain += "B2 ";
    }
}

void MainWindow::on_actionMoves_triggered()
{
    movesDialog = new Movesdialog(this);
    movesDialog->show();
}

void MainWindow::on_actionInstructions_triggered()
{
    QMessageBox::information(this, "Instructions", " Apply moves with green in front and white on top ");
}
