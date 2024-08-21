#pragma once
#include <functional>
#include <cstdint>


#ifdef useFreeRTOS
#include <freertos.h>

#elif __ZEPHYR__

#include <zephyr.h>

#endif


namespace TimerEvents {

class TemporaryTimer {
public:
    static constexpr uint8_t TIMER_TYPE_PERIODIC = 0;
    static constexpr uint8_t TIMER_TYPE_ONESHOT = 1;

    using timer_events_handler_t = std::function<void(void*)>;
    TemporaryTimer() {
        if () {
            timerType = TIMER_TYPE_PERIODIC;
        }
        else {
            timerType = TIMER_TYPE_ONESHOT;
        }
    }
    TemporaryTimer() {
      
    }
    ~TemporaryTimer() {
        stopExecute();
    }
    

##ifdef useFreeRTOS


#elif __ZEPHYR__

#endif



private:

    

#ifdef useFreeRTOS
    xTimerHandle timerId;
 

#elif __ZEPHYR__
    uint16_t timerId;

#endif

}; /* class TemporaryTimer */



class PersistentTimer {


}; /* class PersistentTimer  */

} /* TimerEvents */