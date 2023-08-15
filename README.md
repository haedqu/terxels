# Terxels

## First impressions

A super easy-to-use header only library to freely output pixels in an ANSI terminal. It's the 21st centuary which means..... EACH PIXEL COMES IN 16777216 DIFFERENT COLORS!!! No more horrible, downright awful terminal designs where calling them antiquated would be an insult to antique programs.

## The problem

If you've ever tried to create a highly graphical program in the terminal before, you've probably noticed something, it looks terrible. The reason for that is there is no such thing as a pixel when outputting to a terminal. You instead usually come up with ugly hacks like using "#" or "@" to indicate a full entry in a screen buffer. If you get fed-up of looking at that for a few hours, you might come up with the idea of using a fullblock ascii character to represent it instead. This is significantly better but it's still looks like garbage, which leads us to the second reason terminal graphics look ugly: characters in most fonts are super lanky. Everything you draw using them will look very off and super long.

They key insight to make here is to instead let every fullblock character represent two pixels, not one! This leads to extremely good visual results and manages to solve every single problem you had with terminal graphics before, with one catch of course, it is very hard to work with. To have it function properly you need to tediously switch between drawing different ascii codes, along with switching which ansi codes are used for the foreground and backgrounds, but fear not! This library sovles all of this and abstracts it behind a super elegant interface that is dirt simple to not only understand, but to use as well.

## But why?

i think the pretty colors are pretty, ok :3
