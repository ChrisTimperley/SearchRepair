int test(int wait){
if ( tg_with_in_bps_limit ( tg       , bio       , ps_wait       )     && tg_with_in_iops_limit ( tg       , bio       , ops_wait       )       )     { if ( wait     )     return 1       ;      }    }