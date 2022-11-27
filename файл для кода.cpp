#include <iostream>
#include <string>

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

string chiter(string nn){
    string winter = "";
    char cent;
    int a = 0;
    while(nn > ""){
        cent = nn[a];
        if(cent == '1'){
            cent = '0';
        }else
            cent = '1';

        winter = winter + cent;
        a = a + 1;
        nn.pop_back();
    }
    return winter;
}

string shaman_c_dalnevo_voctoka(string terpila, long long oblomchik){
    string nakonezto = terpila;
    char cent;
    int a, sasat;
    sasat = 0;
    a = 5000000;
    while(a > 0){
        cent = terpila[oblomchik];
        a = a - 1;
        cout << terpila << endl;
        if(cent == '1'){
            terpila.pop_back();
            sasat = sasat + 1;
            cout << terpila << endl;
        }else
        if(cent = '0'){
            terpila.pop_back();
            terpila = terpila + "1";
            cout << terpila << endl;
            while(sasat > 0){
                terpila = terpila + "0";
                sasat = sasat - 1;
                cout << terpila << endl;
            }
            return terpila;
        }
    }
    return terpila;
}

int main() {
    int debil;
	long long n,  n2, oblomchik;
	string nn, terpila, zadolbish;

cin >> debil;
while(debil > 0){
cin >> debil;

	cin >> n;
	cin >> oblomchik;
	oblomchik = oblomchik - 1;

	if(n >= 0){
        cout << n;
        return 0;
	}

	n = n * -1;
    nn = otrok(n);
	nn = zaim(nn);
	nn = feya(nn, oblomchik);
    cout << "direct code: 1" << nn << endl;
    terpila = chiter(nn);
    cout << "reverse code: 1" << terpila << endl;
    zadolbish = shaman_c_dalnevo_voctoka(terpila, oblomchik);
    cout << "additional code: 1" << zadolbish << endl;
    cout << "I did it, give me 5";
    }
}
