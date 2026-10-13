/*
 ============================================================================
 Name        : hw02.c
 Author      : Takeru Yadani b26122803
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    long long mem, track, sector;
    long long GB = 1000 * 1000 * 1000, GiB = 1024 * 1024 * 1024;
    printf("Please input three natural numbers and press ENTER KEY ");
    scanf("%lld %lld %lld", &mem, &track, &sector);

    fflush(stdout);
    long long cap = mem * sector * track * 512;
    double cap1, cap2;

    cap1 = (double)(cap) / (double)(GB);
    cap2 = (double)(cap) /  (double)(GiB);

    printf("%.2fGB(1GB = 1000x1000x1000 byte) \n%.2fGB(1GB = 1024x1024x1024 byte)\n", cap1, cap2);

    return (0);
}