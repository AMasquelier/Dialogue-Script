# Dialogue-Script

### Syntax :
Create a new line :
	> your_text
Create a choice :
<CHOICE> choice1 choice2 ... choicen </>


### Example :

####Ecrire du code

#####Un code entier

Voici un code en C :

    int main()
    {
        printf("Hello world!\n");
        return 0;
    }

#####Script_ex
'#TEST
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
<END>'
	
![alt text][Demo]

[Demo]: Gif35.gif "Logo Title Text 2"
