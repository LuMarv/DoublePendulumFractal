import numpy as np
import matplotlib.pyplot as plt

from matplotlib.animation import FuncAnimation


# read out file
t = np.linspace(0,10,4000)
x = np.sin(t)
...

# create animation
fig, ax = plt.subplots()

ax.set_xlims()
ax.set_ylims()

animated_plot, = ax.plot([],[])

def update_plot(frame_idx):
    animated_plot.set_data(t[:],x[:])
    return animated_plot

animation = FuncAnimation(
    fig=fig,
    func=update_plot,
    frames=len(t),
    interval=25,
    repeat=False,
)

...

# store video file
animation.save(filename="/tmp/pendulum_example.mp4", writer="ffmpeg")