#!/usr/bin/ruby
$<.map{|e|p 1<<e.scan(/[TDLF]/).size}