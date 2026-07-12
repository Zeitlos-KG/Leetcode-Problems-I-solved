class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {

        int hs = stoi(startTime.substr(0,2));
        int ms = stoi(startTime.substr(3,2));
        int ss = stoi(startTime.substr(6,2));

        int he = stoi(endTime.substr(0,2));
        int me = stoi(endTime.substr(3,2));
        int se = stoi(endTime.substr(6,2));

        int seconds = (he - hs) * 3600 +
                      (me - ms) * 60 +
                      (se - ss);

        return seconds;
    }
};