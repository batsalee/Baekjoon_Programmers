#include <iostream>
#include <chrono>

int main()
{
    const auto now = std::chrono::system_clock::now();
    time_t tm_now = std::chrono::system_clock::to_time_t(now);
    struct tm tstruct = *localtime(&tm_now);

    std::cout << tstruct.tm_year + 1900 << '-' << tstruct.tm_mon + 1 << '-' << tstruct.tm_mday;

    return 0;
}