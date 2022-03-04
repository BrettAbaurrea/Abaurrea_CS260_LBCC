README

I was able to add a remove and insert function, although there are quite a few bugs I ran in to.

With the insert function, you are unable to insert the value at the first index multiple times

With the remove function, if you try to remove a value that is not in the list, it just removes the last value in the list

With the atIndex (search) function, whatever value you search for, the index returned will always be -1.
I'm pretty sure I didn't implement this function at all correctly but this is what I was trying to do:

atIndex{
	set current position to front
	once user enters index value/location find that spot in the list
	display the results to the user
	
	do NOT remove this value just simply display it