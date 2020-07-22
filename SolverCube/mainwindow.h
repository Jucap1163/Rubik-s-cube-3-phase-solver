#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QString>
#include <QMessageBox>
#include "movesdialog.h"
#include "Phase2KO.h"
#include "Phase2.h"
#include "Phase1.h"

extern int pruneUD[495];
extern int pruneCO[2187];
extern int moveTableEPKO[40320][10];
extern int moveTableCPKO[40320][10];
extern string tempTab[40320];
extern string tempTab2[40320];
extern int moveTable[24][10];
extern string UDSliceP2KO[24];
extern string prunageEPetUD[40320][24];
extern string tempo[40320][24];
extern string solution;
extern string solutionHumain;
extern int maximum;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void gereClickage(int& clc, QPushButton* p);
    bool verifierSiValide();
    void remplissageTablesDePrunageP2();
    void remplissageTablesDePrunageP2KO();
    void remplissageTablesDeMouvementsP2KO();
    void identifierArretes(int a, int b, int& c);
    bool trouverCasP1();
    bool trouverCasCO();
    void trouverCasUDP2();
    void treeSearchP2(int copieUD, int profondeur, string memo, int(&tab)[12], int copieCO, int& arret);
    void thistlethwaiteP2();
    void identifierPermutationCoins(int a, int b, int c, int& d);
    void trouverCasCP();
    void treeSearchP2KO(int copieCP, int copieEP, int profondeur, string memo, int copieUD, int key, int& arret);
    void thistlethwaiteP2KO();
    void solutionPourHumain();
private slots:


    void on_wc_clicked();

    void on_xc_clicked();

    void on_uc_clicked();

    void on_vc_clicked();

    void on_ke_clicked();

    void on_je_clicked();

    void on_ie_clicked();

    void on_le_clicked();

    void on_mc_clicked();

    void on_nc_clicked();

    void on_oc_clicked();

    void on_pc_clicked();

    void on_pe_clicked();

    void on_se_clicked();

    void on_xe_clicked();

    void on_te_clicked();

    void on_ac_clicked();

    void on_bc_clicked();

    void on_cc_clicked();

    void on_dc_clicked();

    void on_ae_clicked();

    void on_be_clicked();

    void on_ce_clicked();

    void on_de_clicked();

    void on_ec_clicked();

    void on_fc_clicked();

    void on_gc_clicked();

    void on_hc_clicked();

    void on_ne_clicked();

    void on_qe_clicked();

    void on_ve_clicked();

    void on_re_clicked();

    void on_qc_clicked();

    void on_rc_clicked();

    void on_sc_clicked();

    void on_tc_clicked();

    void on_oe_clicked();

    void on_fe_clicked();

    void on_we_clicked();

    void on_ge_clicked();

    void on_ic_clicked();

    void on_jc_clicked();

    void on_kc_clicked();

    void on_lc_clicked();

    void on_me_clicked();

    void on_he_clicked();

    void on_ue_clicked();

    void on_ee_clicked();

    void on_pushButton_clicked();

    void on_Solve_clicked();

    void on_actionMoves_triggered();

    void on_actionInstructions_triggered();

private:
    Ui::MainWindow *ui;
    Movesdialog *movesDialog;
    int clicWC = 0;
    int clicXC = 0;
    int clicUC = 0;
    int clicVC = 0;
    int clicKE = 0;
    int clicLE = 0;
    int clicIE = 0;
    int clicJE = 0;

    int clicMC = 0;
    int clicNC = 0;
    int clicOC = 0;
    int clicPC = 0;
    int clicPE = 0;
    int clicSE = 0;
    int clicTE = 0;
    int clicXE = 0;

    int clicAC = 0;
    int clicBC = 0;
    int clicCC = 0;
    int clicDC = 0;
    int clicAE = 0;
    int clicBE = 0;
    int clicCE = 0;
    int clicDE = 0;

    int clicEC = 0;
    int clicFC = 0;
    int clicGC = 0;
    int clicHC = 0;
    int clicNE = 0;
    int clicQE = 0;
    int clicRE = 0;
    int clicVE = 0;

    int clicQC = 0;
    int clicRC = 0;
    int clicSC = 0;
    int clicTC = 0;
    int clicOE = 0;
    int clicFE = 0;
    int clicWE = 0;
    int clicGE = 0;

    int clicIC = 0;
    int clicJC = 0;
    int clicKC = 0;
    int clicLC = 0;
    int clicME = 0;
    int clicHE = 0;
    int clicUE = 0;
    int clicEE = 0;

    int EO;
    int CO;
    int UD;
    int tabUD[12];
    int CP;
    int tabCP[8];
    int EP;
    int tabEP[8];
    string P2KOUD;
};

#endif // MAINWINDOW_H
