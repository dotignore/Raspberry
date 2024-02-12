#!/bin/bash

rm file.txt
touch file.txt

# 1
# tail -n 0 -f file.txt
#tail -n 0 -f file.txt | grep -E '.*SLOT.*TGT.*SRC.*'
#tail -n 0 -f file.txt | egrep '.*TGT.*SRC.*|Encrypted|ALG.*KEY|Source.*Targe|Private|Motorola|Hytera'

# v2
#tmux new-session -d -s my_session
#tmux split-window -v -t my_session

#tmux send-keys -t my_session:0.0 "tail -n 0 -f file.txt" C-m
#tmux send-keys -t my_session:0.1 "tail -n 0 -f file.txt | egrep '.*TGT.*SRC.*|Encrypted|ALG.*KEY|Source.*Targe|Private|Motorola|Hytera'" C-m

#tmux select-pane -t my_session:0.0
#tmux attach-session -t my_session

##################################################################

#dsd-fme -i tcp:127.0.0.1:7355 2> file.txt
#tail -n 0 -f file.txt
#tail -n 0 -f file.txt | egrep '.*TGT.*SRC.*|Encrypted|ALG.*KEY|Source.*Targe|Private|Motorola|Hytera'

##################################################################

#(dsd-fme -i tcp:127.0.0.1:7355 2>&1 > file.txt) & tail -n 0 -f file.txt 


##################################################################

# v2
tmux kill-server

tmux new-session -d -s my_session
tmux split-window -v -t my_session

tmux send-keys -t my_session:0.1 "(dsd-fme -i tcp:127.0.0.1:7355 2> file.txt) & tail -n 0 -f file.txt" C-m
tmux send-keys -t my_session:0.0 "tail -n 0 -f file.txt | egrep '.*TGT.*SRC.*|Encrypted|ALG.*KEY|Source.*Targe|Private|Motorola|Hytera'" C-m
#tmux send-keys -t my_session:0.0 "while true; do tail -n 0 -f file.txt | egrep -m 1 '.*TGT.*SRC.*|Encrypted|ALG.*KEY|Source.*Targe|Private|Motorola|Hytera' | awk 'NR==1 || !seen[\$0]++ {print; last=\$0}'; sleep 1; done" C-m

tmux resize-pane -t my_session:0.0 -y 70

tmux select-pane -t my_session:0.1
tmux attach-session -t my_session


