void test(int missing, int ioprio_class, int cfqq, int current, int async_cfqq, int ioprio, int tsk, int s_sync){
if ( s_sync     )     { if ( oprio_valid ( cic    -        <missing ')'>    >  ioprio     )  )    {  struct  task_struct *  tsk = current        ;  ioprio = task_nice_ioprio ( tsk       )          ;  ioprio_class = task_nice_ioclass ( tsk       )          ;  }      async_cfqq = cfq_async_queue_prio ( cfqd       , ioprio_class       , ioprio       )          ;  cfqq = *   async_cfqq ;  }    }