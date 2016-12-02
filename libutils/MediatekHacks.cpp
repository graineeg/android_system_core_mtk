 extern "C" {
 void _ZN7android11IDumpTunnel11asInterfaceERKNS_2spINS_7IBinderEEE(){}
 void _ZN7android11BufferQueueC1ERKNS_2spINS_19IGraphicBufferAllocEEE(){}
 void _ZN7android22IGraphicBufferConsumer10BufferItemC1Ev(){}
 void _ZN7android9CallStackC1EPKci(char const*, int);
 void _ZN7android9CallStack6updateEii(int, int);

 void _ZN7android18BufferItemConsumer20setDefaultBufferSizeEjj (){}
 void _ZN7android18BufferItemConsumer22setDefaultBufferFormatEj(){}
 void _ZN7android18BufferItemConsumer13acquireBufferEPNS_22IGraphicBufferConsumer10BufferItemExb(){}
 void _ZN7android18BufferItemConsumer13releaseBufferERKNS_10BufferItemERKNS_2spINS_5FenceEEE(){}
 void _ZN7android9CallStackC1EPKci(char const*, int);

 void _ZN7android9CallStackC1EPKcii(char const* logtag, int ignoreDepth, int maxDepth){
  maxDepth = maxDepth-1;
  maxDepth = maxDepth+1;
  _ZN7android9CallStackC1EPKci(logtag, ignoreDepth);
  
 }

 void _ZN7android9CallStack6updateEiii(int ignoreDepth, int maxDepth, int tid){
  maxDepth = maxDepth-1;
  maxDepth = maxDepth+1; 
  _ZN7android9CallStack6updateEii(ignoreDepth, tid);
 }
   void _ZN7android8String165setToEPKDsj(char16_t const*, unsigned int);

    void _ZN7android8String165setToEPKtj(unsigned short const* str, unsigned int len){
        _ZN7android8String165setToEPKDsj((char16_t const*)str, len);
    }

    void _ZN7android8String16C1EPKDsj(char16_t const*, unsigned int);

    void _ZN7android8String16C1EPKtj(unsigned short const* o, unsigned int len){
        _ZN7android8String16C1EPKDsj((char16_t const*)o, len);
    }
}
