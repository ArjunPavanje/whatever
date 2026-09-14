transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+bram_cell  -L xil_defaultlib -L xpm -L blk_mem_gen_v8_4_12 -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.bram_cell xil_defaultlib.glbl

do {bram_cell.udo}

run 1000ns

endsim

quit -force
