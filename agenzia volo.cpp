/*un agenzia di viaggi effettua le prenotazioni per i voli della compagnia rapisardi airlines che applica delle tariffe standard per le seguenti detsinazioni: 1 Catania-Roma 30 euro, 2 Catania-Praga 55 euro, 3 Catania-New York 400 euro.,
al momento della prenotazione il cliente dovrà indicare il numero di passeggeri da prenotare e l'eventuale supplemento del bagaglio in stiva che corrisponde a â‚¬20 per le destinazioni Europee e di 50 euro per i voli intercontinentali.
Nel mese di Novembre l'agenzia applica uno sconto del 10 percento se il costo della prenotazione Ã¨ superiore a 500 euro.
Sul costo della prenotazione bisognerà calcolare le imposte di imbarco del 10% per le detsinazioni europee e 17% per destinazioni intercontinentali.
Visualizzare
1) Il totale lordo della destinazioni
2) Le imposte di imbarco
3) Lo sconto
4) Il totale netto da pagare
5) Il messaggio "Sconto d'autunno" se Ã¨ stato applicato lo Sconto
6) Il programma drovrà prevedere il cotrollo dell'imput in maniera tale che non possano essere inseriti codici di detsinazioni diversi da quelli previsti*/
#include <iostream>
using namespace std;
int main () {
    int passeggeri,sconto=0,bagagli,volo,prezzolordo,imposte,prezzotot,costobagagli;
    string mese;
    cout<<"--✈️-->benvenuti nella airlines rapiardi--✈️!";
    cout<<"che volo desidera acquistare!\n";
    cout<<"1) Catania-Roma 30€‚ \n2) Catania-Praga 55€‚ \n3)Catania-NY 400€‚ \n";
    cin>>volo;
    while (volo!=1 and volo!=2 and volo!=3) {
        cout<<"Inserisci una destinazione valida da quelle consigliate"<<endl;
        cin>>volo;
    }
    if(volo==1) {
                cout<<"siamo nel mese di Novembre? \n";
                cin>>mese;
                cout<<"hai scelto il volo ct-rm quanti passeggeri siete? \n";
                cin>>passeggeri;
                cout<<"quanti bagagli avete? \n";
                cin>>bagagli;
                prezzolordo=passeggeri*30;
                imposte=prezzolordo*0.1;
                costobagagli=20*bagagli;
                cout<<"il prezzo lordo è di € " <<prezzolordo<<endl;
                prezzotot=prezzolordo+imposte+costobagagli;
                if(prezzotot>=500 and mese=="si" or mese=="Si" or mese=="SI"){
                cout<<"€¨ stato applicato lo sconto di autunno";
                sconto=prezzotot*0.1;
                cout<<"lo sconto applicato di €"<<sconto<<endl;
                }
    }
                 if(volo==2) {
                cout<<"siamo nel mese di Novembre? \n";
                cin>>mese;
                cout<<"hai scelto il volo ct-praga quanti passeggeri siete? \n";
                cin>>passeggeri;
                cout<<"quanti bagagli avete? \n";
                cin>>bagagli;
                prezzolordo=passeggeri*55;
                imposte=prezzolordo*0.1;
                costobagagli=20*bagagli;
                cout<<"il prezzo lordo è di € " <<prezzolordo<<endl;
                prezzotot=prezzolordo+imposte+costobagagli;
                if(prezzotot>=500 and mese=="si" or mese=="Si" or mese=="SI"){
                cout<<"€¨ stato applicato lo sconto di autunno";
                sconto=prezzotot*0.1;
                cout<<"lo sconto applicato di €"<<sconto<<endl;
                
                }
                 }
                 
    
    
             if(volo==3) {
                cout<<"siamo nel mese di Novembre? \n";
                cin>>mese;
                cout<<"hai scelto il volo ct-NY quanti passeggeri siete? \n";
                cin>>passeggeri;
                cout<<"quanti bagagli avete? \n";
                cin>>bagagli;
                prezzolordo=passeggeri*400;
                imposte=prezzolordo*0.17;
                costobagagli=50*bagagli;
                cout<<"il prezzo lordo è di €" <<prezzolordo<<endl;
                prezzotot=prezzolordo+imposte+costobagagli;
                if(prezzotot>=500 and mese=="si" or mese=="Si" or mese=="SI"){
                cout<<" E' stato applicato lo sconto di autunno";
                sconto=prezzotot*0.1;
                cout<<"lo sconto applicato di € " <<sconto<<endl;
                
                }
                 }
    }