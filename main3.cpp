#include <iostream>

using namespace std;

int main()
{
   //program of encoding or decoding a message
    cout<<"if you want to encoding enter the message then press 1"<<endl;
    cout<<"if you want to decoding enter the message then press 2"<<endl;
    string letter;//string that save the current letter which user want to decode or encode
    int x=0 ;//to encode or decode
    string s="";//to save the massage
    int i=0;
    cout <<"enter the message"<< endl;
    string str1,str2 ;
    //delete space
    getline(cin,str1);
    for(int i=0 ; i<str1.length() ; i++) {
    if (str1[i]==' ')
    continue ;
    else
    str2+=str1[i];}
    //start encode or decode
    cout<<"if you want to encoding press 1"<<endl;
    cout<<"if you want to decoding press 2"<<endl;
    cin >>x ;
    //encoding
    if (x==1){
        for ( i=0; i<int(str2.length()); i++){
            letter=str2[i];
            //letter encode
            if (letter =="A" ){
                s=s+"aaaaa";}
            else if (letter=="B"){
                s=s+"aaaab";}
            else if (letter=="C"){
                s=s+"aaaba";}
            else if (letter=="D"){
                s=s+"aaabb";}
            else if (letter=="E"){
                s=s+"aabaa";}
            else if (letter=="F"){
                s=s+"aabab";}
            else if (letter=="G"){
                s=s+"Aabba";}
            else if (letter=="H"){
                s=s+"Aabbb";}
            else if (letter=="I"){
                s=s+"Abaaa";}
            else if (letter=="J"){
                s=s+"Abaab";}
            else if (letter=="K"){
                s=s+"Ababa";}
            else if (letter=="L"){
                s=s+"Ababb";}
            else if (letter=="M"){
                s=s+"Abbaa";}
            else if (letter=="N"){
                s=s+"abbab";}
            else if (letter=="O"){
                s=s+"abbba";}
            else if (letter=="P"){
                s=s+"abbbb";}
            else if (letter=="Q"){
                s=s+"baaaa";}
            else if (letter=="R"){
                s=s+"baaab";}
            else if (letter=="S"){
                s=s+"baaba";}
            else if (letter=="T"){
                s=s+"baabb";}
            else if (letter=="U"){
                s=s+"babaa";}
            else if (letter=="V"){
                s=s+"babab";}
            else if (letter=="W"){
                s=s+"babba";}
            else if (letter=="X"){
                s=s+"babbb";}
            else if (letter=="Y"){
                s=s+"bbaaa";}
            else if (letter=="Z"){
                s=s+"bbaab";}
            else if (letter=="a"){
                s=s+"aaaaa";}
            else if (letter=="b"){
                s=s+"aaaab";}
            else if (letter=="c"){
                s=s+"aaaba";}
            else if (letter=="d"){
                s=s+"aaabb";}
            else if (letter=="e"){
                s=s+"aabaa";}
            else if (letter=="f"){
                s=s+"aabab";}
            else if (letter=="g"){
                s=s+"Aabba";}
            else if (letter=="h"){
                s=s+"Aabbb";}
            else if (letter=="i"){
                s=s+"Abaaa";}
            else if (letter=="j"){
                s=s+"Abaab";}
            else if (letter=="k"){
                s=s+"Ababa";}
            else if (letter=="l"){
                s=s+"Ababb";}
            else if (letter=="m"){
                s=s+"Abbaa";}
            else if (letter=="n"){
                s=s+"abbab";}
            else if (letter=="o"){
                s=s+"abbba";}
            else if (letter=="p"){
                s=s+"abbbb";}
            else if (letter=="q"){
                s=s+"baaaa";}
            else if (letter=="r"){
                s=s+"baaab";}
            else if (letter=="s"){
                s=s+"baaba";}
            else if (letter=="t"){
                s=s+"baabb";}
            else if (letter=="u"){
                s=s+"babaa";}
            else if (letter=="v"){
                s=s+"babab";}
            else if (letter=="w"){
                s=s+"babba";}
            else if (letter=="x"){
                s=s+"babbb";}
            else if (letter=="y"){
                s=s+"bbaaa";}
            else if (letter=="z"){
                s=s+"bbaab";}}}
                //decoding

    if (x==2){ for ( i=0; i<int(str2.length()); i=i+5){
            for(int j=i ; j<i+5 ; j++){
                letter+=str2[j];}
                //letter decoding
            if (letter =="aaaaa" ){
                s=s+"A";}
            else if (letter=="aaaab"){
                s=s+"B";}
            else if (letter=="aaaba"){
                s=s+"C";}
            else if (letter=="aaabb"){
                s=s+"D";}
            else if (letter=="aabaa"){
                s=s+"E";}
            else if (letter=="aabab"){
                s=s+"F";}
            else if (letter=="Aabba"){
                s=s+"G";}
            else if (letter=="Aabbb"){
                s=s+"H";}
            else if (letter=="Abaaa"){
                s=s+"I";}
            else if (letter=="Abaab"){
                s=s+"J";}
            else if (letter=="Ababa"){
                s=s+"K";}
            else if (letter=="Ababb"){
                s=s+"L";}
            else if (letter=="Abbaa"){
                s=s+"M";}
            else if (letter=="abbab"){
                s=s+"N";}
            else if (letter=="abbba"){
                s=s+"O";}
            else if (letter=="abbbb"){
                s=s+"P";}
            else if (letter=="baaaa"){
                s=s+"Q";}
            else if (letter=="baaab"){
                s=s+"R";}
            else if (letter=="baaba"){
                s=s+"S";}
            else if (letter=="baabb"){
                s=s+"T";}
            else if (letter=="babaa"){
                s=s+"U";}
            else if (letter=="babab"){
                s=s+"V";}
            else if (letter=="babba"){
                s=s+"W";}
            else if (letter=="babbb"){
                s=s+"X";}
            else if (letter=="bbaaa"){
                s=s+"Y";}
            else if (letter=="bbaab"){
                s=s+"Z";}
            letter="";}}
    cout<<s<<endl;//output
    return 0;
}
