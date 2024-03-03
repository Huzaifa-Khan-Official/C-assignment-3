#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Function to convert time string to minutes
int timeToMinutes(string timeStr) {
    int hours, minutes;
    char colon;
    char am_pm;
    stringstream ss(timeStr);
    ss >> hours >> colon >> minutes >> am_pm;

    if (am_pm == 'p' && hours != 12) {
        hours += 12;
    } else if (am_pm == 'a' && hours == 12) {
        hours = 0;
    }

    return hours * 60 + minutes;
}

int main() {
    string startTime, endTime;

    // Input start time
    cout << "Enter start time (hh:mm am/pm): ";
    getline(cin, startTime);

    // Input end time
    cout << "Enter end time (hh:mm am/pm): ";
    getline(cin, endTime);

    // Convert time strings to minutes
    int startMinutes = timeToMinutes(startTime);
    int endMinutes = timeToMinutes(endTime);

    // Calculate difference in minutes
    int totalMinutes = endMinutes - startMinutes;

    if (totalMinutes < 0) {
        totalMinutes += 24 * 60; // Add a day's worth of minutes if end time is before start time
    }

    cout << "Total minutes between the two times: " << totalMinutes << " minutes" << endl;

    return 0;
}

