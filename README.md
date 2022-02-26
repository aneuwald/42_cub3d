# Cub3d

This is a very interesting project of `42 School`. Using a technique called `Raycast` and some math tricks, we were able to replicate (in a simpler way) the 90's famous game called `Wolfenstein 3D`.

You can test the game in this link: http://users.atw.hu/wolf3d/

If you want to know more about raycast technique: https://lodev.org/cgtutor/raycasting.html

## How to compile the code?
This code should run in `MACOS` and `LINUX`. You probably have to make some changes in `Makefile` and toggle the mlx library path on `includes/cub3d.h`.

The current configuration of this repo should run with no issues on 42's computers.

## How to run the game?

You need to run the program with 1 argument, that should be the path of a config file with extension `.cub`.

A working sample can be found in `maps/config.cub`.

Sample of running in a correct way:

```
./cub3d maps/config.cub
```

Inside .cub file, it must present these 7 informations:
* `NO` Path to texture in the North walls
* `SO` Path to texture in the South walls
* `WE` Path to texture in the West walls.
* `EA` Path to texture in the East walls
* `C` RGB code for the Ceilling color
* `F` RGB code for the Floor color
* `MAP` Should be composed by:
	* `0`: Available places where the player can go
	* `1`: Walls. The map must be surrounded by it.
	* `N S W E`: Initial player position and orientation.
	* ` `: Empty spots on map. It can be there, since the `0's` are surrounded by `1's`.

These informations can appear in any order, except from the map, that must be the last.

For more details of the requirements > [Check the subject!](en.subject.pdf)

## Controls

* `W A S D` Move the player around the maze
* `LEFT / RIGHT ARROW` Look to left or right
* `ESC` Quit cub3d appropriately
* `M` Toggle minimap visibility
* `L` Toggle logo visibility
* `R` Toggle raycast points visibility (on minimap)
* `SHIFT` Boost (3x player speed)
* `MOUSE MOVEMENT` Also look to left or right.


## Bonus (3 of 5)

* ✅ Wall collisions
* ✅ A minimap system
* 🔲 Doors which can open and close
* 🔲 Animated sprite
* ✅ Rotate the point of view with the mouse
