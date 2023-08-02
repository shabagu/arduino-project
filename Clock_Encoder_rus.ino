void setup() {
  setup_lcd();
  setup_rtc();
  setup_encoder();
}

void loop( ) {
  check_switch_condition();
  long_push_timer();
  release_timer();
  event_dispatcher();
  display_clock();
}

#define ON  true
#define OFF false
