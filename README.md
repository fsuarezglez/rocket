
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

To solve the problem I am thinking about creating a class called rocket or something like that. I just don't want to write the code in main funcion.

Evaluating the progression of the number of X in the rocket we can assume that every new row contains n + (n-1) symbols where n is the number of rows starting in 1

To print the rocket in reverse order, we have to do the loop also in the inverse order, starting in the last row and decrementing the count.