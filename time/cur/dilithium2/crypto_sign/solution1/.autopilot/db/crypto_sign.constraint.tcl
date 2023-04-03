set clock_constraint { \
    name clk \
    module crypto_sign \
    port ap_clk \
    period 10000 \
    uncertainty 1250 \
}

set all_path {}

set false_path {}

