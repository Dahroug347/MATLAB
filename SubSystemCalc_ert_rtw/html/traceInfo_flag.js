function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["SubSystemCalc.c:37c46"]=1;
    this.traceFlag["SubSystemCalc.c:44c46"]=1;
    this.traceFlag["SubSystemCalc.c:51c46"]=1;
    this.traceFlag["SubSystemCalc.c:58c46"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["SubSystemCalc.c:37"]=1;
    this.lineTraceFlag["SubSystemCalc.c:44"]=1;
    this.lineTraceFlag["SubSystemCalc.c:51"]=1;
    this.lineTraceFlag["SubSystemCalc.c:58"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
