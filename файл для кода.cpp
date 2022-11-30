#include <iostream>
#include <string>
#include<fstream>

using namespace std;

string otrok(long long n) {
	string rezak;
	rezak = "";
	while (n > 0) {
		(n % 2 == 0) ? rezak = rezak + "0" : rezak = rezak + "1";
		(n % 2 == 0) ? n = n / 2 : n = (n - 1) / 2;
	}
	rezak = rezak + "\0";
	return rezak;
}

string zaim(string nn){
 string rev;
    for (int i = nn.size() - 1; i >= 0; i--) {
        rev = rev.append(1, nn[i]);
    };
    return rev;
 }

string feya(string nn, long long oblomchik){
    long long ass;
    string bb = nn;
    long long littlebig = 0;
    string nnr = "";
    while(nn != ""){
        littlebig = littlebig + 1;
        nn.pop_back();
    }
    if(littlebig == oblomchik)
        return bb;

    if(littlebig > oblomchik){

        littlebig = littlebig - oblomchik;
        bb = zaim(bb);
        while(littlebig > 0){
            bb.pop_back();
            littlebig = littlebig - 1;
        }
        bb = zaim(bb);
        return bb;

    }else

        ass = oblomchik - littlebig;
        bb = zaim(bb);
        while(ass > 0){
            bb = bb + "0";
            ass = ass - 1;
        }
        bb = zaim(bb);
        return bb;
}

string chiter(string nn, long long oblomchik){
    string jojo = "";
    char cent;
    while(oblomchik > 0){
        cent = nn[0];
        nn = zaim(nn);
        nn.pop_back();
        nn = zaim(nn);
        if(cent == '1'){
            cent = '0';
            jojo = jojo + "0";
        }else
        if(cent == '0'){
            cent = '1';
            jojo = jojo + "1";
        }
        oblomchik -= 1;
    }
    return jojo;
}

string shaman_c_dalnevo_voctoka(string terpila, long long oblomchik){
    char cent;
    int vitya;
    vitya = 0;
    terpila = zaim(terpila);
    while(1){
        cent = terpila[0];
        if(cent == '1'){
            vitya += 1;
            terpila = zaim(terpila);
            terpila.pop_back();
            terpila = zaim(terpila);
        }else
        if(cent = '0'){
            terpila = zaim(terpila);
            terpila.pop_back();
            terpila += "1";
            while(vitya){
                terpila += "0";
                vitya -= 1;
            }
            return terpila;
        }
    }
}

int main() {
	long long n,  n2, oblomchik;
	string nn, terpila, zadolbish;
	ofstream vera;
	vera.open("vera.txt");

while(1){

	cin >> n;
	cin >> oblomchik;
	oblomchik = oblomchik - 1;

	if(n >= 0){
        n = n * -1;
        nn = otrok(n);
	    nn = zaim(nn);
	    nn = feya(nn, oblomchik);
        cout << "direct code: 1" << nn << endl;
        return 0;
	}

	n = n * -1;

    nn = otrok(n);

	nn = zaim(nn);

	nn = feya(nn, oblomchik);
    cout << "direct code: 1" << nn << endl;

    terpila = chiter(nn, oblomchik);
    cout << "reverse code: 1" << terpila << endl;

    zadolbish = shaman_c_dalnevo_voctoka(terpila, oblomchik);
    cout << "additional code: 1" << zadolbish << endl;

    cout << "I did it, give me 5";

    vera << n << endl << oblomchik + 1 << endl;
    vera << "direct code: 1" << nn << endl;
    vera << "reverse code: 1" << terpila << endl;
    vera << "additional code: 1" << zadolbish << endl;
    }
    vera.close();
}
