#include <iostream>
#include <ctime>
using namespace std;

void giris();
int oyun(int level);

int main(){

    int level;
    
    
    giris();

        
    for(level=2; level<=10; level++){

        int cont;
        cout<<"level:"<<level-1<<endl;

        cont=oyun(level);



        if(cont==1){
            cout<<"DOGRU!! TEBRIKLER BIR SONRAKI LEVELE GECTIN"<<endl;
            cout<<"------------------------------------------------------------------"<<endl;
        }

        else{
            cout<<"YANLIS!! SAYILARI BULAMADIN UZGUNUM KAYBETTIN"<<endl;
            cout<<"------------------------------------------------------------------"<<endl;

            break;
        }
        
    }

    if(level==11)
        cout<<"OHA OYUNU YENDİN! SEN EN IYISISIN"<<endl;
    
    
    return 0;
}

void giris(){
    cout<<"OYUNA HOS GELDIN!"<<endl;
    cout<<"HER TUR 3 SAYI BULMAN GEREKIYOR"<<endl;
    cout<<"AMA ENDISELENME! BEN SANA BU 3 SAYIYI CARPINCA CIKAN SAYIYI"<<endl;
    cout<<"VE BU 3 SAYIYI TOPLAYINCA CIKAN SAYIYI SOYLEYECEGIM"<<endl;
    cout<<"HAZIRSAN BASLAYALIM!"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
}

int oyun(int level){

    int cont;
    int rand1, rand2, rand3;
    int tahmin1, tahmin2, tahmin3;
    int toplam,carpim;

    srand(time(NULL));
    rand1=rand()%level+level;
    
    srand(time(NULL)+1);
    rand2=rand()%level+level;

    srand(time(NULL)+2);
    rand3=rand()%level+level;

    toplam=rand1+rand2+rand3;
    carpim=rand1*rand2*rand3;

    cout<<"uc sayinin toplami:"<<toplam<<endl;
    cout<<"uc sayinin carpimi:"<<carpim<<endl;

    cout<<"uc sayiyi gir:"<<endl;   
    cin>>tahmin1>>tahmin2>>tahmin3;

    if(tahmin1==rand1){
        if(tahmin2==rand2){
            if(tahmin3==rand3)
                cont=1;
            else
                cont=0;
        }
        else if(tahmin2==rand3){
            if(tahmin3==rand2)
                cont=1;
            else
                cont=0;
        }
        else
            cont=0;
    }
    
    if(tahmin1==rand2){
        if(tahmin2==rand1){
            if(tahmin3==rand3)
                cont=1;
            else
                cont=0;
        }
        else if(tahmin2==rand3){
            if(tahmin3==rand1)
                cont=1;
            else
                cont=0;
        }
        else
            cont=0;
    }
    
    if(tahmin1==rand3){
        if(tahmin2==rand2){
            if(tahmin3==rand1)
                cont=1;
            else
                cont=0;
        }
        else if(tahmin2==rand1){
            if(tahmin3==rand2)
                cont=1;
            else
                cont=0;
        }
        else
            cont=0;
    }

    return cont;

}