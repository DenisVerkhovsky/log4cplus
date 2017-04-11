#ifndef LOG4CPLUS_UTILS_H
#define LOG4CPLUS_UTILS_H

#include <chrono>
#include <thread>
namespace Utils
{

void sleep_for(const std::chrono::milliseconds& duration)
{
#ifdef _GLIBCXX_BEGIN_NAMESPACE_VERSION
    std::chrono::steady_clock::time_point then = std::chrono::steady_clock::now();
    std::chrono::steady_clock::time_point now  = std::chrono::steady_clock::now();
    // version for systems without thread support
    while( std::chrono::duration_cast<std::chrono::milliseconds>(now - then) < duration)
        now = std::chrono::steady_clock::now();
#else
    std::this_thread::sleep_for(duration);
#endif
}


} //end of namespace Utils

#endif //UTILS_H
