#include <p24FJ128GB206.h>
#include "../lib/config.h"
#include "../lib/common.h"
#include "../lib/ui.h"
#include "../lib/timer.h"
#include "../lib/pin.h"

int16_t main(void) {
    //init_pin();
    //init_clock();
    init_ui();
    //init_timer();

    
    // timer_setPeriod(&timer2, .25);
    // timer_start(&timer2);

    while (1) {
        led_on(&led1);    
    //     if (timer_flag(&timer2)) {
    //         timer_lower(&timer2);
    //         led_toggle(&led1);
    //     }
    //     led_write(&led2, !sw_read(&sw2));
    //     led_write(&led3, !sw_read(&sw3));
    }
}

