#include<bits/stdc++.h>
using namespace std;

class DocGia{
	string MaDG, tenDG;
	int tongTienMuon, soNgayMuon;
	public:
		
};

class TaiLieu{
	private:
		string maTL, tenTL;
		int giaMuon;
	public:
		string getmaTL(){
			return maTL;
		}
		
		string gettenTL(){
			return tenTL;
		}
		
		TaiLieu() : maTL(""), tenTL(""), giaMuon(0) {}
		TaiLieu(const TaiLieu &TL){
			maTL = TL.maTL;
			tenTL = TL.tenTL;
			giaMuon = TL.giaMuon;
		}
		//TaiLieu(const TaiLieu &TL) : maTL(TL.maTL), tenTL(TL.tenTL), giaMuon(TL.giaMuon) {}		
		
		//void themTaiLieu();
		
		void xoaTaiLieu(){
			maTL = "";
	        tenTL = "";
	        giaMuon = 0;
        	cout << " da xoa tai lieu!";
		}
		
		void suaTaiLieu(){
			cin.ignore();
			cout <<"ma tai lieu moi: ";
			getline(cin, maTL);
			cout <<"\n"<<"ten tai lieu moi: ";
			getline(cin, tenTL);
			cout <<"\n"<<"gia muon tai lieu: ";
			cin >> giaMuon;
		}
		
		void layTaiLieu(){
			cin.ignore();
			cout <<"ma tai lieu: ";
			getline(cin, maTL);
			cout <<"\n"<<"ten tai lieu: ";
			getline(cin, tenTL);
			cout <<"\n"<<"gia muon tai lieu: ";
			cin >> giaMuon;
		}
		friend istream &operator >> (istream &is, TaiLieu &TL){
			cout <<"nhap ma tai lieu: ";   
			getline(is, TL.maTL);
			cout << "\n"<< "nhap ten tai lieu: ";
			getline(is, TL.tenTL);
			cout <<"\n"<<"nhap gia muon: ";
			is >> TL.giaMuon;
			cin.ignore();
			return is;
		}
		
		friend ostream &operator << (ostream &os, TaiLieu TL){
			os << TL.maTL <<"\n";
			os << TL.tenTL <<"\n";
			os << TL.giaMuon <<"\n";
			return os;
		}
		~TaiLieu(){
			cout <<"\n"<<"ham tao da duoc huy \n";
		}
};
class Sach: public TaiLieu{
	string loaiSach;
	public:
		friend istream &operator >> (istream &is, Sach &S){
			TaiLieu::suaTaiLieu();
			getline(is, S.loaiSach);
		}	
		friend ostream &operator << (ostream &os, Sach S){
			os << S.loaiSach;
		}
};

class DeAn: public TaiLieu{
	int soLuongTrang;
	string loaiDeAn;			
};

int main(){
	TaiLieu TL;	
	cin >> TL;
	cout << TL;
	char s;
	cout <<" nhap lua chon: "; 
	cin >> s;
	while(s){
		if(s == 's') {
			TL.suaTaiLieu();
			break;
		}
		else if(s == 'x'){
			TL.xoaTaiLieu();
			break;
		}
		else if(s == 'l'){
			TL.layTaiLieu();
			break;
		} 
		else break;
	}
	
	return 0;
}
