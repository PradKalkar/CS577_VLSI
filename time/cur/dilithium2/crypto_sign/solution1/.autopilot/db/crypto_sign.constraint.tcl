set clock_constraint { \
    name clk \
    module crypto_sign \
    port ap_clk \
    period 10000 \
    uncertainty 2700 \
}

set all_path {}

set false_path {}

