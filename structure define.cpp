#include<iostream>
#include<list>
using namespace std;

struct hand_joint
{
	double x, y, z;
	string ID;
	list<int> joint;
};
typedef struct hand_joint hj;
struct hand_pose
{
	string time_stamp;
	list<hj>* arr = new list<hj>[21];
};