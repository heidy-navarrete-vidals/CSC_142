#include <iostream>
#include <chrono>

class TimerClass {
    
    public:
        TimerClass()
            : m_timestamp{ std::chrono::steady_clock::now() }
        { }
        ~TimerClass()
        {
            auto current = std::chrono::steady_clock::now() - m_timestamp;
            std::cout<<std::chrono::duration_cast<std::chrono::microseconds>(current).count();
            std::cout<<" microseconds\n";
        }

        TimerClass(const TimerClass &rhs)
            : m_timestamp{rhs.m_timestamp}
        {}

        TimerClass& operator=(const TimerClass &rhs)
        {
            if(this == &rhs)
            {
                return *this;
            }
            
            return *this;
        }
    
    private:
        std::chrono::steady_clock::time_point m_timestamp;
    };