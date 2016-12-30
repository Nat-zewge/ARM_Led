
#include"led.h"

#define LOOP_COUNT 0x3FFFFF

int
main()
{
  led_init();
  
  for(;;){

      led_off();
      delay_t(LOOP_COUNT);
      led_on();
      delay_t(LOOP_COUNT);
      led_off();


  }

  return 0;
}


