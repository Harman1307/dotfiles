#!/bin/bash

# Kill any existing polybar
killall -9 polybar 2>/dev/null

# Wait for processes to die
while pgrep -x polybar >/dev/null; do sleep 0.5; done

# Wait for pywal colors to exist
while [ ! -f ~/.cache/wal/colors-polybar ]; do sleep 0.5; done

# Launch polybar (detached completely)
polybar main </dev/null >/dev/null 2>&1 &
disown
