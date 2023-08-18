#ifndef SLEEP
#define SLEEP

#include <chrono>
#include <thread>

namespace Sleep {

    void sleep(int seconds) {
        std::this_thread::sleep_for(std::chrono::seconds(seconds));
    }

}

#endif
