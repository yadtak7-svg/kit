/*
 ============================================================================
 Name        : hw02.c
 Author      : Takeru Yadani b26122803
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int mem, track, sector;
    int GB = 1000 * 1000 * 1000, GiB = 1024 * 1024 * 1024;
    cout << "Please input three natural numbers and press ENTER KEY ";
	cin >> mem >> track >> sector;

    long long cap = (long long)(mem * sector * track * 512);
    double cap1, cap2;
    cout << cap << endl;
    cap1 = (double)(cap / GB);
    cap2 = (double)(cap / GiB);

    cout <<  cap1 << "GB(1GB = 1000x1000x1000 byte) \n" << cap2 << "GB(1GB = 1024x1024x1024 byte)\n";

	return (0);
}