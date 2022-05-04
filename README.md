
# The Rocket

The exercise consist drawing a rocket in the command line. The executable is called *rocket* and acepts as parameter the amount of lines to draw the rocket, without counting the spike (|) and feet (three 'x' at the bottom).

Here is some examples:

````
%> rocket -l 5 

    |
    X
   XXX
  XXXXX
 XXXXXXX
XXXXXXXXX
X   X   X

%> rocket -l 20

                   |
                   X
                  XXX
                 XXXXX
                XXXXXXX
               XXXXXXXXX
              XXXXXXXXXXX
             XXXXXXXXXXXXX
            XXXXXXXXXXXXXXX
           XXXXXXXXXXXXXXXXX
          XXXXXXXXXXXXXXXXXXX
         XXXXXXXXXXXXXXXXXXXXX
        XXXXXXXXXXXXXXXXXXXXXXX
       XXXXXXXXXXXXXXXXXXXXXXXXX
      XXXXXXXXXXXXXXXXXXXXXXXXXXX
     XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
   XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
 XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
X                  X                  X

`````

Additionally, the program accepts an inversion flag. If set, the rocket is drawn upside down:
````
%> rocket -l 5 -i

X   X   X
XXXXXXXXX
 XXXXXXX
  XXXXX
   XXX
    X
    |

````
## Rules

1.   Use *cmake* a build tool. The executable has to build  by just calling:

````
cmake <path to CMakeLists.txt> && make 
````

you can use the template of this repository as starting point.

2. Use Git as scm tool.

3. You can use C++ standard up to c++17.

4. You can use all third party libraries you need, as long as the executable builds as described in Point 1.

5. Please document all assumptions you made.


//*******************************************************************************************************************************
1. Assumtpions
//*******************************************************************************************************************************

To solve the problem I am thinking about creating a class called rocket or something like that. I just don't want to write the code in main funcion.

Evaluating the progression of the number of X in the rocket we can assume that every new row contains n + (n-1) symbols where n is the number of rows starting in 1

To print the rocket in reverse order, we have to do the loop also in the inverse order, starting in the last row and decrementing the count.

//*******************************************************************************************************************************
2. Git usage
//*******************************************************************************************************************************

I have created a develop branch to contain the control version of the developement. Once the development has finished and we have a functional version of the sofware I have merged with the master branch

//*******************************************************************************************************************************
3. Future work and improvements
//*******************************************************************************************************************************

As a future work, we can improve the rocket class adding a new function in order to obtain the characters for a certain row.

We can control the maximum number of characters we can write in the console in order to avoid to use more than one line in the console for a rocket row.

We can also prepare some unit test to control for example what happens if we pass wrong arguments to the software. As another alternative, we can compare if the expected value returned for a specific line fits the expected pattern pattern for this level.

For more extense libraries it is a good practice to add commments in the .h files compatible for doxygen documentation tool 
