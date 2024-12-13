/*running.c -- A useful program for runners(Marathon's)*/
#include<stdio.h>
const int S_PER_M = 60;         //sedonds in an minute
const int S_PER_H = 3600;       //seconds in an hours
const double M_PER_K = 0.62137; //miles in a kilometer
int main(void)
{
    double distk, distm;     // dist run in km and in miles
    double rate;             // avg speed in mph
    int min, sec;            // min and sec of running time
    int time;                // running time in seconds only
    double mtime;            // time in sec for one mile
    int mmin, msec;          //  min and sec for one mile

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometer, the dist run. \n");
    scanf("%lf",&distk);
    printf("Next enter the time in min and sec.\n");
    printf("Begin by entering the min.\n");
    scanf("%d",&min);
    printf("Now enter the sec.\n");
    scanf("%d", & sec);
//convert time to pure seconds
    time = S_PER_M * min + sec;
//convert kilometers to miles
    distm = M_PER_K * distk;
//miles per sec x sec per hour = mph
    rate = distm / time * S_PER_H;
//time / dist = time per mile
    mtime = (double) time / distm;
    mmin = (int) mtime / S_PER_M;  // find whole minutes
    msec = (int) mtime % S_PER_M;  // find remaining seconds
    printf("Your ran %1.2f km  (%1.2f miles) in %d min, %d sec. \n", distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min,",mmin);
    printf("%d sec. \nYOur average was %1.2f mph.\n", sec, rate);

    return 0;

}