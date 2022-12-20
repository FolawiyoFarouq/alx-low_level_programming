#!/bin/bash



current_time=$(curl -s "http://worldtimeapi.org/api/ip" | python3 -m json.tool | grep "\"datetime\":" | cut --delimiter=" " --fields=6- | tr -d "\""| tr -d ",")
puts(\"Programming is like building a multilingual puzzle)
