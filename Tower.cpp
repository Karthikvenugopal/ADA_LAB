#include<iostream>
using namespace std;
void hanoi(int n, char src, char temp, char dest)
{
	if (n == 1)
	{
		cout<<"Move disk 1 from "<<src<<" to "<<dest<<endl;
		return;
	}
	hanoi(n-1, src, dest, temp);
	cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
	hanoi(n-1, temp, src, dest);
}
int main()
{
	int n;
	cout<<"Enter number of disks:";
	cin>>n;
	hanoi(n, 'A', 'B', 'C');
}