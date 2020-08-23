#include<iostream>
using namespace std;
string setPlayerInfo();

class Player {
	protected:
	                  int mAge;
	                  string mName;
	                  string mCountry;
	public:
		void playerInfo() {
			cout << "Name:" << mName << " " << "Age:" << mAge << "Country:" << mCountry <<endl;
	}
	void setplayerInfo(string str, int age,string country)
	{
		mAge = age;
		mName = str;
		mCountry=country;
	}
};
class Footballer : public Player {
	protected:
		int goalScore;
	    double scoringAvg;
	    string totalNumMatches;
	public :

	void FootballerInfo() {
		cout << "Name:" << mName << " " << "Age" << mAge << " " << "Scored Goal:" << goalScore << " " << "Scoring Avg:" << scoringAvg<<" "<<"TMatch:"<< totalNumMatches <<  endl;
	}
		void setFootballerInfo(int numOfGoal, double avgGoal,int tMatch) {
		goalScore = numOfGoal;
		scoringAvg = avgGoal;
		totalNumMatches=tMatch;
	}

};
class Cricketer : public Player {
	protected:
		string playerType;
		string totalNumMatches;
    public:
        void CricketerInfo( ) {
		cout << "Name:" << mName << " " << "Ptype:" <<  playerType << " " << "Tmatches:" << totalNumMatches << " " << endl;
	}
        void setCricketerInfo(string pType, string tMatch){
            playerType=pType;
            totalNumMatches=tMatch;
        }


};
class Batsman : public Cricketer {
	protected:
		double runScored;
		double battingAvg;
    public:
        void BatsmanInfo( ) {
		cout << "Name:" << mName << " " << "rc:" <<  runScored<< " " << "ba:" << battingAvg << " " << endl;
	}
        void setBatsmanInfo(double rc, double ba){
            runScored=rc;
		   battingAvg=ba;
        }


};
class Bowler : public Cricketer {
	protected:
		double wicketTaken;
		double wicketAvg;
    public:

	void BowlerInfo( ) {
		cout << "Name:" << mName << " " << "wc:" <<  wicketTaken<< " " << "wAvg:" <<  wicketAvg<< " " << endl;
	}
        void setBowlerInfo(double wc, double wAvg){
            wicketTaken =wc;
		     wicketAvg =wAvg;
        }

};
class wicketKeeper : public Cricketer {

	protected:
		double numOfStumping;
		double noOfRunout;
		double stumpingAvg;
		double runoutAvg;
    public:

	void wicketkeeperInfo( ) {
		cout << "Name:" << mName << " " << "st:" << numOfStumping<< " " << "rout:" <<  noOfRunout << "sAvg:"<<stumpingAvg << "rOutAvg:" << runoutAvg << " " << endl;
	}

        void setwicketkeeperInfo(double st, double rOut,double sAvg,double rOutAvg){
        numOfStumping=st;
		noOfRunout =rOut;
		stumpingAvg=sAvg;
		runoutAvg=rOutAvg;
        }

};
 int main(){
    Footballer p1;
    p1.setplayerInfo("Ronaldo", 32,"Portugal");
    p1.setFootballerInfo(120,14.5,200);
    p1.FootballerInfo();

    Batsman p2;
    p2.setplayerInfo("Sakib-Al-Hasan",33,"Bangladesh");
    p2.setCricketerInfo("Batsman","330");
    p2.setBatsmanInfo(7665,46.75);
    p2.BatsmanInfo();

    Bowler p3;
    p3.setplayerInfo("Mustafizur Rahman",23,"Bangladesh");
    p3.setCricketerInfo("Bowler","45");
    p3.setBowlerInfo(110,4.75);
    p3.BowlerInfo();

    wicketKeeper p4;
    p4.setplayerInfo("MushfiqurRahim",29,"Bangladesh");
    p4.setCricketerInfo("Wicket Keeper","145");
    p4.setwicketkeeperInfo(45,56,4.7,3.8);
    p4.wicketkeeperInfo();
    }


