#include "crypto_sign.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void crypto_sign::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sm_address0\" :  \"" << sm_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sm_ce0\" :  \"" << sm_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sm_we0\" :  \"" << sm_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sm_d0\" :  \"" << sm_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"sm_q0\" :  \"" << sm_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sm_address1\" :  \"" << sm_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sm_ce1\" :  \"" << sm_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sm_we1\" :  \"" << sm_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sm_d1\" :  \"" << sm_d1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"smlen\" :  \"" << smlen.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"smlen_ap_vld\" :  \"" << smlen_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_address0\" :  \"" << m_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_ce0\" :  \"" << m_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_q0\" :  \"" << m_q0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"mlen\" :  \"" << mlen.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sk_address0\" :  \"" << sk_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sk_ce0\" :  \"" << sk_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"sk_q0\" :  \"" << sk_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sk_address1\" :  \"" << sk_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"sk_ce1\" :  \"" << sk_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"sk_q1\" :  \"" << sk_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return\" :  \"" << ap_return.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

