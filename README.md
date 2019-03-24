# Dialogue-Script

## Syntax :
#### Create a new script
	#SCRIPT_NAME
	 ...
	<END>
#### Create a new line
	> your_text
#### Create a choice 
	<CHOICE> choice_0 choice_1 ... choice_n </>
#### Create a if condition
	<IF value1 condition value2> // Condition is "==", "<=", ... and values are integers
	{
	  ...
	}
#### Use the value of a choice in a if condition 
	{x} //Where x is the number of the choice starting from 0


## Example :

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
