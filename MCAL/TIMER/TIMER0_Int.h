#ifndef _TIMRER0_INTERFACE_H
#define _TIMRER0_INTERFACE_H

void TMR0_OF_SetCallBack(void(*LocPFunc)(void));
void TMR0_OCM_SetCallBack(void(*LocPFunc)(void));

void TIMER0_INIT(void);
void TIMER0_OverFlow_Interrupt_Enable(void);
void TIMER0_OCM_Interrupt_Enable(void);
void TIMER0_Timer_Counter(void);
void TIMER0_Output_Compare(void);













#endif
