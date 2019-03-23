# Dialogue-Script

### Syntax 
#### Create a new line
	> your_text
#### Create a choice 
	<CHOICE> choice_1 choice_2 ... choice_n </>
#### Use the value of a choice in a if condition 
	{x} //Where x is the number of the choice starting from 0


### Example :

	#TEST
	> Blah_blah_blah_blah
	> Test
	> _
	<CHOICE> Un Deux </>
	<IF {0} == 2>
	{
		> Two
	}
	<IF {0} != 2>
	{
		<IF {0} > 2>
		{
			> More_Than_2
		}
		<IF {0} < 2>
		{
			> Less_Than_2
		}
	}
	> End_of_the_script
	<END>
	
![alt text][Demo]

[Demo]: Gif35.gif "Logo Title Text 2"
