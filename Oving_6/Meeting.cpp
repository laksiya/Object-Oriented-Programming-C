#include<string>
#include<iostream>
#include <vector>
#include "Meeting.h"
using namespace std;


ostream& operator<<(ostream &output, const Campus &c) {
	output << c;
		return output;
}

int Meeting::getday(){
	return day;
}
int Meeting::getstartTime() {
	return startTime;
}
int Meeting::getendTime() {
	return endTime;
}
Campus Meeting::getCampusLocation() {
	return CampusLocation;
}

string Meeting::getsubject() const {
	return subject;
}

const Person* Meeting::getleader() {
	return leader;
}

int randomWithLimits(int nedre, int ovre) {
	int dif = ovre - nedre;
	int tilfeldig_tall = std::rand() % (dif + 1);
	return tilfeldig_tall + nedre;
}

void Meeting::swap(int i, int j) {
	//Person temp;
	//temp = participants[i];
	//participants[i] = participants[j];
	//participants[j] = temp;
}

void Meeting::addParticipant(const Person* p) {
	/*string name;
	cout << "What's your name?" << endl;
	cin >> name;
	string email;
	cout << "What's your email?" << endl;
	cin >> email;
	Car car;
	Person p(name, email,&car);*/
	if (participants.size() == 0) {
		participants.push_back(p);
	}
	else{
		for (int i = 0; i < participants.size(); i++) {
			if (p < participants[i])
				participants.insert(participants.begin() + i, p);
			break;
		}
	}
}

std::vector<const Meeting*> Meeting::meetings;

Meeting::Meeting(int day, int startTime, int endTime, Campus CampusLocation, string subject, const Person* leader) {
	//Meeting m;
	this->day = day;
	this->startTime = startTime;
	this->endTime = endTime;
	this->leader = leader;
	this->subject = subject;
	this->CampusLocation = CampusLocation;
	addParticipant(leader);
	meetings.push_back(this);
}

Meeting::~Meeting() {
	int i = 0;
	while (meetings[i] != this) {
		i++;
	}
	meetings.erase(meetings.begin() + i);
	//delete(int day, int startTime, int endTime, Campus CampusLocation, string subject, const Person* leader);
}

vector<string> Meeting::getParticipantsList() {
	vector<string> list;
	for (int i = 0; i <= participants.size(); i++) {
		list.push_back(participants[i]->getName());
	}
	return list;
}

ostream &operator<<(ostream &output, const Meeting &m) {
	output << "Subject: " << m.getsubject() << "\tLocation: " << m.getCampusLocation() << "\tStarttime: " << m.getstartTime() << "\tEndtime: " << m.getendTime() << "\tLeader: " << m.getleader() << endl;
	vector<string> list = m.getParticipantsList();
	for (int i = 0; i <= list.size(); i++) {
		output << list[i] << endl;
	}
	return output;
}

vector<Person*> Meeting::findCoDriving() {
	vector<Person*> list;
	for (int i = 0; i <= meetings.size(); i++) {
		for (int j = 0; j <= participants.size(); j++) {
			if (participants[j]->hasAvailableSeats()) {
				list.push_back(participants[j]);
			}
		}
	}
	return list;
}