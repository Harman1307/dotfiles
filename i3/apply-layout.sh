#!/bin/bash
sleep 2
i3-msg 'workspace 1; exec alacritty; mark LEFT; split h; exec alacritty; split v; exec alacritty; focus parent; focus parent; resize set 50 ppt; focus child; focus child; resize set 100 ppt 50 ppt'
