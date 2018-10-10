#pragma once
#include <string>
#include <vector>
#include "Person.h"
using namespace std;

enum Campus{TRH,GJO,AAL};

ostream& operator<<(ostream &output, const Campus& c);


class Meeting {
private: 
	int day;
	int startTime;
	int endTime;
	Campus CampusLocation;
	string subject;
	const Person* leader;
	std::vector<const Person*> participants;
	void swap(int i, int j);
	static std::vector<const Meeting*> meetings;
public:
	Meeting(int day, int startTime, int endTime, Campus CampusLocation, string subject, const Person* leader);
	int getday();
	int getstartTime();
	int getendTime();
	Campus getCampusLocation();
	string getsubject() const;
	const Person* getleader();
	void addParticipant(const Person* p);
	~Meeting();
	vector<string> getParticipantsList();
	vector<Person*> findCoDriving();
};