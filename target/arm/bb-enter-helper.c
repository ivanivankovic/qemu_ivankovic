
int started = 0;
void start_bb_enter(void);
void stop_bb_enter(void);
int get_started_bb(void);

void start_bb_enter(void){
    started = 1;
}

void stop_bb_enter(void){
    started = 0;
}

int get_started_bb(void){
    return started;
}