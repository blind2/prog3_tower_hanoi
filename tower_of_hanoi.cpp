
#include "Hanoi.h"
#include"Tower.h"
#include <iostream>
#include<stack>

int main()
{
    int start;
    int end;
    Tower tower1{3};
    Tower tower2{3};
    Tower tower3{3}; 
    Hanoi hanoiSmall{ 1 };
    Hanoi hanoiMedium{ 2 };
    Hanoi hanoiLarge{ 3 };
    tower1.stack.push(hanoiLarge);
    tower1.stack.push(hanoiMedium);
    tower1.stack.push(hanoiSmall); 
    Tower towertab[3]{ tower1, tower2, tower3 };

    for (int i = 0; i < 3; i++)
    {
        towertab[i].show();
    }

    while (!towertab[0].checkCombinaison() || !towertab[1].checkCombinaison() || !towertab[2].checkCombinaison())
    {
        std::cout << "Choisir une chiffre de 0 a 2: " << "\n";
        std::cout << "Tour de depart: " << "\n";
        std::cin >> start;
        std::cout << "Deplacer ver la tour:" << "\n";
        std::cin >> end;
      
        if (start <3 && end <3)
        {
            if (!towertab[start].stack.empty()|| !towertab[end].stack.empty())
            {
                
                 towertab[end].stack.push(towertab[start].stack.top());
                 towertab[start].stack.pop();

                 system("CLS");

                  for (int i = 0; i < 3; i++)
                  {
                     towertab[i].show();
                  }                        
            }
        }        
        else
        {
            std::cout << "Veuillez recomencer"<<"\n"<<"\n";
        }      
    } 
    std::cout << "Partie Terminer" << "\n" << "\n";

};
