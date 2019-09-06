/* ###*B*###
 *
 * ERIKA Enterprise - a tiny RTOS for small microcontrollers
 * 
 * Copyright (C) 2002-2018 Evidence Srl
 * 
 * This file is part of ERIKA Enterprise.
 * 
 * See LICENSE file.
 *
 * ###*E*### */

/***************************************************************************
 *
 * This file is generated by RT-Druid.
 * Please do not modify it.
 *
 **************************************************************************/

#ifndef OSEE_RTD_DECLCFG_H
#define OSEE_RTD_DECLCFG_H

#if (defined(__cplusplus))
extern "C" {
#endif

/* This header file is supposed to be included only through collector headers
   (ee.h, ee_conf.h or ee_internal.h) */

/***************************************************************************
 *
 * Declare tasks
 *
 **************************************************************************/
DeclareTask(TaskM);
DeclareTask(TaskCpu0);
DeclareTask(Task2);
DeclareTask(Task3);
DeclareTask(TASK_1MS);
DeclareTask(TASK_5MS);
DeclareTask(TASK_10MS);
DeclareTask(TASK_20MS);
DeclareTask(TASK_50MS);
DeclareTask(TASK_100MS);




/***************************************************************************
 *
 * Declare Idle Hooks
 *
 **************************************************************************/


/***************************************************************************
 *
 * Alarms Callbacks
 *
 **************************************************************************/



#if (defined(__cplusplus))
}
#endif

/***************************************************************************
 *
 * End
 *
 **************************************************************************/
#endif /* OSEE_RTD_DECLCFG_H */

