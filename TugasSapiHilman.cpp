#include <iostream>
#include <string>
using namespace std;

class sapi{
	public:
		void bersuara(string bunyi);
		int jumlahKumis;
		string warnaBulu;
};

int main(){
	sapi sapiDogol,sapibali;
	
	sapiDogol.warnaBulu = "PUTIH";
	sapibali.warnaBulu = "COKLAT";
	
	cout << (sapiDogol.warnaBulu);
	sapiDogol.bersuara("MOOOOOO");
	
	sapibali.bersuara("EMMOOOO");
}

void sapi::bersuara(string bunyi){
	cout << "Bunyinya "<<bunyi<< " !!"<<endl;
}
