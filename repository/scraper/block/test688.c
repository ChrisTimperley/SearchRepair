void test(int q, int ctx, int hctx){
if ( q   - >   mq_ops )     {  struct  blk_mq_hw_ctx *   hctx ;  int  i  ;  queue_for_each_hw_ctx ( q       , hctx       , i       )    {  cancel_delayed_work_sync ( ctx    -  >       run_work )    ;  cancel_delayed_work_sync ( ctx    -  >       delay_work )    ;  }    }