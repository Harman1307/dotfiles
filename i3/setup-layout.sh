#!/bin/bash
sleep 2
i3-msg 'workspace 1; exec alacritty; split h; exec alacritty; split v; exec alacritty; focus left; resize set 66 ppt; focus right; focus down; resize set 100 ppt 50 ppt'
