void enable_polyphase_ASC(void);
void disable_polyphase_ASC(void);
void disable_div_power_ASC(void);
void enable_div_power_ASC(void);
void ext_clk_ble_ASC(void);
void int_clk_ble_ASC(void);
void enable_1mhz_ble_ASC(void);
void disable_1mhz_ble_ASC(void);
void set_LC_current(unsigned int current);
void set_PA_supply(unsigned int code);
void set_LO_supply(unsigned int code, unsigned char panic);
void set_DIV_supply(unsigned int code, unsigned char panic);
void prescaler(int code);
void LC_monotonic(int LC_code);
void LC_FREQCHANGE(int coarse, int mid, int fine);
