#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;

int rooms(vector< vector<int> >meetings){
	priority_queue<pi, vector<pi>, greater<pi> > minStartTime;
	priority_queue<pi, vector<pi>, greater<pi> > minEndTime;

	int i = 0;
	while(i < meetings.size()){
		minStartTime.push( make_pair(meetings[i][0], meetings[i][1]) );
		i++;
	}

	int requiredRooms = 0;

	if(!minStartTime.empty()){
		minEndTime.push( make_pair(minStartTime.top().second, minStartTime.top().first) );
		minStartTime.pop();
		requiredRooms++;
	}

	while(!minStartTime.empty()){

		pi currMeeting = minStartTime.top();
		minStartTime.pop();

		if(currMeeting.first < minEndTime.top().first){
			minEndTime.push( make_pair(currMeeting.second, currMeeting.first));
            int heapSize = minEndTime.size();
			requiredRooms = max(requiredRooms, heapSize );
		}
		else{
			while( !minStartTime.empty() and !minEndTime.empty() and minEndTime.top().first <= currMeeting.first){
				minEndTime.pop();
			}
			minEndTime.push( make_pair(currMeeting.second, currMeeting.first));
		}
	}
	return requiredRooms;


}


int main(int argc, char const *argv[])
{
	vector< vector<int> >v = {{0,30},
								{16, 21},
								{6,11}};

	int minRooms = rooms(v);
	cout<<minRooms<<endl;

	return 0;
}