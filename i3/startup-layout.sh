#!/bin/bash
sleep 1
i3-msg 'workspace 1; exec alacritty; mark main; split h; exec alacritty; split v; exec alacritty'
