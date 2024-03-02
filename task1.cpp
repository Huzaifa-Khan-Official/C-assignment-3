#include <iostream>
#include <string>

using namespace std;

int main() {
    string start, end;
    int start_hours, start_minutes, end_hours, end_minutes;
    char colon;
    string am_pm;

    // Input start time
    cout << "Enter start time (hh:mmAM/PM): ";
    cin >> start_hours >> colon >> start_minutes >> am_pm;

    // Convert start time to 24-hour format
    if (am_pm == "PM" && start_hours != 12) {
        start_hours += 12;
    } else if (am_pm == "AM" && start_hours == 12) {
        start_hours = 0;
    }

    // Input end time
    cout << "Enter end time (hh:mmAM/PM): ";
    cin >> end_hours >> colon >> end_minutes >> am_pm;

    // Convert end time to 24-hour format
    if (am_pm == "PM" && end_hours != 12) {
        end_hours += 12;
    } else if (am_pm == "AM" && end_hours == 12) {
        end_hours = 0;
    }

    // Calculate total minutes
    int total_minutes_start = start_hours * 60 + start_minutes;
    int total_minutes_end = end_hours * 60 + end_minutes;
    int total_minutes = total_minutes_end - total_minutes_start;

    // If end time is before start time, add a day
    if (total_minutes < 0) {
        total_minutes += 24 * 60;
    }

    // Output total minutes
    cout << "Minutes between " << start_hours << ":" << start_minutes << am_pm << " to " 
         << end_hours << ":" << end_minutes << am_pm << ": " << total_minutes << endl;

    return 0;
}
