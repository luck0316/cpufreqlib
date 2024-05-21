
#include <iostream>

#include <conio.h>
#include <windows.h>
#include "../include/cpufreqlib.h"
#include <iomanip>
#define ms_sleep(x) Sleep(x)

int main()
{
    std::cout << "开始咯"<<std::endl;
    float base_freq = get_base_cpu_freq_hz();
    std::cout << "Base CPU frequency is " << base_freq / 1e9f << " Ghz" << std::endl;

    while (!_kbhit())
    {
        float freq = get_curr_cpu_freq_hz();
        std::cout << "CPU Frequency is "<< freq / 1e9f << " Ghz" << std::endl;
        ms_sleep(200);
    }

    return 0;
}

