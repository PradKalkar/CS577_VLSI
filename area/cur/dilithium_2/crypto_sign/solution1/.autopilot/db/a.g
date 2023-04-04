#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/anirudh/Desktop/Academics/vlsi_2/CS577_VLSI/area/cur/dilithium_2/crypto_sign/solution1/.autopilot/db/a.g.bc ${1+"$@"}
