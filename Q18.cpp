#include<iostream>
#include<iomanip>
#include <math.h>


using namespace std;
int main() {
	//Paint
	float door_len, door_wid, win1_len, win1_wid,win2_len, win2_wid, shel_len, shel_wid,room_len, room_wid, room_hei,door_area, win_area, shel_area, room_area, wall_area, total_paint;
	cout << "Enter the length and width of door in feet\n";
	cin >> door_len >> door_wid;
	cout << "Enter the length and width of 1st window in feet\n";
	cin >> win1_len >> win1_wid;
	cout << "Enter the length and width of 2nd window in feet\n";
	cin >> win2_len >> win2_wid;
	cout << "Enter the length and width of the bookshelf in feet\n";
	cin >> shel_len >> shel_wid;
	cout << "Enter the length,width and height of the room in feet\n";
	cin >> room_len >> room_wid >> room_hei;

	door_area = door_len * door_wid;
	win_area = (win1_len * win1_wid) + (win2_len * win2_wid);
	shel_area = shel_len * shel_wid;
	room_area = 2 * (room_len + room_wid) * room_hei;
	wall_area = room_area - (door_area + win_area + shel_area);

	total_paint = (1.0 / 120) * wall_area;

	cout << "The total paint required to paint all the walls of a room are "<< total_paint << " Gallons";



	return 0;
}
