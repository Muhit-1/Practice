#include <iostream>
using namespace std;

void calculateTimes(int n, int bt[], int at[])
{
    int wt[n], tat[n];
    float total_wt = 0, total_tat = 0;
    wt[0] = 0;
    for (int i = 1; i < n; i++)
        wt[i] = wt[i - 1] + bt[i - 1];

    for (int i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
        total_wt += wt[i];
        total_tat += tat[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Process " << (i + 1) << ": Waiting Time: " << wt[i] << " Turnaround Time: " << tat[i] <<endl;
    }
    float avg_wt = total_wt / n;
    float avg_tat = total_tat / n;
    cout << "Average Waiting time: " << avg_wt <<endl;
    cout << "Average Turnaround time: " << avg_tat <<endl;
}
int main()
{
    int n;
    cout << "Enter the number of process: ";
    cin >> n;
    int burstTime[n], arrivalTime[n];

    cout << "Enter the CPU times\n";
    for (int i = 0; i < n; i++)
    {
        cin >> burstTime[i];
    }

    cout << "Enter the arrival times\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arrivalTime[i];
    }

    calculateTimes(n, burstTime, arrivalTime);

    return 0;
}
