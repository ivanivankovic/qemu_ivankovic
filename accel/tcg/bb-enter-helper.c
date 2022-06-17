
// state:
// 0 - stopped
// 1 - running
// 2 - clear -> 0
// 3 - save -> clear

int state = -1;
void stop_bb_enter(void);
void start_bb_enter(void);
void clear_bb_enter(void);
void save_bb_enter(void);
void real_start_bb_enter(void);
int get_started_bb(void);

void stop_bb_enter(void)
{
    state = 0;
}

void start_bb_enter(void)
{
    state = 1;
}

void clear_bb_enter(void)
{
    state = 2;
}

void save_bb_enter(void)
{
    state = 3;
}

void real_start_bb_enter(void){
    state = 1;
}

int get_started_bb(void)
{
    return state;
}
