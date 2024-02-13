#include <string>

#ifndef StatePoint_h
#define StatePoint_h

class StatePoint
{
    private:
        std::string name;
        std::string creationDate; 
        std::string desc;
        
    public:
        StatePoint()
        {
            time_t now = time(0);
            tm* localtm = localtime(&now);
            creationDate = asctime(localtm);
            name = "No name";
            desc = "No description"; 
        }

        std::string getCreationDate()
        {
            return creationDate;
        }

        std::string getName()
        {
            return name;
        }

        std::string getDescription()
        {
            return desc;
        }

        void setName(std::string Name)
        {
            name = Name;
        }

        void setDesc(std::string Desc)
        {
            desc = Desc;
        }

        void print()
        {
            std::cout << "Name: " << getName();  
            std::cout << "\nDescription: " << getDescription();  
            std::cout << "\nCreation Date: " << getCreationDate();  
        }
};
#endif
